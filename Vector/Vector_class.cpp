﻿// Дворников Даниил
#include "Vector_class.h"

/// Конструктор
Vector::Vector() {
	X = 0.0;
	Y = 0.0;
}

Vector::Vector(float X1, float Y1) {
	X = X1;
	Y = Y1;
}

/// Геттер для X
float Vector::get_X() const {
	return X;
}// можно напрямую

/// Геттер для Y
float Vector::get_Y() const {
	return Y;
}

/// Сеттер для X
void Vector::set_X(const float& new_X) {
	X = new_X;
}

/// Сеттер для Y
void Vector::set_Y(const float& new_Y) {
	Y = new_Y;
}

/// Вычисление длины вектора(X, Y)
float Vector::length_v() const {
	return sqrt(pow(X, 2) + pow(Y, 2));
}

/// Вычисление угла в градусах между вектором(X, Y) и осью OX
float Vector::angle_OX() const {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("Задан нулевой вектор");
	}
	return acos(X / length_v()) * 180.0 / pi;
}

/// Вычисление угла в градусах между вектором(X, Y) и осью OY
float Vector::angle_OY() const {
	if (X == 0 && Y == 0) {
		throw std::invalid_argument("Задан нулевой вектор");
	}
	return acos(Y / length_v()) * 180.0 / pi;
}

/// + к вектору (X, Y) и (x1, y1)
void Vector::add_v(const Vector& vector) {
	X += vector.X;
	Y += vector.Y;
}

/// Разность векторов (X, Y) и (x1, y1)
void Vector::dif_v(const Vector& vector) {
	X -= vector.X;
	Y -= vector.Y;
}

/// Умножение вектора(X, Y) на скаляр
void Vector::scalar_multiply(const float& scalar) {
	X *= scalar;
	Y *= scalar;
}

/// Преобразование полей X и Y в строку
string Vector::to_str() const {
	return "( " + std::to_string(X) + "; " + std::to_string(Y) + ")";
}