#include "../../inc/utils/sphere.h"

Sphere::Sphere(const Vec3f &center, const float &radius, const Vec3f &surface_color,
				const Vec3f &emission_color, const float &k_transparency = 0,
				const float &k_reflection = 0) : center(center), radius(radius),
				surface_color(surface_color), emission_color(emission_color),
				k_transparency(k_transparency), k_reflection(k_reflection)
{
	
}

//A imagem em assets mostra a geometria por tras dessa funcao
bool Sphere::intersect(const Vec3f &orig_raio, const Vec3f &dir_raio,
	  		float &t0, float &t1) const 
{
	Vec3f L = center - orig_raio;
	float t_ca = L.prod_interno(orig_raio);
	if(t_ca < 0){
		return false;
	}
	float d = sqrt(L.prod_interno(L) - t_ca*t_ca);
	if(d > radius){
    return false;
  }
	float t_hc = sqrt(radius*radius - d*d);
	t0 = t_ca - t_hc;
	t1 = t_ca + t_hc;

  return true;
}

Vec3f Sphere::trace(const Vec3f &orig_raio, const Vec3f &dir_raio,
		const std::vector<Sphere> &spheres, const int &depth) {

 		float near = INFINITY;
    const Sphere* sphere = NULL;

		for(int i = 0; i < spheres.size(); i++){
			float t0 = INFINITY, t1 = INFINITY;
			if (spheres[i].intersect(orig_raio, dir_raio, t0, t1)){
				//Imagem em assets para analisar os casos
				if (t0 < 0)
				{
					t0 = t1;
				}
				if (t0 < near)
        { 
					near = t0;
					sphere = &spheres[i];
				}
			}
		}

		if (sphere == NULL) //nao ha interseccao
    {
			return Vec3f(2,2,2);
		}

		
}
