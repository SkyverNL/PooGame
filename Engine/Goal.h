#pragma once
#include"Graphics.h"
#include"Player.h"

class Goal
{
public:

	Goal::Goal();

	bool HitDetection();

	void Drawcode(Graphics& gfx);

	void ColorPulsing();

	void initload(int point1);

	bool TESTGET()const;

	Player& P;

private:

	bool Test = false;

	bool Collected = false;
	bool ReversePulse = false;

	int Point;
	int GoalWH = 15;
	int R = 1;
	int G = 1;
	int B = 1;
};