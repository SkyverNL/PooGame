/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include <random>
#include <assert.h>


Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
	std::random_device rd;
	std::mt19937 rng( rd() );
	std::uniform_int_distribution<int> Xdist( 1, 750 );
	std::uniform_int_distribution<int> Ydist( 1, 550 );

	std::uniform_int_distribution<int> velo( -3, 3 );

	goal.initload( Xdist( rng ) );

	if( !InitialLoad )
	{
		for( int i = 0; i < MaxE; ++i )
		{
			poos[ i ].Init( Xdist( rng ), Ydist( rng ), velo( rng ), velo( rng ) );
		}
	}
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	P0.UpdateMovement( wnd );
	P0.ScreenborderY();
	P0.ScreenBorderX();

	goal.HitDetection( P0 );

	for( int i = 0; i < MaxE; i++ )
	{
		poos[ i ].ScreenBorderX();
		poos[ i ].ScreenBorderY();
		poos[ i ].EatDetection( P0 );
		poos[ i ].velo();
	}
}

void Game::ComposeFrame()
{
	bool AllEaten = true;
	for( int i = 0; i < MaxE; i++ )
	{
		AllEaten = AllEaten && poos[ i ].GetState();
	}

	if( !AllEaten )
	{
		for( int i = 0; i < MaxE; i++ )
		{
			if( !poos[ i ].GetState() )
			{
				poos[ i ].Draw( gfx );
			}
		}

		if( !goal.WasHit() )
		{
			goal.Drawcode( gfx );
		}

		P0.DrawingCode( gfx );
	}
}
