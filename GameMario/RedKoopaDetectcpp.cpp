#include "RedKoopaDetect.h"

void CRedKoopaDetect::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - DETECT_SIZE / 2;
	t = y - DETECT_SIZE / 2;
	r = l + DETECT_SIZE;
	b = t + DETECT_SIZE;

}

void CRedKoopaDetect::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += DETECT_GRAVITY * dt;
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void CRedKoopaDetect::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void CRedKoopaDetect::OnCollisionWith(LPCOLLISIONEVENT e)
{
	if (e->ny != 0 && e->obj->IsBlocking())
	{
		vy = 0;
	}
}