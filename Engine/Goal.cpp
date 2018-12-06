#include "Goal.h"
#include "assert.h"
#include <random>


bool Goal::HitDetection( const Player& P )
{
	
		int GP = Point;
		int PX = P.GetX();
		int PY = P.GetY();
		int GDim = Point + GoalWH;
		int PXDim = P.GetX() + P.GetWH();
		int PYDim = P.GetY() + P.GetWH();

		if (GP <= PXDim && GDim >= PX && GP <= PYDim && GDim >= PY)
		{
			Respawn = true;
		}
		return Respawn;
}

void Goal::Drawcode(Graphics & gfx)
{
	int width = Point + GoalWH;
	int heigth = Point + GoalWH;
	ColorPulsing();
	gfx.drawSetBox(Point,width,heigth,R,G,B);
	
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

void Goal::initload(int Point1)
{
	assert(Point <= 500);
	Point = Point1;
	return;

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
		std::uniform_int_distribution<int> Newvalue(1, 550);

		Point = Newvalue(rng);
		Score++;
		Respawn = false;
	}



}

void Goal::ScoreBoard(Graphics& gfx)
{
	int DrawScore = 0;
	if (Respawn)
	{
		DrawScore = Score * 10;
	}

	gfx.drawSetBox(1,10,DrawScore,0,200,0);



}
