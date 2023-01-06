#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

class CGround : public CGameObject {
	int w;
	int h;
public:
	CGround(float x, float y, int w, int h) : CGameObject(x, y) {}
	void Render();
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

