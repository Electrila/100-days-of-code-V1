#ifndef PARTICLES_H_
#define PARTICLES_H_

namespace mec {

class Particles {
public:
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

public:
	Particles();
	virtual ~Particles();
	void update(int interval);

private:
	void init();

};

} /* namespace mec */

#endif /* PARTICLES_H_ */
