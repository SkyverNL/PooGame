#pragma once
#include"Graphics.h"
#include"Player.h"

class Goal
{
public:
	Goal() = default;
	bool HitDetection(const Player& P);
	void Drawcode(Graphics& gfx);
	void ColorPulsing();
	int initload(int x,int y);
	bool WasHit()const;
	void respawn();
	void ScoreBoard(Graphics& gfx);
	bool MasterSwitch = false;
	bool Dead = false;

private:
	int X = 0;
	int Y = 0;
	int GoalWH = 15;
	int R = 1, G = 1, B = 1;
	bool Respawn = false;
	
	bool ReversePulse = false;
	int Score = 0;
};