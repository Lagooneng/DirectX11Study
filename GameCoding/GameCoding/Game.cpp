#include "pch.h"
#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Init(HWND hand)
{
	_hwnd = hand;
	_width = GWinSizeX;
	_height = GWinSizeY;
}

void Game::Update()
{
}

void Game::Render()
{
}
