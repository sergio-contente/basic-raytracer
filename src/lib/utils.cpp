#include "../../inc/utils/utils.h"

template< typename V >
Vec3< V >::Vec3() : x(V(0)), y(V(0)), z(V(0))
{
}

template< typename V >
Vec3< V >::Vec3(V x, V y, V z) : x(x), y(y), z(z)
{
}

template< typename V >
Vec3< V >::~Vec3()
{
}

template< typename V >
V Vec3< V >::norma() const
{
	return sqrt(x*x + y*y + z*z);
}

template< typename V >
V Vec3< V >::prod_interno(const Vec3< V > &v) const
{
	return x*v.x + y*v.y + z*v.z;
}

template< typename V >
Vec3<V> Vec3< V > :: operator * (const V &f) const
{
	return Vec3<V>(x * f, y * f, z * f);
}

template< typename V >
Vec3<V> Vec3<V> :: operator * (const Vec3<V> &v) const
{
return Vec3<V>(x * v.x, y * v.y, z * v.z);
}

template< typename V >
Vec3<V> Vec3<V> :: operator - (const Vec3<V> &v) const
{
return Vec3<V>(x - v.x, y - v.y, z - v.z);
}

template< typename V >
Vec3<V> Vec3<V> :: operator + (const Vec3<V> &v) const
{
return Vec3<V>(x + v.x, y + v.y, z + v.z);
}

template< typename V >
Vec3<V> Vec3<V> :: operator += (const Vec3<V> &v) const
{
 	x += v.x, y += v.y, z += v.z;
	return *this;
}

template< typename V >
Vec3<V> Vec3<V> :: operator *= (const Vec3<V> &v) const
{
 	x *= v.x, y *= v.y, z *= v.z;
	return *this;
}

template< typename V >
Vec3<V> Vec3< V > :: normalize()
{
	V norm = norma();
        if (norm > 0) {
            V invNor = 1 / norma;
            x *= invNor, y *= invNor, z *= invNor;
        }
        return *this;
}
