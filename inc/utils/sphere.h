#ifndef _SPHERE_H_
#define _SPHERE_H_

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

#include "utils.h"

typedef Vec3<float> Vec3f;

class Sphere
{
public:
	Vec3f center;  //centro da esfere
	Vec3f surface_color, emission_color; //cor da superficie e emissao de luz
	float radius; //raio da esfere
	float k_transparency, k_reflection; //coeficiente de transparencia e reflexao

	Sphere(const Vec3f &center, const float &radius, const Vec3f &surface_color,
				const Vec3f &emission_color, const float &k_transparency = 0,
				const float &k_reflection = 0);
	~Sphere();
	bool intersect(const Vec3f &orig_raio, const Vec3f &dir_raio,
	  		float &t0, float &t1) const {


	}
};
#endif // _SPHERE_H_
