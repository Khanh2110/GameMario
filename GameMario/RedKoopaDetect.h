#pragma once
#include "GameObject.h"

#define DETECT_GRAVITY	0.0008f
#define DETECT_SIZE	8

class CRedKoopaDetect :
	public CGameObject
{
public:
	CRedKoopaDetect(float x, float y) : CGameObject(x, y) {
	};
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects = NULL);

	void OnNoCollision(DWORD dt);
	void OnCollisionWith(LPCOLLISIONEVENT e);

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
};