#include "SDL.h"
#include <string>
#include <iostream>

#ifndef PARAM_H
#define PARAM_H

struct parameters{

	SDL_Event ev;
	int *address;

};
#endif

void KeyboardWatchdog(parameters *param){

	int *vector;
	SDL_Event event;

	struct parameters *p;
	p = param;

	vector = p->address;
	event = p->ev;

	int run = 1;

	while(run){

		if(SDL_PollEvent(&event)){		//&event

			if(event.type == SDL_KEYDOWN){

				/// *********** CLOSE SDL ***********

				if(SDL_SCANCODE_ESCAPE == event.key.keysym.scancode){
					run = 0;
					//break;
				}

				/// *********** 0 Octave ***********

				if(SDL_SCANCODE_1 == event.key.keysym.scancode && vector[0] == 0){
					std::cout << "C0 pressed\n";
					vector[0] = 1;
					//break;
				}

				if(SDL_SCANCODE_2 == event.key.keysym.scancode && vector[1] == 0){
					std::cout << "C#0 pressed\n";
					vector[1] = 1;
					//break;
				}

				if(SDL_SCANCODE_3 == event.key.keysym.scancode && vector[2] == 0){
					std::cout << "D0 pressed\n";
					vector[2] = 1;
					//break;
				}

				if(SDL_SCANCODE_4 == event.key.keysym.scancode && vector[3] == 0){
					std::cout << "D#0 pressed\n";
					vector[3] = 1;
					//break;
				}

				if(SDL_SCANCODE_5 == event.key.keysym.scancode && vector[4] == 0){
					std::cout << "E0 pressed\n";
					vector[4] = 1;
					//break;
				}

				if(SDL_SCANCODE_6 == event.key.keysym.scancode && vector[5] == 0){
					std::cout << "F0 pressed\n";
					vector[5] = 1;
					//break;
				}

				if(SDL_SCANCODE_7 == event.key.keysym.scancode && vector[6] == 0){
					std::cout << "F#0 pressed\n";
					vector[6] = 1;
					//break;
				}

				if(SDL_SCANCODE_8 == event.key.keysym.scancode && vector[7] == 0){
					std::cout << "G0 pressed\n";
					vector[7] = 1;
					//break;
				}

				if(SDL_SCANCODE_9 == event.key.keysym.scancode && vector[8] == 0){
					std::cout << "G#0 pressed\n";
					vector[8] = 1;
					//break;
				}

				if(SDL_SCANCODE_0 == event.key.keysym.scancode && vector[9] == 0){
					std::cout << "A0 pressed\n";
					vector[9] = 1;
					//break;
				}

				if(SDL_SCANCODE_MINUS == event.key.keysym.scancode && vector[10] == 0){
					std::cout << "A#0 pressed\n";
					vector[10] = 1;
					//break;
				}

				if(SDL_SCANCODE_EQUALS == event.key.keysym.scancode && vector[11] == 0){
					std::cout << "B0 pressed\n";
					vector[11] = 1;
					//break;
				}

					/// *********** 1 Octave ***********

				if(SDL_SCANCODE_Q == event.key.keysym.scancode && vector[12] == 0){
					std::cout << "C1 pressed\n";
					vector[12] = 1;
					//break;
				}

				if(SDL_SCANCODE_W == event.key.keysym.scancode && vector[13] == 0){
					std::cout << "C#1 pressed\n";
					vector[13] = 1;
					//break;
				}

				if(SDL_SCANCODE_E == event.key.keysym.scancode && vector[14] == 0){
					std::cout << "D1 pressed\n";
					vector[14] = 1;
					//break;
				}

				if(SDL_SCANCODE_R == event.key.keysym.scancode && vector[15] == 0){
					std::cout << "D#1 pressed\n";
					vector[15] = 1;
					//break;
				}

				if(SDL_SCANCODE_T == event.key.keysym.scancode && vector[16] == 0){
					std::cout << "E1 pressed\n";
					vector[16] = 1;
					//break;
				}

				if(SDL_SCANCODE_Y == event.key.keysym.scancode && vector[17] == 0){
					std::cout << "F1 pressed\n";
					vector[17] = 1;
					//break;
				}

				if(SDL_SCANCODE_U == event.key.keysym.scancode && vector[18] == 0){
					std::cout << "F#1 pressed\n";
					vector[18] = 1;
					//break;
				}

				if(SDL_SCANCODE_I == event.key.keysym.scancode && vector[19] == 0){
					std::cout << "G1 pressed\n";
					vector[19] = 1;
					//break;
				}

				if(SDL_SCANCODE_O == event.key.keysym.scancode && vector[20] == 0){
					std::cout << "G#1 pressed\n";
					vector[20] = 1;
					//break;
				}

				if(SDL_SCANCODE_P == event.key.keysym.scancode && vector[21] == 0){
					std::cout << "A1 pressed\n";
					vector[21] = 1;
					//break;
				}

				if(SDL_SCANCODE_LEFTBRACKET == event.key.keysym.scancode && vector[22] == 0){
					std::cout << "A#1 pressed\n";
					vector[22] = 1;
					//break;
				}

				if(SDL_SCANCODE_RIGHTBRACKET == event.key.keysym.scancode && vector[23] == 0){ ///*************************************
					std::cout << "B1 pressed\n";
					vector[23] = 1;
					//break;
				}

					/// *********** 2 Octave ***********

				if(SDL_SCANCODE_A == event.key.keysym.scancode && vector[24] == 0){
					std::cout << "C2 pressed\n";
					vector[24] = 1;
					//break;
				}

				if(SDL_SCANCODE_S == event.key.keysym.scancode && vector[25] == 0){
					std::cout << "C#2 pressed\n";
					vector[25] = 1;
					//break;
				}

				if(SDL_SCANCODE_D == event.key.keysym.scancode && vector[26] == 0){
					std::cout << "D2 pressed\n";
					vector[26] = 1;
					//break;
				}

				if(SDL_SCANCODE_F == event.key.keysym.scancode && vector[27] == 0){
					std::cout << "D#2 pressed\n";
					vector[27] = 1;
					//break;
				}

				if(SDL_SCANCODE_G == event.key.keysym.scancode && vector[28] == 0){
					std::cout << "E2 pressed\n";
					vector[28] = 1;
					//break;
				}

				if(SDL_SCANCODE_H == event.key.keysym.scancode && vector[29] == 0){
					std::cout << "F2 pressed\n";
					vector[29] = 1;
					//break;
				}

				if(SDL_SCANCODE_J == event.key.keysym.scancode && vector[30] == 0){
					std::cout << "F#2 pressed\n";
					vector[30] = 1;
					//break;
				}

				if(SDL_SCANCODE_K == event.key.keysym.scancode && vector[31] == 0){
					std:: cout << "G2 pressed\n";
					vector[31] = 1;
					//break;
				}

				if(SDL_SCANCODE_L == event.key.keysym.scancode && vector[32] == 0){
					std::cout << "G#2 pressed\n";
					vector[32] = 1;
					//break;
				}

				if(SDL_SCANCODE_SEMICOLON == event.key.keysym.scancode && vector[33] == 0){ ///*********************************************************
					std::cout << "A2 pressed\n";
					vector[33] = 1;
					//break;
				}

				if(SDL_SCANCODE_APOSTROPHE == event.key.keysym.scancode && vector[34] == 0){
					std::cout << "A#2 pressed\n";
					vector[34] = 1;
					//break;
				}

				if(SDL_SCANCODE_BACKSLASH == event.key.keysym.scancode && vector[35] == 0){ ///*********************************************************
					std::cout << "B2 pressed\n";
					vector[35] = 1;
					//break;
				}

					/// *********** 3 Octave ***********

				if(SDL_SCANCODE_Z == event.key.keysym.scancode && vector[36] == 0){
					std::cout << "C3 pressed\n";
					vector[36] = 1;
					//break;
				}

				if(SDL_SCANCODE_X == event.key.keysym.scancode && vector[37] == 0){
					std::cout << "C#3 pressed\n";
					vector[37] = 1;
					//break;
				}

				if(SDL_SCANCODE_C == event.key.keysym.scancode && vector[38] == 0){
					std::cout << "D3 pressed\n";
					vector[38] = 1;
					//break;
				}

				if(SDL_SCANCODE_V == event.key.keysym.scancode && vector[39] == 0){
					std::cout << "D#3 pressed\n";
					vector[39] = 1;
					//break;
				}

				if(SDL_SCANCODE_B == event.key.keysym.scancode && vector[40] == 0){
					std::cout << "E3 pressed\n";
					vector[40] = 1;
					//break;
				}

				if(SDL_SCANCODE_N == event.key.keysym.scancode && vector[41] == 0){
					std::cout << "F3 pressed\n";
					vector[41] = 1;
					//break;
				}

				if(SDL_SCANCODE_M == event.key.keysym.scancode && vector[42] == 0){
					std::cout << "F#3 pressed\n";
					vector[42] = 1;
					//break;
				}

				if(SDL_SCANCODE_COMMA == event.key.keysym.scancode && vector[43] == 0){
					std:: cout << "G3 pressed\n";
					vector[43] = 1;
					//break;
				}

				if(SDL_SCANCODE_PERIOD == event.key.keysym.scancode && vector[44] == 0){
					std::cout << "G#3 pressed\n";
					vector[44] = 1;
					//break;
				}

				if(SDLK_SEMICOLON == event.key.keysym.sym && vector[45] == 0){ ///*********************************************************
					std::cout << "A3 pressed\n";
					vector[45] = 1;
					//break;
				}

				if(SDLK_SLASH == event.key.keysym.sym && vector[46] == 0){
					std::cout << "A#3 pressed\n";
					vector[46] = 1;
					//break;
				}

				if(SDL_SCANCODE_RSHIFT == event.key.keysym.scancode && vector[47] == 0){
					std::cout << "B3 pressed\n";
					vector[47] = 1;
					//break;
				}

			}

			if(event.type == SDL_KEYUP){

				/// *********** 0 Octave ***********

				if(SDL_SCANCODE_1 == event.key.keysym.scancode && vector[0] == 1){
					std::cout << "C0 released\n";
					vector[0] = 0;
					//break;
				}

				if(SDL_SCANCODE_2 == event.key.keysym.scancode && vector[1] == 1){
					std::cout << "C#0 released\n";
					vector[1] = 0;
					//break;
				}

				if(SDL_SCANCODE_3 == event.key.keysym.scancode && vector[2] == 1){
					std::cout << "D0 released\n";
					vector[2] = 0;
					//break;
				}

				if(SDL_SCANCODE_4 == event.key.keysym.scancode && vector[3] == 1){
					std::cout << "D#0 released\n";
					vector[3] = 0;
					//break;
				}

				if(SDL_SCANCODE_5 == event.key.keysym.scancode && vector[4] == 1){
					std::cout << "E0 released\n";
					vector[4] = 0;
					//break;
				}

				if(SDL_SCANCODE_6 == event.key.keysym.scancode && vector[5] == 1){
					std::cout << "F0 released\n";
					vector[5] = 0;
					//break;
				}

				if(SDL_SCANCODE_7 == event.key.keysym.scancode && vector[6] == 1){
					std::cout << "F#0 released\n";
					vector[6] = 0;
					//break;
				}

				if(SDL_SCANCODE_8 == event.key.keysym.scancode && vector[7] == 1){
					std::cout << "G0 released\n";
					vector[7] = 0;
					//break;
				}

				if(SDL_SCANCODE_9 == event.key.keysym.scancode && vector[8] == 1){
					std::cout << "G#0 released\n";
					vector[8] = 0;
					//break;
				}

				if(SDL_SCANCODE_0 == event.key.keysym.scancode && vector[9] == 1){
					std::cout << "A0 released\n";
					vector[9] = 0;
					//break;
				}

				if(SDL_SCANCODE_MINUS == event.key.keysym.scancode && vector[10] == 1){
					std::cout << "A#0 released\n";
					vector[10] = 0;
					//break;
				}

				if(SDL_SCANCODE_EQUALS == event.key.keysym.scancode && vector[11] == 1){
					std::cout << "B0 released\n";
					vector[11] = 0;
					//break;
				}

					/// *********** 1 Octave ***********

				if(SDL_SCANCODE_Q == event.key.keysym.scancode && vector[12] == 1){
					std::cout << "C1 released\n";
					vector[12] = 0;
					//break;
				}

				if(SDL_SCANCODE_W == event.key.keysym.scancode && vector[13] == 1){
					std::cout << "C#1 released\n";
					vector[13] = 0;
					//break;
				}

				if(SDL_SCANCODE_E == event.key.keysym.scancode && vector[14] == 1){
					std::cout << "D1 released\n";
					vector[14] = 0;
					//break;
				}

				if(SDL_SCANCODE_R == event.key.keysym.scancode && vector[15] == 1){
					std::cout << "D#1 released\n";
					vector[15] = 0;
					//break;
				}

				if(SDL_SCANCODE_T == event.key.keysym.scancode && vector[16] == 1){
					std::cout << "E1 released\n";
					vector[16] = 0;
					//break;
				}

				if(SDL_SCANCODE_Y == event.key.keysym.scancode && vector[17] == 1){
					std::cout << "F1 released\n";
					vector[17] = 0;
					//break;
				}

				if(SDL_SCANCODE_U == event.key.keysym.scancode && vector[18] == 1){
					std::cout << "F#1 released\n";
					vector[18] = 0;
					//break;
				}

				if(SDL_SCANCODE_I == event.key.keysym.scancode && vector[19] == 1){
					std::cout << "G1 released\n";
					vector[19] = 0;
					//break;
				}

				if(SDL_SCANCODE_O == event.key.keysym.scancode && vector[20] == 1){
					std::cout << "G#1 released\n";
					vector[20] = 0;
					//break;
				}

				if(SDL_SCANCODE_P == event.key.keysym.scancode && vector[21] == 1){
					std::cout << "A1 released\n";
					vector[21] = 0;
					//break;
				}

				if(SDL_SCANCODE_LEFTBRACKET == event.key.keysym.scancode && vector[22] == 1){
					std::cout << "A#1 released\n";
					vector[22] = 0;
					//break;
				}

				if(SDL_SCANCODE_RIGHTBRACKET == event.key.keysym.scancode && vector[23] == 1){ ///*************************************
					std::cout << "B1 released\n";
					vector[23] = 0;
					//break;
				}

					/// *********** 2 Octave ***********

				if(SDL_SCANCODE_A == event.key.keysym.scancode && vector[24] == 1){
					std::cout << "C2 released\n";
					vector[24] = 0;
					//break;
				}

				if(SDL_SCANCODE_S == event.key.keysym.scancode && vector[25] == 1){
					std::cout << "C#2 released\n";
					vector[25] = 0;
					//break;
				}

				if(SDL_SCANCODE_D == event.key.keysym.scancode && vector[26] == 1){
					std::cout << "D2 released\n";
					vector[26] = 0;
					//break;
				}

				if(SDL_SCANCODE_F == event.key.keysym.scancode && vector[27] == 1){
					std::cout << "D#2 released\n";
					vector[27] = 0;
					//break;
				}

				if(SDL_SCANCODE_G == event.key.keysym.scancode && vector[28] == 1){
					std::cout << "E2 released\n";
					vector[28] = 0;
					//break;
				}

				if(SDL_SCANCODE_H == event.key.keysym.scancode && vector[29] == 1){
					std::cout << "F2 released\n";
					vector[29] = 0;
					//break;
				}

				if(SDL_SCANCODE_J == event.key.keysym.scancode && vector[30] == 1){
					std::cout << "F#2 released\n";
					vector[30] = 0;
					//break;
				}

				if(SDL_SCANCODE_K == event.key.keysym.scancode && vector[31] == 1){
					std:: cout << "G2 released\n";
					vector[31] = 0;
					//break;
				}

				if(SDL_SCANCODE_L == event.key.keysym.scancode && vector[32] == 1){
					std::cout << "G#2 released\n";
					vector[32] = 0;
					//break;
				}

				if(SDL_SCANCODE_SEMICOLON == event.key.keysym.scancode && vector[33] == 1){ ///*********************************************************
					std::cout << "A2 released\n";
					vector[33] = 0;
					//break;
				}

				if(SDL_SCANCODE_APOSTROPHE == event.key.keysym.scancode && vector[34] == 1){
					std::cout << "A#2 released\n";
					vector[34] = 0;
					//break;
				}

				if(SDL_SCANCODE_BACKSLASH == event.key.keysym.scancode && vector[35] == 1){ ///*********************************************************
					std::cout << "B2 released\n";
					vector[35] = 0;
					//break;
				}

					/// *********** 3 Octave ***********

				if(SDL_SCANCODE_Z == event.key.keysym.scancode && vector[36] == 1){
					std::cout << "C3 released\n";
					vector[36] = 0;
					//break;
				}

				if(SDL_SCANCODE_X == event.key.keysym.scancode && vector[37] == 1){
					std::cout << "C#3 released\n";
					vector[37] = 0;
					//break;
				}

				if(SDL_SCANCODE_C == event.key.keysym.scancode && vector[38] == 1){
					std::cout << "D3 released\n";
					vector[38] = 0;
					//break;
				}

				if(SDL_SCANCODE_V == event.key.keysym.scancode && vector[39] == 1){
					std::cout << "D#3 released\n";
					vector[39] = 0;
					//break;
				}

				if(SDL_SCANCODE_B == event.key.keysym.scancode && vector[40] == 1){
					std::cout << "E3 released\n";
					vector[40] = 0;
					//break;
				}

				if(SDL_SCANCODE_N == event.key.keysym.scancode && vector[41] == 1){
					std::cout << "F3 released\n";
					vector[41] = 0;
					//break;
				}

				if(SDL_SCANCODE_M == event.key.keysym.scancode && vector[42] == 1){
					std::cout << "F#3 released\n";
					vector[42] = 0;
					//break;
				}

				if(SDL_SCANCODE_COMMA == event.key.keysym.scancode && vector[43] == 1){
					std:: cout << "G3 released\n";
					vector[43] = 0;
					//break;
				}

				if(SDL_SCANCODE_PERIOD == event.key.keysym.scancode && vector[44] == 1){
					std::cout << "G#3 released\n";
					vector[44] = 0;
					//break;
				}

				if(SDLK_SEMICOLON == event.key.keysym.sym && vector[45] == 1){ ///*********************************************************
					std::cout << "A3 released\n";
					vector[45] = 0;
					//break;
				}

				if(SDLK_SLASH == event.key.keysym.sym && vector[46] == 1){
					std::cout << "A#3 released\n";
					vector[46] = 0;
					//break;
				}

				if(SDL_SCANCODE_RSHIFT == event.key.keysym.scancode && vector[47] == 1){
					std::cout << "B3 released\n";
					vector[47] = 0;
					//break;
				}

			}

		}
	}

	//return *vector;

}