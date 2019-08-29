#pragma once
#include"Graphics.h"
#include"Player.h"


class Enemies
{

public:

	void Init(int I_X, int I_Y, float I_VY, float I_VX);

	bool Loaded = true;

	void ScreenBorderY();
	void ScreenBorderX();

	
	bool SetState(bool ster);
	bool GetState()const;
	void Drawcode(Graphics& gfx);
	void EatDetection(Player& player);
	void SetStateForLives();
	bool StateLife = false;
	void velo();
	void Draw(Graphics& gfx);


private:


	bool OnOffState = false;
	 
	int X;
	int Y;
	float VX;
	float VY;
	int WH = 24;










};