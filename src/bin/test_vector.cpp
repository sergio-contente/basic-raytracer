#include "../../inc/utils/utils.h"

typedef Vec3<float> Vec3f;

int main(int argc, const char** argv) {
	Vec3f vetor;
	vetor.x = 0.1;
	vetor.y = 2;
	vetor.z = 3.14;
	
	std::cout <<  "x: " << vetor.x  << " y: " << vetor.y << " z: " << vetor.z << std::endl;

	return 0;
}
