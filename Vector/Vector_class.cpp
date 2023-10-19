#include "Vector_class.h"

/// Конструктор
Vector::Vector() {
	X = 0.0;
	Y = 0.0;
}

/// Геттер для X
float Vector::get_X() {
	return X;
}

/// Геттер для Y
float Vector::get_Y() {
	return Y;
}

/// Сеттер для X
void Vector::set_X(float new_X) {
	X = new_X;
}

/// Сеттер для Y
void Vector::set_Y(const float& new_Y) {
	Y = new_Y;
}

/// Вычисление длины вектора(X, Y)
float Vector::length_v() {
	return sqrt(pow(X, 2) + pow(X, 2));
}

/// Вычисление угла между вектора(X, Y) и осью OX
float Vector::angle_OX() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("Задан нулевой вектор");
	}
	return acos(X / length_v()) * 180 / pi;
}

/// Вычисление угла между вектора(X, Y) и осью OY
float Vector::angle_OY() {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("Задан нулевой вектор");
	}
	return acos(Y / length_v()) * 180 / pi;
}

/// Сумма векторов (X, Y) и (x1, y1)
void Vector::sum_v(const float& x1, const float& y1) {
	X += x1;
	Y += y1;
}

/// Разность векторов (X, Y) и (x1, y1)
void Vector::dif_v(const float& x1, const float& y1) {
	X -= x1;
	Y -= y1;
}

/// Умножение вектора(X, Y) на скаляр
void Vector::scalar_multiply(const float& scalar) {
	X *= scalar;
	Y *= scalar;
}