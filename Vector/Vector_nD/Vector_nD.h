#ifndef VECTOR_nD
#define VECTOR_nD

#include <math.h>
#include "Vect_nD.h"

class Vector_nD {
public:
	Vector_nD();
	double get_x(Vector_nD v1);
	double get_y(Vector_nD v1);
	double get_z(Vector_nD v1);
	Vector_nD zeros();
	Vector_nD ones();
	Vector_nD basis_x();
	Vector_nD basis_y();
	Vector_nD basis_z();
	Vector_nD unit_x();
	Vector_nD unit_y();
	Vector_nD unit_z();
	Vector_nD add(Vector_nD v1, Vector_nD v2);
	Vector_nD sub(Vector_nD v1, Vector_nD v2);
	double dot(Vector_nD v1, Vector_nD v2);
	Vector_nD cross(Vector_nD v1, Vector_nD v2);
	Vector_nD mul_scalar(Vector_nD v1, double s);
	Vector_nD mul_scalar(double s, Vector_nD v1);
	Vector_nD div_scalar(Vector_nD v1, double s);
	Vector_nD div_scalar(double s, Vector_nD v1);
	Vector_nD normalize(Vector_nD v1);
	double norm(Vector_nD v1);
	double tripple_prod_scalar(Vector_nD v1, Vector_nD v2, Vector_nD v3);
	Vector_nD tripple_prod_vector(Vector_nD v1, Vector_nD v2, Vector_nD v3);
};

#endif