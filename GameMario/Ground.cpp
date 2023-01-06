#include "Ground.h"

void CGround::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	RenderBoundingBox();
}

void CGround::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = l + w;
	b = t + h;
}