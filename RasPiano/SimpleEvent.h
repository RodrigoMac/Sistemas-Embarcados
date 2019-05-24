#include "SDL.h"
#include "RtMidi.h"

#include <string>
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <alsa/asoundlib.h>

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
	RtMidiOut *midiout = 0;
  	std::vector<unsigned char> message;

  	try {
    	midiout = new RtMidiOut();
  	}
  	catch ( RtMidiError &error ) {
    	error.printMessage();
    	exit( EXIT_FAILURE );
  	}

  	midiout->openPort(1);

  	message.push_back(0);
  	message.push_back(0);
  	message.push_back(0);

	struct parameters *p;
	p = param;

	vector = p->address;
	event = p->ev;

	int run = 1;
	int pitch = 0;
	int volume = 60;
	//int bass = 0, high = 0;
	//int flagpitch = 0

	while(run){

		if(SDL_PollEvent(&event)){

			if(event.type == SDL_KEYDOWN){

				///	************** BASIC ACTIONS ************** /// 

					/// *********** CLOSE SDL *********** ///

				if(SDL_SCANCODE_ESCAPE == event.key.keysym.scancode){
					run = 0;
					break;
				}

					/// *********** PITCH CHANGE *********** ///

				if(SDL_SCANCODE_UP == event.key.keysym.scancode){
					if(pitch < 36)
						pitch += 12;
				}

				if(SDL_SCANCODE_DOWN == event.key.keysym.scancode){
					if(pitch > -36)
						pitch -= 12;
				}									

					/// *********** VOLUME CHANGE *********** ///

				if(SDL_SCANCODE_KP_PLUS == event.key.keysym.scancode){
					if(volume < 120)
						volume += 10;
				}

				if(SDL_SCANCODE_KP_MINUS == event.key.keysym.scancode){
					if(volume > 0)
						volume -= 10;
				}	

				///	****************** NOTE ON ****************** ///

				message[0] = 144;
				message[2] = volume;

					/// *********** 0 Octave On *********** ///

				if(SDL_SCANCODE_1 == event.key.keysym.scancode && vector[0] == 0){
					vector[0] = 1;
					message[1] = 36 + pitch;
  					midiout->sendMessage( &message );
  				}

				if(SDL_SCANCODE_2 == event.key.keysym.scancode && vector[1] == 0){
					vector[1] = 1;
					message[1] = 37 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_3 == event.key.keysym.scancode && vector[2] == 0){
					vector[2] = 1;
					message[1] = 38 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_4 == event.key.keysym.scancode && vector[3] == 0){
					vector[3] = 1;
					message[1] = 39 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_5 == event.key.keysym.scancode && vector[4] == 0){
					vector[4] = 1;
					message[1] = 40 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_6 == event.key.keysym.scancode && vector[5] == 0){
					vector[5] = 1;
					message[1] = 41 + pitch;
  					midiout->sendMessage( &message );	
				}

				if(SDL_SCANCODE_7 == event.key.keysym.scancode && vector[6] == 0){
					vector[6] = 1;
					message[1] = 42 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_8 == event.key.keysym.scancode && vector[7] == 0){
					vector[7] = 1;
					message[1] = 43 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_9 == event.key.keysym.scancode && vector[8] == 0){
					vector[8] = 1;
					message[1] = 44 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_0 == event.key.keysym.scancode && vector[9] == 0){
					vector[9] = 1;
					message[1] = 45 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_MINUS == event.key.keysym.scancode && vector[10] == 0){
					vector[10] = 1;
					message[1] = 46 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_EQUALS == event.key.keysym.scancode && vector[11] == 0){
					vector[11] = 1;
					message[1] = 47 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 1 Octave On *********** ///

				if(SDL_SCANCODE_Q == event.key.keysym.scancode && vector[12] == 0){
					vector[12] = 1;
					message[1] = 48 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_W == event.key.keysym.scancode && vector[13] == 0){
					vector[13] = 1;
					message[1] = 49 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_E == event.key.keysym.scancode && vector[14] == 0){
					vector[14] = 1;
					message[1] = 50 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_R == event.key.keysym.scancode && vector[15] == 0){
					vector[15] = 1;
					message[1] = 51 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_T == event.key.keysym.scancode && vector[16] == 0){
					vector[16] = 1;
					message[1] = 52 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_Y == event.key.keysym.scancode && vector[17] == 0){
					vector[17] = 1;
					message[1] = 53 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_U == event.key.keysym.scancode && vector[18] == 0){
					vector[18] = 1;
					message[1] = 54 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_I == event.key.keysym.scancode && vector[19] == 0){
					vector[19] = 1;
					message[1] = 55 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_O == event.key.keysym.scancode && vector[20] == 0){
					vector[20] = 1;
					message[1] = 56 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_P == event.key.keysym.scancode && vector[21] == 0){
					vector[21] = 1;
					message[1] = 57 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_LEFTBRACKET == event.key.keysym.scancode && vector[22] == 0){
					vector[22] = 1;
					message[1] = 58 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_RIGHTBRACKET == event.key.keysym.scancode && vector[23] == 0){ 
					vector[23] = 1;
					message[1] = 59 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 2 Octave On *********** ///

				if(SDL_SCANCODE_A == event.key.keysym.scancode && vector[24] == 0){
					vector[24] = 1;
					message[1] = 60 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_S == event.key.keysym.scancode && vector[25] == 0){
					vector[25] = 1;
					message[1] = 61 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_D == event.key.keysym.scancode && vector[26] == 0){
					vector[26] = 1;
					message[1] = 62 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_F == event.key.keysym.scancode && vector[27] == 0){
					vector[27] = 1;
					message[1] = 63 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_G == event.key.keysym.scancode && vector[28] == 0){
					vector[28] = 1;
					message[1] = 64 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_H == event.key.keysym.scancode && vector[29] == 0){
					vector[29] = 1;
					message[1] = 65 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_J == event.key.keysym.scancode && vector[30] == 0){
					vector[30] = 1;
					message[1] = 66 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_K == event.key.keysym.scancode && vector[31] == 0){
					vector[31] = 1;
					message[1] = 67 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_L == event.key.keysym.scancode && vector[32] == 0){
					vector[32] = 1;
					message[1] = 68 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_SEMICOLON == event.key.keysym.scancode && vector[33] == 0){ 
					vector[33] = 1;
					message[1] = 69 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_APOSTROPHE == event.key.keysym.scancode && vector[34] == 0){
					vector[34] = 1;
					message[1] = 70 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_BACKSLASH == event.key.keysym.scancode && vector[35] == 0){ 
					vector[35] = 1;
					message[1] = 71 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 3 Octave On *********** ///

				if(SDL_SCANCODE_Z == event.key.keysym.scancode && vector[36] == 0){
					vector[36] = 1;
					message[1] = 72 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_X == event.key.keysym.scancode && vector[37] == 0){
					vector[37] = 1;
					message[1] = 73 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_C == event.key.keysym.scancode && vector[38] == 0){
					vector[38] = 1;
					message[1] = 74 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_V == event.key.keysym.scancode && vector[39] == 0){
					vector[39] = 1;
					message[1] = 75 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_B == event.key.keysym.scancode && vector[40] == 0){
					vector[40] = 1;
					message[1] = 76 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_N == event.key.keysym.scancode && vector[41] == 0){
					vector[41] = 1;
					message[1] = 77 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_M == event.key.keysym.scancode && vector[42] == 0){
					vector[42] = 1;
					message[1] = 78 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_COMMA == event.key.keysym.scancode && vector[43] == 0){
					vector[43] = 1;
					message[1] = 79 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_PERIOD == event.key.keysym.scancode && vector[44] == 0){
					vector[44] = 1;
					message[1] = 80 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDLK_SEMICOLON == event.key.keysym.sym && vector[45] == 0){
					vector[45] = 1;
					message[1] = 81 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDLK_SLASH == event.key.keysym.sym && vector[46] == 0){
					vector[46] = 1;
					message[1] = 82 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_RSHIFT == event.key.keysym.scancode && vector[47] == 0){
					vector[47] = 1;
					message[1] = 83 + pitch;
  					midiout->sendMessage( &message );
				}
			}

			///	****************** NOTE OFF ****************** ///

			if(event.type == SDL_KEYUP){

				message[0] = 128;
				message[2] = volume;


					/// *********** 0 Octave Off *********** ///

				if(SDL_SCANCODE_1 == event.key.keysym.scancode && vector[0] == 1){
					vector[0] = 0;
					message[1] = 36 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_2 == event.key.keysym.scancode && vector[1] == 1){
					vector[1] = 0;
					message[1] = 37 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_3 == event.key.keysym.scancode && vector[2] == 1){
					vector[2] = 0;
					message[1] = 38 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_4 == event.key.keysym.scancode && vector[3] == 1){
					vector[3] = 0;
					message[1] = 39 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_5 == event.key.keysym.scancode && vector[4] == 1){
					vector[4] = 0;
					message[1] = 40 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_6 == event.key.keysym.scancode && vector[5] == 1){
					vector[5] = 0;
					message[1] = 41 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_7 == event.key.keysym.scancode && vector[6] == 1){
					vector[6] = 0;
					message[1] = 42 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_8 == event.key.keysym.scancode && vector[7] == 1){
					vector[7] = 0;
					message[1] = 43 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_9 == event.key.keysym.scancode && vector[8] == 1){
					vector[8] = 0;
					message[1] = 44 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_0 == event.key.keysym.scancode && vector[9] == 1){
					vector[9] = 0;
					message[1] = 45 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_MINUS == event.key.keysym.scancode && vector[10] == 1){
					vector[10] = 0;
					message[1] = 46 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_EQUALS == event.key.keysym.scancode && vector[11] == 1){
					vector[11] = 0;
					message[1] = 47 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 1 Octave Off *********** ///

				if(SDL_SCANCODE_Q == event.key.keysym.scancode && vector[12] == 1){
					vector[12] = 0;
					message[1] = 48 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_W == event.key.keysym.scancode && vector[13] == 1){
					vector[13] = 0;
					message[1] = 49 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_E == event.key.keysym.scancode && vector[14] == 1){
					vector[14] = 0;
					message[1] = 50 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_R == event.key.keysym.scancode && vector[15] == 1){
					vector[15] = 0;
					message[1] = 51 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_T == event.key.keysym.scancode && vector[16] == 1){
					vector[16] = 0;
					message[1] = 52 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_Y == event.key.keysym.scancode && vector[17] == 1){
					vector[17] = 0;
					message[1] = 53 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_U == event.key.keysym.scancode && vector[18] == 1){
					vector[18] = 0;
					message[1] = 54 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_I == event.key.keysym.scancode && vector[19] == 1){
					vector[19] = 0;
					message[1] = 55 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_O == event.key.keysym.scancode && vector[20] == 1){
					vector[20] = 0;
					message[1] = 56 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_P == event.key.keysym.scancode && vector[21] == 1){
					vector[21] = 0;
					message[1] = 57 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_LEFTBRACKET == event.key.keysym.scancode && vector[22] == 1){
					vector[22] = 0;
					message[1] = 58 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_RIGHTBRACKET == event.key.keysym.scancode && vector[23] == 1){ 
					vector[23] = 0;
					message[1] = 59 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 2 Octave Off *********** ///

				if(SDL_SCANCODE_A == event.key.keysym.scancode && vector[24] == 1){
					vector[24] = 0;
					message[1] = 60 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_S == event.key.keysym.scancode && vector[25] == 1){
					vector[25] = 0;
					message[1] = 61 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_D == event.key.keysym.scancode && vector[26] == 1){
					vector[26] = 0;
					message[1] = 62 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_F == event.key.keysym.scancode && vector[27] == 1){
					vector[27] = 0;
					message[1] = 63 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_G == event.key.keysym.scancode && vector[28] == 1){
					vector[28] = 0;
					message[1] = 64 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_H == event.key.keysym.scancode && vector[29] == 1){
					vector[29] = 0;
					message[1] = 65 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_J == event.key.keysym.scancode && vector[30] == 1){
					vector[30] = 0;
					message[1] = 66 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_K == event.key.keysym.scancode && vector[31] == 1){
					vector[31] = 0;
					message[1] = 67 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_L == event.key.keysym.scancode && vector[32] == 1){
					vector[32] = 0;
					message[1] = 68 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_SEMICOLON == event.key.keysym.scancode && vector[33] == 1){ 
					vector[33] = 0;
					message[1] = 69 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_APOSTROPHE == event.key.keysym.scancode && vector[34] == 1){
					vector[34] = 0;
					message[1] = 70 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_BACKSLASH == event.key.keysym.scancode && vector[35] == 1){ 
					vector[35] = 0;
					message[1] = 71 + pitch;
  					midiout->sendMessage( &message );
				}

					/// *********** 3 Octave Off *********** ///

				if(SDL_SCANCODE_Z == event.key.keysym.scancode && vector[36] == 1){
					vector[36] = 0;
					message[1] = 72 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_X == event.key.keysym.scancode && vector[37] == 1){
					vector[37] = 0;
					message[1] = 73 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_C == event.key.keysym.scancode && vector[38] == 1){
					vector[38] = 0;
					message[1] = 74 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_V == event.key.keysym.scancode && vector[39] == 1){
					vector[39] = 0;
					message[1] = 75 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_B == event.key.keysym.scancode && vector[40] == 1){
					vector[40] = 0;
					message[1] = 76 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_N == event.key.keysym.scancode && vector[41] == 1){
					vector[41] = 0;
					message[1] = 77 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_M == event.key.keysym.scancode && vector[42] == 1){
					vector[42] = 0;
					message[1] = 78 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_COMMA == event.key.keysym.scancode && vector[43] == 1){
					vector[43] = 0;
					message[1] = 79 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_PERIOD == event.key.keysym.scancode && vector[44] == 1){
					vector[44] = 0;
					message[1] = 80 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDLK_SEMICOLON == event.key.keysym.sym && vector[45] == 1){ 
					vector[45] = 0;
					message[1] = 81 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDLK_SLASH == event.key.keysym.sym && vector[46] == 1){
					vector[46] = 0;
					message[1] = 82 + pitch;
  					midiout->sendMessage( &message );
				}

				if(SDL_SCANCODE_RSHIFT == event.key.keysym.scancode && vector[47] == 1){
					vector[47] = 0;
					message[1] = 83 + pitch;
  					midiout->sendMessage( &message );
				}
			}
		}
	}

  	delete midiout;
	SDL_Quit();
}
