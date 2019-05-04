#include "SDL.h"
#include "SimpleEvent.h"
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

	int vector[48] = {0};

	struct parameters p;

	SDL_Event event;
	SDL_Window *window;

	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "Erro de inicialização no SDL\n";
		return -1;
	}

	window = SDL_CreateWindow("Janela", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE);

	p.ev = event;
	p.address = vector;

	KeyboardWatchdog(&p);

	return 0;
}
