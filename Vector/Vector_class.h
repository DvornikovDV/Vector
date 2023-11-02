// Дворников Даниил
#pragma once

#include <iostream>
#include <cmath>
#include <numbers>
#include <string>

using std::numbers::pi;
using std::string;

class Vector {
	private: 
		// Поля класса
		// Компонента x
		float X;
		// Компонента y
		float Y;

	public:
		// Методы класса
		/// Конструктор
		Vector();
		Vector(float X1, float Y1);

		/// Геттер для X
		float get_X() const;

		/// Геттер для Y
		float get_Y() const;

		/// Сеттер для X
		void set_X(const float& new_X);

		/// Сеттер для Y
		void set_Y(const float& new_Y);

		/// Вычисление длины вектора(X, Y)
		float length_v() const;
		
		/// Вычисление угла между вектора(X, Y) и осью OX
		float angle_OX() const;

		/// Вычисление угла между вектора(X, Y) и осью OY
		float angle_OY() const;

		/// Сумма векторов (X, Y) и (x1, y1)
		void add_v(const Vector& vector);

		/// Разность векторов (X, Y) и (x1, y1)
		void dif_v(const Vector& vector);

		/// Умножение вектора(X, Y) на скаляр
		void scalar_multiply(const float& scalar);

		/// Преобразование полей X и Y в строку
		string to_str() const;
};