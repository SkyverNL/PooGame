#pragma once
#include"Graphics.h"
#include"Player.h"


class Enemies
{

public:

	void Init(int I_X, int I_Y, int I_VY, int I_VX);

	bool Loaded = false;

	void ScreenBorderY();
	void ScreenBorderX();

	
	bool SetState(bool ster);
	bool GetState()const;
	void Drawcode(Graphics& gfx);
	void EatDetection(Player& player);
	
	
	void velo();
	void Draw(Graphics& gfx);


private:


	bool OnOffState = false;
	 
	int X;
	int Y;
	int VX;
	int VY;
	int WH = 24;










};