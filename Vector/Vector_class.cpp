// ��������� ������
#include "Vector_class.h"

/// �����������
Vector::Vector() {
	X = 0.0;
	Y = 0.0;
}

Vector::Vector(float X1, float Y1) {
	X = X1;
	Y = Y1;
}
// to do: return string X Y

/// ������ ��� X // why const?
float Vector::get_X() const {
	return X;
}// ����� ��������

/// ������ ��� Y
float Vector::get_Y() const {
	return Y;
}

/// ������ ��� X
void Vector::set_X(const float& new_X) {
	X = new_X;
}

/// ������ ��� Y
void Vector::set_Y(const float& new_Y) {
	Y = new_Y;
}

/// ���������� ����� �������(X, Y)
float Vector::length_v() {
	return sqrt(pow(X, 2) + pow(Y, 2));
}

/// ���������� ���� � �������� ����� ��������(X, Y) � ���� OX
float Vector::angle_OX() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("����� ������� ������");
	}
	return acos(X / length_v()) * 180.0 / pi;
}

/// ���������� ���� � �������� ����� ��������(X, Y) � ���� OY
float Vector::angle_OY() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("����� ������� ������");
	}
	return acos(Y / length_v()) * 180.0 / pi;
}

/// + � ������� (X, Y) � (x1, y1)
void Vector::add_v(const Vector& vector) {
	X += vector.X;
	Y += vector.Y;
}

/// �������� �������� (X, Y) � (x1, y1)
void Vector::dif_v(const Vector& vector) {
	X -= vector.X;
	Y -= vector.Y;
}

/// ��������� �������(X, Y) �� ������
void Vector::scalar_multiply(const float& scalar) {
	X *= scalar;
	Y *= scalar;
}

/// �������������� ����� X � Y � ������
string Vector::data_to_str() {
	return "Component X = " + std::to_string(X) + "\nComponent Y = " + std::to_string(Y);
}