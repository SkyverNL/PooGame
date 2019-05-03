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

	
	bool GetState()const;
	void Drawcode(Graphics& gfx);
	bool EatDetection(Player& player);
	void SetStateForLives();
	bool StateLife = false;
	void velo();
	void Draw(Graphics& gfx);


private:


	bool OnOffState = false;
	 
	int X = 0;
	int Y = 0;
	int VX = 0;
	int VY = 0;
	int WH = 24;










};