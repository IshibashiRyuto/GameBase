#include "GameObject3D.h"
#include <DxLib.h>


GameObject3D::GameObject3D()
{
	// Debug
	// DebugEnd
}


GameObject3D::~GameObject3D()
{
}

std::shared_ptr<GameObject3D> GameObject3D::Create()
{
	return std::shared_ptr<GameObject3D>(new GameObject3D());
}

std::shared_ptr<GameObject> GameObject3D::Update()
{
	return shared_from_this();
}

void GameObject3D::Draw() const
{
	
}
