#include "Goal.h"
#include "assert.h"
#include <random>


bool Goal::HitDetection( const Player& P )
{
	
		int GX = X;
		int GY = Y;
		int PX = P.GetX();
		int PY = P.GetY();
		int GDimX = X + GoalWH;
		int GDimY = Y + GoalWH;
		int PXDim = P.GetX() + P.GetWH();
		int PYDim = P.GetY() + P.GetWH();

		if (GX <= PXDim && GDimX >= PX && GY <= PYDim && GDimY >= PY)
		{
			Respawn = true;
		}
		return Respawn;
}

void Goal::Drawcode(Graphics & gfx)
{
	ColorPulsing();
	gfx.drawSetBox(X, Y, GoalWH , GoalWH, R, G, B);
}

void Goal::ColorPulsing()
{

	if (R > 0 && R < 255 && !ReversePulse)
	{
		++R;
	}
	else if (R == 255 && G < 255 && !ReversePulse)
	{
		++G;
	}
	else if (G == 255 && B < 255 && !ReversePulse)
	{
		++B;
	}
	
	if((R == 255) && (G == 255) && (B == 255))
	{
		ReversePulse = true;
	}
	
	if (ReversePulse && B >= 1 )
	{
		--B;
	}
	else if (ReversePulse && G >= 1)
	{
		--G;
	}
	else if (ReversePulse && R >= 1)
	{
		--R;
	}
	


	else if ((ReversePulse) && (R == 0) && (G == 0) && (B == 0))
	{
		ReversePulse = false;
		R = 1;
		G = 1; 
		B = 1;
	}


}

int Goal::initload(int x,int y)
{
	X = x;
	Y = y;
	return X, Y;

}

bool Goal::WasHit() const
{
	
	return Respawn;
}

void Goal::respawn()
{
	if (Respawn)
	{
		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<int> Ydist(20, 550);
		std::uniform_int_distribution<int> Xdist(1, 750);

		X = Xdist(rng);
		Y = Ydist(rng);
		Score++;
		Respawn = false;
	}



}

void Goal::ScoreBoard(Graphics& gfx)
{
    gfx.drawSetBox(1, 1,10, Score*99, 0, 200, 0);
	if (Score == 8)
	{
		MasterSwitch = true;
	}
}

