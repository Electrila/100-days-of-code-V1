#include "Swarm.h"

namespace mec {

Swarm::Swarm(): last_time(0) {
	m_p_particles = new Particles[NPARTICLES];
}

Swarm::~Swarm() {
	delete[] m_p_particles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - last_time;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_p_particles[i].update(interval);
	}

	last_time = elapsed;
}

} /* namespace mec */
