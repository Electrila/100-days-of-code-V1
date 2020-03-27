#include <iostream>
#include <SDL.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Particles.h"
#include "Swarm.h"
using namespace std;
using namespace mec;

int main(int argc, char *argv[]) {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		cout << "Error initializing SDL." << endl;
	}

	Swarm swarm;

	while (true) {
		// Update particles
		// Draw particles

		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0005)) * 128);

		const Particles *const p_particles = swarm.get_particles();

		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particles particle = p_particles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * Screen::SCREEN_WIDTH / 2
					+ Screen::SCREEN_HEIGHT / 2;

			screen.set_pixel(x, y, red, green, blue);
		}

		screen.box_blur();

		// Draw screen
		screen.update();

		// Check for messages/events
		if (screen.process_events() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
