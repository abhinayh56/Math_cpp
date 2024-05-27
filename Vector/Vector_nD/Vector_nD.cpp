#include "Vector_nD.h"

Vector_3D::Vector_3D() {
}

double Vector_3D::get_x(Vector_nD v1) {
	return v1.x;
}

double Vector_3D::get_y(Vector_nD v1) {
	return v1.y;
}

double Vector_3D::get_z(Vector_nD v1) {
	return v1.z;
}

Vector_nD Vector_3D::zeros() {
	Vector_nD v1(0, 0, 0);
	return v1;
}

Vector_nD Vector_3D::ones() {
	Vector_nD v1(1, 1, 1);
	return v1;
}

Vector_nD Vector_3D::basis_x() {
	Vector_nD v1(1, 0, 0);
	return v1;
}

Vector_nD Vector_3D::basis_y() {
	Vector_nD v1(0, 1, 0);
	return v1;
}

Vector_nD Vector_3D::basis_z() {
	Vector_nD v1(0, 0, 1);
	return v1;
}

Vector_nD Vector_3D::unit_x() {
	Vector_nD v1(1, 0, 0);
	return v1;
}

Vector_nD Vector_3D::unit_y() {
	Vector_nD v1(0, 1, 0);
	return v1;
}

Vector_nD Vector_3D::unit_z() {
	Vector_nD v1(0, 0, 1);
	return v1;
}

Vector_nD Vector_3D::add(Vector_nD v1, Vector_nD v2) {
	Vector_nD v3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	return v3;
}

Vector_nD Vector_3D::sub(Vector_nD v1, Vector_nD v2) {
	Vector_nD v3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	return v3;
}

double Vector_3D::dot(Vector_nD v1, Vector_nD v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector_nD Vector_3D::cross(Vector_nD v1, Vector_nD v2) {
	Vector_nD v3;
	v3.x = v1.y * v2.z - v1.z * v2.y;
	v3.y = v1.z * v2.x - v1.x * v2.z;
	v3.z = v1.x * v2.y - v1.y * v2.x;
	return v3;
}

Vector_nD Vector_3D::mul_scalar(Vector_nD v1, double s) {
	Vector_nD v3(v1.x * s, v1.y * s, v1.z * s);
	return v3;
}

Vector_nD Vector_3D::mul_scalar(double s, Vector_nD v1) {
	Vector_nD v3(v1.x * s, v1.y * s, v1.z * s);
	return v3;
}

Vector_nD Vector_3D::div_scalar(Vector_nD v1, double s) {
	Vector_nD v3(v1.x / s, v1.y / s, v1.z / s);
	return v3;
}

Vector_nD Vector_3D::div_scalar(double s, Vector_nD v1) {
	Vector_nD v3(v1.x / s, v1.y / s, v1.z / s);
	return v3;
}

Vector_nD Vector_3D::normalize(Vector_nD v1) {
	double l = sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
	Vector_nD v3(v1.x / l, v1.y / l, v1.z / l);
	return v3;
}

double Vector_3D::Vector_3D::norm(Vector_nD v1) {
	return sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

double Vector_3D::tripple_prod_scalar(Vector_nD v1, Vector_nD v2, Vector_nD v3) {
	return dot(v1, cross(v2, v3));
}

Vector_nD Vector_3D::tripple_prod_vector(Vector_nD v1, Vector_nD v2, Vector_nD v3) {
	//return sub(mul_scalar(dot(v1, v3),v2), mul_scalar(dot(v1, v2), v3));
	return cross(v1, cross(v2, v3));
}