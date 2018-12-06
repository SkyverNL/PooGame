#pragma once
#include"Graphics.h"
#include"Player.h"

class Goal
{
public:
	Goal() = default;
	bool HitDetection(const Player& P );
	void Drawcode(Graphics& gfx);
	void ColorPulsing();
	void initload(int point1);
	bool WasHit()const;
	void respawn();
	void ScoreBoard(Graphics& gfx);

private:
	int Point = 0;
	int GoalWH = 15;
	int R = 1, G = 1, B = 1;
	bool Respawn = false;
	bool Collected = false;
	bool ReversePulse = false;
	int Score = 0;
};