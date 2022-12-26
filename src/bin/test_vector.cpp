#include "../../inc/utils/utils.h"

typedef Vec3<float> Vec3f;

int main(int argc, const char** argv) {
	Vec3f vetor;
	vetor.x = 0.1;
	vetor.y = 2;
	vetor.z = 3.14;
	float f = 2.0;
	std::cout <<  "x: " << vetor.x  << " y: " << vetor.y << " z: " << vetor.z << std::endl;
	vetor = vetor * f;
	std::cout <<  "x: " << vetor.x  << " y: " << vetor.y << " z: " << vetor.z << std::endl;
	vetor = vetor * 0.5;
	Vec3f vetor2;
	vetor2.x = 1.0;
	vetor2.y = 3;
	vetor2.z = -3.14;
	vetor = vetor + vetor2;
	std::cout <<  "x: " << vetor.x  << " y: " << vetor.y << " z: " << vetor.z << std::endl;
	float norm = vetor.norma();
	std::cout <<  "norma: " << norm  << std::endl;
	vetor = vetor.normalize();
	std::cout <<  "x: " << vetor.x  << " y: " << vetor.y << " z: " << vetor.z << std::endl;

	return 0;
}
