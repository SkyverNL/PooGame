#include "Enemies.h"
#include <assert.h>




void Enemies::Init(int I_X, int I_Y, float I_VY, float I_VX)
{

	if (!Loaded)
	{

		X = I_X;
		Y = I_Y;
		VX = I_VX;
		VY = I_VY;

		Loaded = true;
	}
}

void Enemies::ScreenBorderY()
{

	if (Y <= 3)
	{
		++Y;
		VY = -VY;
	}

	if (Y >= Graphics::ScreenHeight - WH -3)
	{
		--Y;
		VY = -VY;
	}
}

void Enemies::ScreenBorderX()
{

	if (X <= 3)
	{
		++X;
		VX = -VX;
	}

	if (X >= Graphics::ScreenWidth - WH-3)
	{
		--X;
		VX = -VX;
	}
}


bool Enemies::GetState() const
{
	return OnOffState;
}







void Enemies::Drawcode(Graphics& gfx)
{

	gfx.PutPixel(14 + X, 0 + Y, 138, 77, 0);
	gfx.PutPixel(7 + X, 1 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 1 + Y, 138, 77, 0);
	gfx.PutPixel(20 + X, 1 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 2 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 2 + Y, 138, 77, 0);
	gfx.PutPixel(20 + X, 2 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 3 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 4 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 4 + Y, 138, 77, 0);
	gfx.PutPixel(21 + X, 4 + Y, 138, 77, 0);
	gfx.PutPixel(7 + X, 5 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 5 + Y, 138, 77, 0);
	gfx.PutPixel(21 + X, 5 + Y, 138, 77, 0);
	gfx.PutPixel(7 + X, 6 + Y, 138, 77, 0);
	gfx.PutPixel(20 + X, 6 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 7 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 7 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 7 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 7 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 8 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 8 + Y, 51, 28, 0);
	gfx.PutPixel(14 + X, 8 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 9 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 9 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 9 + Y, 102, 57, 0);
	gfx.PutPixel(13 + X, 9 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 9 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 9 + Y, 51, 28, 0);
	gfx.PutPixel(21 + X, 9 + Y, 138, 77, 0);
	gfx.PutPixel(10 + X, 10 + Y, 51, 28, 0);
	gfx.PutPixel(11 + X, 10 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 10 + Y, 102, 57, 0);
	gfx.PutPixel(13 + X, 10 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 10 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 10 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 10 + Y, 138, 77, 0);
	gfx.PutPixel(9 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 11 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 11 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(14 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(16 + X, 11 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 12 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 12 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 12 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 12 + Y, 111, 62, 0);
	gfx.PutPixel(13 + X, 12 + Y, 102, 57, 0);
	gfx.PutPixel(14 + X, 12 + Y, 102, 57, 0);
	gfx.PutPixel(15 + X, 12 + Y, 102, 57, 0);
	gfx.PutPixel(16 + X, 12 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 13 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 13 + Y, 109, 61, 0);
	gfx.PutPixel(11 + X, 13 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 13 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 13 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 13 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 13 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 13 + Y, 51, 28, 0);
	gfx.PutPixel(5 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(8 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(11 + X, 14 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 14 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 14 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 14 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 14 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 14 + Y, 51, 28, 0);
	gfx.PutPixel(4 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(5 + X, 15 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 15 + Y, 116, 65, 0);
	gfx.PutPixel(8 + X, 15 + Y, 138, 77, 0);
	gfx.PutPixel(9 + X, 15 + Y, 138, 77, 0);
	gfx.PutPixel(10 + X, 15 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(14 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(16 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(17 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(18 + X, 15 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(2 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(3 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(4 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(5 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 16 + Y, 116, 65, 0);
	gfx.PutPixel(8 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(9 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(10 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 16 + Y, 109, 61, 0);
	gfx.PutPixel(14 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(17 + X, 16 + Y, 138, 77, 0);
	gfx.PutPixel(18 + X, 16 + Y, 123, 69, 0);
	gfx.PutPixel(19 + X, 16 + Y, 51, 28, 0);
	gfx.PutPixel(0 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 17 + Y, 87, 49, 0);
	gfx.PutPixel(2 + X, 17 + Y, 87, 49, 0);
	gfx.PutPixel(3 + X, 17 + Y, 87, 49, 0);
	gfx.PutPixel(4 + X, 17 + Y, 87, 49, 0);
	gfx.PutPixel(5 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(6 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 17 + Y, 43, 24, 0);
	gfx.PutPixel(8 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(11 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 17 + Y, 40, 22, 0);
	gfx.PutPixel(14 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 17 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 17 + Y, 138, 77, 0);
	gfx.PutPixel(17 + X, 17 + Y, 138, 77, 0);
	gfx.PutPixel(18 + X, 17 + Y, 123, 69, 0);
	gfx.PutPixel(19 + X, 17 + Y, 51, 28, 0);
	gfx.PutPixel(0 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(2 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(3 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(4 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(5 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(6 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(8 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(11 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(14 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(17 + X, 18 + Y, 138, 77, 0);
	gfx.PutPixel(18 + X, 18 + Y, 123, 69, 0);
	gfx.PutPixel(19 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(21 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(22 + X, 18 + Y, 51, 28, 0);
	gfx.PutPixel(0 + X, 19 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(2 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(3 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(4 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(5 + X, 19 + Y, 51, 28, 0);
	gfx.PutPixel(6 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(7 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(8 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(9 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(10 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(17 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(18 + X, 19 + Y, 123, 69, 0);
	gfx.PutPixel(19 + X, 19 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(21 + X, 19 + Y, 138, 77, 0);
	gfx.PutPixel(22 + X, 19 + Y, 65, 36, 0);
	gfx.PutPixel(23 + X, 19 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(2 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(3 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(4 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(5 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(6 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(7 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(8 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(9 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(10 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(11 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(12 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(13 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(14 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(15 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(16 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(17 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(18 + X, 20 + Y, 123, 69, 0);
	gfx.PutPixel(19 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(21 + X, 20 + Y, 138, 77, 0);
	gfx.PutPixel(22 + X, 20 + Y, 65, 36, 0);
	gfx.PutPixel(23 + X, 20 + Y, 51, 28, 0);
	gfx.PutPixel(0 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 21 + Y, 138, 77, 0);
	gfx.PutPixel(2 + X, 21 + Y, 138, 77, 0);
	gfx.PutPixel(3 + X, 21 + Y, 138, 77, 0);
	gfx.PutPixel(4 + X, 21 + Y, 138, 77, 0);
	gfx.PutPixel(5 + X, 21 + Y, 138, 77, 0);
	gfx.PutPixel(6 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(7 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(8 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(9 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(10 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(11 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(12 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(13 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(14 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(15 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(16 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(17 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(18 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(20 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(21 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(22 + X, 21 + Y, 51, 28, 0);
	gfx.PutPixel(0 + X, 22 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 22 + Y, 65, 36, 0);
	gfx.PutPixel(2 + X, 22 + Y, 65, 36, 0);
	gfx.PutPixel(3 + X, 22 + Y, 65, 36, 0);
	gfx.PutPixel(4 + X, 22 + Y, 65, 36, 0);
	gfx.PutPixel(5 + X, 22 + Y, 65, 36, 0);
	gfx.PutPixel(6 + X, 22 + Y, 51, 28, 0);
	gfx.PutPixel(1 + X, 23 + Y, 51, 28, 0);
	gfx.PutPixel(2 + X, 23 + Y, 51, 28, 0);
	gfx.PutPixel(3 + X, 23 + Y, 51, 28, 0);
	gfx.PutPixel(4 + X, 23 + Y, 51, 28, 0);
	gfx.PutPixel(5 + X, 23 + Y, 51, 28, 0);
	gfx.PutPixel(6 + X, 23 + Y, 51, 28, 0);

}

bool Enemies::EatDetection(Player & player)
{
	assert(Loaded == true);

	int BaseUp;
	int BaseDown;
	int BaseLeft;
	int BaseRight;

	int TargetUp;
	int TargetLeft;
	int TargetRight;
	int TargetDown;


	BaseUp = player.GetY();
	BaseDown = player.GetY() + player.GetWH();
	BaseLeft = player.GetX();
	BaseRight = player.GetX() + player.GetWH();

	TargetUp = Y;
	TargetLeft = X;
	TargetRight = X + WH;
	TargetDown = Y + WH;




	if (BaseLeft <= TargetRight && TargetLeft <= BaseRight &&
		BaseUp <= TargetDown && TargetUp <= BaseDown)
	{
		if (!OnOffState)
		{
			OnOffState = true;
			return true;
		}
	}
	return false;




}

void Enemies::SetStateForLives()
{
	if (StateLife)
	{

	}
	else
	{
		if (OnOffState)
		{
			StateLife = true;
		}
	}


}



void Enemies::velo()
{

	X = X + VX;
	Y = Y + VY;
}

void Enemies::Draw(Graphics& gfx)
{
	if (!OnOffState)
	{

		Drawcode(gfx);

	}



}
