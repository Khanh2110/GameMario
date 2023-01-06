#include "ColorBox.h"

void CColorBox::Render()
{
	//CAnimations* animations = CAnimations::GetInstance();
	//RenderBoundingBox();
}

void CColorBox::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = l + w;
	b = t + h;
}