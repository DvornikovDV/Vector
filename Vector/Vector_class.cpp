#include "Vector_class.h"

/// �����������
Vector::Vector() {
	X = 0.0;
	Y = 0.0;
}

/// ������ ��� X
float Vector::get_X() {
	return X;
}

/// ������ ��� Y
float Vector::get_Y() {
	return Y;
}

/// ������ ��� X
void Vector::set_X(float new_X) {
	X = new_X;
}

/// ������ ��� Y
void Vector::set_Y(const float& new_Y) {
	Y = new_Y;
}

/// ���������� ����� �������(X, Y)
float Vector::length_v() {
	return sqrt(pow(X, 2) + pow(X, 2));
}

/// ���������� ���� ����� �������(X, Y) � ���� OX
float Vector::angle_OX() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("����� ������� ������");
	}
	return acos(X / length_v()) * 180 / pi;
}

/// ���������� ���� ����� �������(X, Y) � ���� OY
float Vector::angle_OY() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("����� ������� ������");
	}
	return acos(Y / length_v()) * 180 / pi;
}

/// ����� �������� (X, Y) � (x1, y1)
void Vector::sum_v(const float& x1, const float& y1) {
	X += x1;
	Y += y1;
}

/// �������� �������� (X, Y) � (x1, y1)
void Vector::dif_v(const float& x1, const float& y1) {
	X -= x1;
	Y -= y1;
}

/// ��������� �������(X, Y) �� ������
void Vector::scalar_multiply(const float& scalar) {
	X *= scalar;
	Y *= scalar;
}