#pragma once
#include"Graphics.h"
#include"MainWindow.h"




class Player
{

public:

	void ScreenborderY();
	void ScreenBorderX();

	void UpdateMovement(MainWindow& wnd);
	int GetX()const;
	int GetY()const;
	int GetWH()const;
	void DrawingCode(Graphics& gfx);

private:
	
	int X = 10;
	int Y = 10;
	int WH = 20;

	



	




};