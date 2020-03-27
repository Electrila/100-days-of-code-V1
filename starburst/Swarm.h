#ifndef SWARM_H_
#define SWARM_H_
#include "Particles.h"

namespace mec {

class Swarm {
private:
	Particles * m_p_particles;
	int last_time;

public:
	const static int NPARTICLES = 6000;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particles * const get_particles() { return m_p_particles; };
};

} /* namespace mec */

#endif /* SWARM_H_ */
