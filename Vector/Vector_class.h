#pragma once

#include <iostream>
#include <cmath>
#include <numbers>

using std::numbers::pi;

class Vector {
	private: 
		// Поля класса
		// Координата x
		float X;
		// Координата y
		float Y;

	public:
		// Методы класса
		/// Конструктор
		Vector();

		/// Геттер для X
		float get_X();

		/// Геттер для Y
		float get_Y();

		/// Сеттер для X
		void set_X(float new_X);

		/// Сеттер для Y
		void set_Y(const float& new_Y);

		/// Вычисление длины вектора(X, Y)
		float length_v();
		
		/// Вычисление угла между вектора(X, Y) и осью OX
		float angle_OX();

		/// Вычисление угла между вектора(X, Y) и осью OY
		float angle_OY();

		/// Сумма векторов (X, Y) и (x1, y1)
		void sum_v(const float& x1, const float& y1);

		/// Разность векторов (X, Y) и (x1, y1)
		void dif_v(const float& x1, const float& y1);

		/// Умножение вектора(X, Y) на скаляр
		void scalar_multiply(const float& scalar);
};