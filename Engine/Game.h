/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Player.h"
#include "Enemies.h"
#include "Goal.h"
#include "Sound.h"
#include "SoundEffect.h"
#include "DrawCode.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	std::random_device rd;
	std::mt19937 rng;



	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	Goal goal;
	SoundEffect sound;
	Sound Gameover;
	DrawCode DC;
	Sound point;
	/********************************/
	/*  User Variables              */
	/********************************/
	bool StartCheck();
	bool GameStart = false;
	bool Dead = false;

	bool InitialLoad = false;

	int X1 = 200;
	int Y1 = 100;

	Player P0;

	static constexpr int MaxE = 10;

	bool PlayerHit = false;

	Enemies poos[MaxE];


};