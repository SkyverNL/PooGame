#pragma once
#include"Graphics.h"
#include"Player.h"


class Enemies
{

public:

	void Init(int I_X, int I_Y, float I_VY, float I_VX);

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
	float VX = 0;
	float VY = 0;
	int WH = 24;










};