#include "MainGame.h"
#include <iostream>

using namespace std;


MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 512;
	_screenHeight = 384;
	_gameState = GameState::PLAY;
}

void MainGame::initShaders() {
	
}

void MainGame::run() {
	initSystems();
}

void MainGame::initSystems() {
	SDL_Init(SDL_INIT_EVERYTHING);

	//create window
	//tittle,centerx,centery,widht,heigth,opengl
	_window = SDL_CreateWindow("HOLI", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
	if (_window == nullptr) {
		std::cout << "Error loading window" << endl;

	}
	//reconocer ventanas
	SDL_GLContext glContext = SDL_GL_CreateContext(_window);
	if (glContext == nullptr) {
		std::cout << "SDL_GLContext not loading" << endl;




	}

}

void MainGame::processInput() {
	
}

void MainGame::update() {
	
}

void MainGame::draw() {
	
}

MainGame::~MainGame()
{
}
