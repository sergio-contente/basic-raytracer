#ifndef _UTILS_H_
#define _UTILS_H_

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

template< typename V >
class Vec3
{
public:
	V x, y, z;
	Vec3();
	Vec3( V x, V y, V z );
	~Vec3();
	V norma() const;
	V prod_interno(const Vec3< V > &v) const;
	Vec3<V> operator * (const V &f) const;
	Vec3<V> operator * (const Vec3<V> &v) const;
	Vec3<V> operator - (const Vec3<V> &v) const;
	Vec3<V> operator + (const Vec3<V> &v) const;
	Vec3<V> operator += (const Vec3<V> &v);
	Vec3<V> operator *= (const Vec3<V> &v);
	Vec3 normalize();
	friend std::ostream & operator << (std::ostream &os, const Vec3<V> &v)
    {
        os << "[" << v.x << " " << v.y << " " << v.z << "]";
        return os;
    }
};

#endif
