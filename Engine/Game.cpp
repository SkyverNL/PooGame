#include "MainWindow.h"
#include "Game.h"
#include <random>
#include <assert.h>


Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	DC(DC),
	rng( rd() ),
	sound( { L"fart0.wav",L"fart1.wav",L"fart2.wav" } ),
	Gameover( L"gameoy.wav" ),
	point(L"smw_coin.wav")
{
	std::uniform_int_distribution<int> Xdist( 1, 750 );
	std::uniform_int_distribution<int> Ydist( 1, 550 );

	std::uniform_int_distribution<int> velo( -3, 3 );

	goal.initload( Xdist( rng ),Ydist(rng) );

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

bool Game::StartCheck()
{
	if (wnd.kbd.KeyIsPressed(VK_RETURN))
	{
		GameStart = true;
		return true;
	}
	else
	return false;
}

void Game::UpdateModel()
{
	StartCheck();
	if (GameStart)
	{
		if (!Dead)
		{
			int lives = 0;
			for (int i = 0; i < MaxE; i++)
			{
				poos[i].SetStateForLives();
			}
			P0.UpdateMovement(wnd);
			P0.ScreenborderY();
			P0.ScreenBorderX();
			goal.HitDetection(P0);

			for (int i = 0; i < MaxE; i++)
			{
				poos[i].ScreenBorderX();
				poos[i].ScreenBorderY();
				if (poos[i].EatDetection(P0))
				{
					sound.Play(rng);
				}
				poos[i].velo();
			}
		}
	}
}




void Game::ComposeFrame()
{
	int lives = 0;
	if (GameStart)
	{
		goal.ScoreBoard(gfx);

		if (goal.MasterSwitch)
		{
			DC.YouWin();
		}
		else
		{
			if (!Dead)
			{

				if (!Dead)
				{
					for (int i = 0; i < MaxE; i++)
					{
						if (poos[i].StateLife)
						{
							lives++ ;
						}
					}
					
				}
				//-----------------------------------------------------
				if (lives == 4)
				{
					Dead = true;
					Gameover.Play();
				}
				gfx.drawSetBox(1, 11, 10, lives * 199, 200, 0, 0);

				//-----------------------------------------------------
				for (int i = 0; i < MaxE; i++)
				{

					poos[i].Draw(gfx);

				}

				if (!goal.WasHit())
				{
					goal.Drawcode(gfx);
				}
				else
				{
					point.Play();
					goal.respawn();
				}

				P0.DrawingCode(gfx);
			}
			else
			{
				DC.DrawGameOver(gfx);
			}
		}

	}
	else
	{
		DC.StartScreen(gfx);
	}

}
