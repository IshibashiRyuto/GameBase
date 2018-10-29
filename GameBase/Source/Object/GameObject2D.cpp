#include "GameObject2D.h"
#include <DxLib.h>

using namespace Math;

GameObject2D::GameObject2D()
	: mPos(Vector2())
	, mVel(Vector2())
	, mAccel(Vector2())
	, mAngle(0.0f)
{
}


GameObject2D::~GameObject2D()
{
}

void GameObject2D::SetPos(const Math::Vector2 & pos)
{
	mPos = pos;
}

void GameObject2D::SetPos(float posX, float posY)
{
	mPos.x = posX;
	mPos.y = posY;
}

const Math::Vector2 & GameObject2D::GetPos() const
{
	return mPos;
}

void GameObject2D::Move(const Math::Vector2 & vel)
{
	mPos += vel;
}

void GameObject2D::Move(float velX, float velY)
{
	mPos.x += velX;
	mPos.y += velY;
}

void GameObject2D::SetVel(const Math::Vector2 & vel)
{
	mVel = vel;
}

void GameObject2D::SetVel(float velX, float velY)
{
	mVel.x = velX;
	mVel.y = velY;
}

const Math::Vector2 & GameObject2D::GetVel() const
{
	return mVel;
}

void GameObject2D::AddVel(const Math::Vector2 & accel)
{
	mVel += accel;
}

void GameObject2D::SetAccel(const Math::Vector2 & accel)
{

}

void GameObject2D::SetAccel(float velX, float velY)
{
}

const Math::Vector2 & GameObject2D::GetAccel() const
{
	return mAccel;
}

void GameObject2D::SetAngle(float rad)
{
	mAngle = rad;
}

void GameObject2D::Rotate(float rad)
{
	mAngle += rad;
}

float GameObject2D::GetAngle() const
{
	return mAngle;
}

void GameObject2D::SetAngleVel(float radVel)
{
	mAngleVel = radVel;
}

float GameObject2D::GetAngleVel() const
{
	return mAngleVel;
}

void GameObject2D::SetScale(float scale)
{
	mScale = scale;
}

std::shared_ptr<GameObject> GameObject2D::Update()
{
	mVel += mAccel;
	mPos += mVel;
	mAngle += mAngleVel;
	return shared_from_this();
}

void GameObject2D::Draw() const
{
	DrawRotaGraphF(mPos.x, mPos.y, mScale, mAngle, mGraphicHandle, true);
}

std::shared_ptr<GameObject2D> GameObject2D::Create()
{
	return std::shared_ptr<GameObject2D>(new GameObject2D());
}

void GameObject2D::SetGraphic(int graHandle)
{
	mGraphicHandle = graHandle;
}
