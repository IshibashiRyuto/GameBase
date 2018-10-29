/*
*		@file	main.cpp
*		@brief	mainŠÖ”‚ğ‹Lq‚·‚é
*		@author	Ishibashi Ryuto
*		@date	2018/10/27	‰”Åì¬
*/

#include <windows.h>
#include "Application.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application& app = Application::GetInstance();

	app.Initialize("GameBase", 800, 600);
	app.Run();
	app.Terminate();

	return 0;
}