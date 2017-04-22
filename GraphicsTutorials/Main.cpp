#include "MainGame.h"
#include <iostream>
#include <SDL\SDL.h>
using namespace std;

int main(int argc, char** argv) {
	MainGame game;
	game.run();
	system("Pause");
	return 0;
}