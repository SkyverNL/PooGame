#include "Goal.h"
#include "assert.h"

Goal::Goal()
	:
	P(P)
{
}

bool Goal::HitDetection()
{
	
	int GP = Point;
	int PX = P.GetX();
	int PY = P.GetY();
	int GDim = Point + GoalWH;
	int PXDim = P.GetX() + P.GetWH();
	int PYDim = P.GetY() + P.GetWH();

	if (GP <= PXDim && GDim >= PX && GP <= PYDim && GDim >= PY)
	{
		Test = true;
	}
	return Test;

}

void Goal::Drawcode(Graphics & gfx)
{
	int width = Point + GoalWH;
	int heigth = Point + GoalWH;
	ColorPulsing();
	gfx.drawSetBox(Point,width,heigth,R,G,B);
	HitDetection();


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

bool Goal::TESTGET() const
{
	
	return Test;
}
