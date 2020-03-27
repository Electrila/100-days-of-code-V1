#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Particles.h"
using namespace std;

namespace mec {

Particles::Particles(): m_x(0), m_y(0) {
	init();
}

void Particles::init() {
	m_x = 0;
	m_y = 0;

	m_direction = (2 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.025 * rand()) / RAND_MAX;

	m_speed *= m_speed;
}

void Particles::update(int interval) {
	m_direction += interval * 0.00025;

	double x_speed = m_speed * cos(m_direction);
	double y_speed = m_speed * sin(m_direction);

	m_x += x_speed * interval;
	m_y += y_speed * interval;

	if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
		init();
	}

	if (rand() < RAND_MAX / 100) {
		init();
	}
}

} /* namespace mec */
