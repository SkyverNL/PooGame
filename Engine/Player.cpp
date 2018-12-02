#include "Player.h"

void Player::ScreenborderY()
{
	if (Y <= 1)
	{
		Y++;
	}

	if (Y >= Graphics::ScreenHeight - WH)
	{
		Y--;
	}

}

void Player::ScreenBorderX()
{

	if (X <= 1)
	{
		X++;
	}

	if (X >= Graphics::ScreenWidth - WH)
	{
		X--;
	}

}


void Player::UpdateMovement(MainWindow& wnd)
{
	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		Y--;
	}

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		Y++;
	}

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		X--;
	}

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		X++;
	}



}

int Player::GetX() const
{
	return X;   //this is where the error gets trown //test test ignore
}

int Player::GetY() const
{
	return Y;
}

int Player::GetWH() const
{
	return WH;
}




void Player::DrawingCode(Graphics& gfx)
{
	gfx.PutPixel(7 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(8 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(9 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(10 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(12 + X, 0 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 1 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 1 + Y, 0, 0, 0);
	gfx.PutPixel(7 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 1 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 1 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 1 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 2 + Y, 0, 0, 0);
	gfx.PutPixel(4 + X, 2 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(14 + X, 2 + Y, 254, 221, 88);
	gfx.PutPixel(15 + X, 2 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 2 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 3 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(14 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(15 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 3 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 3 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 4 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(14 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(15 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 4 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 4 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(4 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(12 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(13 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 5 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 5 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 6 + Y, 255, 255, 255);
	gfx.PutPixel(4 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 6 + Y, 255, 255, 255);
	gfx.PutPixel(12 + X, 6 + Y, 255, 255, 255);
	gfx.PutPixel(13 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 6 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 6 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 7 + Y, 255, 255, 255);
	gfx.PutPixel(3 + X, 7 + Y, 255, 255, 255);
	gfx.PutPixel(4 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 7 + Y, 255, 255, 255);
	gfx.PutPixel(12 + X, 7 + Y, 255, 255, 255);
	gfx.PutPixel(13 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 7 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 7 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(3 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(4 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(5 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(12 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(13 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(14 + X, 8 + Y, 255, 255, 255);
	gfx.PutPixel(15 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 8 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 8 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(2 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(4 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(12 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(13 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 9 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 9 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 10 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(2 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(14 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(15 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 10 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 10 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 11 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(2 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(7 + X, 11 + Y, 20, 14, 18);
	gfx.PutPixel(8 + X, 11 + Y, 18, 11, 14);
	gfx.PutPixel(9 + X, 11 + Y, 18, 12, 14);
	gfx.PutPixel(10 + X, 11 + Y, 18, 12, 14);
	gfx.PutPixel(11 + X, 11 + Y, 21, 13, 16);
	gfx.PutPixel(12 + X, 11 + Y, 24, 11, 15);
	gfx.PutPixel(13 + X, 11 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(15 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 11 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 11 + Y, 0, 0, 0);
	gfx.PutPixel(0 + X, 12 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(2 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(6 + X, 12 + Y, 23, 9, 23);
	gfx.PutPixel(7 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(8 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(9 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(10 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(11 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(12 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(13 + X, 12 + Y, 135, 26, 68);
	gfx.PutPixel(14 + X, 12 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(16 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 12 + Y, 254, 221, 88);
	gfx.PutPixel(19 + X, 12 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 13 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 13 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 13 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 13 + Y, 254, 221, 88);
	gfx.PutPixel(5 + X, 13 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(7 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(8 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(9 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(10 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(11 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(12 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(13 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(14 + X, 13 + Y, 135, 26, 68);
	gfx.PutPixel(15 + X, 13 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 13 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 13 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 13 + Y, 0, 0, 0);
	gfx.PutPixel(1 + X, 14 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 14 + Y, 254, 221, 88);
	gfx.PutPixel(3 + X, 14 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 14 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(6 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(7 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(8 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(9 + X, 14 + Y, 251, 192, 224);
	gfx.PutPixel(10 + X, 14 + Y, 251, 192, 224);
	gfx.PutPixel(11 + X, 14 + Y, 251, 192, 224);
	gfx.PutPixel(12 + X, 14 + Y, 251, 192, 224);
	gfx.PutPixel(13 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(14 + X, 14 + Y, 135, 26, 68);
	gfx.PutPixel(15 + X, 14 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 14 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 14 + Y, 254, 221, 88);
	gfx.PutPixel(18 + X, 14 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 15 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 15 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 15 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 15 + Y, 135, 26, 68);
	gfx.PutPixel(6 + X, 15 + Y, 135, 26, 68);
	gfx.PutPixel(7 + X, 15 + Y, 135, 26, 68);
	gfx.PutPixel(8 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(9 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(10 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(11 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(12 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(13 + X, 15 + Y, 251, 192, 224);
	gfx.PutPixel(14 + X, 15 + Y, 135, 26, 68);
	gfx.PutPixel(15 + X, 15 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 15 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 15 + Y, 0, 0, 0);
	gfx.PutPixel(2 + X, 16 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 16 + Y, 254, 221, 88);
	gfx.PutPixel(4 + X, 16 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 16 + Y, 135, 26, 68);
	gfx.PutPixel(6 + X, 16 + Y, 135, 26, 68);
	gfx.PutPixel(7 + X, 16 + Y, 135, 26, 68);
	gfx.PutPixel(8 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(9 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(10 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(11 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(12 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(13 + X, 16 + Y, 251, 192, 224);
	gfx.PutPixel(14 + X, 16 + Y, 135, 26, 68);
	gfx.PutPixel(15 + X, 16 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 16 + Y, 254, 221, 88);
	gfx.PutPixel(17 + X, 16 + Y, 0, 0, 0);
	gfx.PutPixel(3 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(4 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(7 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(8 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(9 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(10 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(12 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(13 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(15 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(16 + X, 17 + Y, 0, 0, 0);
	gfx.PutPixel(5 + X, 18 + Y, 0, 0, 0);
	gfx.PutPixel(6 + X, 18 + Y, 0, 0, 0);
	gfx.PutPixel(7 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(8 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(9 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(10 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(11 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(12 + X, 18 + Y, 254, 221, 88);
	gfx.PutPixel(13 + X, 18 + Y, 0, 0, 0);
	gfx.PutPixel(14 + X, 18 + Y, 0, 0, 0);
	gfx.PutPixel(7 + X, 19 + Y, 0, 0, 0);
	gfx.PutPixel(8 + X, 19 + Y, 0, 0, 0);
	gfx.PutPixel(9 + X, 19 + Y, 0, 0, 0);
	gfx.PutPixel(10 + X, 19 + Y, 0, 0, 0);
	gfx.PutPixel(11 + X, 19 + Y, 0, 0, 0);
	gfx.PutPixel(12 + X, 19 + Y, 0, 0, 0);


}