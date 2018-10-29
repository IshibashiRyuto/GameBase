#include "Keyboard.h"
#include <Dxlib.h>
#include <algorithm>


Keyboard::Keyboard()
{
	std::fill(std::begin(mPreKeyState), std::end(mPreKeyState), 0);
	std::fill(std::begin(mKeyState), std::end(mKeyState), 0);
}

Keyboard::Keyboard(const Keyboard &)
{
}

void Keyboard::operator=(const Keyboard &)
{
}


Keyboard::~Keyboard()
{
}

void Keyboard::Update()
{
	std::copy(std::begin(mKeyState), std::end(mKeyState), mPreKeyState);
	GetHitKeyStateAll(mKeyState);
}

bool Keyboard::IsKeyDown(int keyCode)
{
	return static_cast<bool>(mKeyState[keyCode]);
}

bool Keyboard::IsKeyTrigger(int keyCode)
{
	return static_cast<bool>(mKeyState[keyCode] ^ mPreKeyState[keyCode] & mKeyState[keyCode]);
}
