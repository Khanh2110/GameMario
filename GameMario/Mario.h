#pragma once

#include "GameObject.h"

#include "Animation.h"
#include "Animations.h"
#include "define.h"
class CMario : public CGameObject
{
protected:
	float vx;
public:
	CMario(float x, float y, float vx);
	void Update(DWORD dt);
	void Render();
};