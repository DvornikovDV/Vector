// ��������� ������
#pragma once

#include <iostream>
#include <cmath>
#include <numbers>
#include <string>

using std::numbers::pi;
using std::string;

class Vector {
	private: 
		// ���� ������
		// ���������� x
		float X;
		// ���������� y
		float Y;

	public:
		// ������ ������
		/// �����������
		Vector();
		Vector(float X1, float Y1);

		/// ������ ��� X
		float get_X() const;

		/// ������ ��� Y
		float get_Y() const;

		/// ������ ��� X
		void set_X(const float& new_X);

		/// ������ ��� Y
		void set_Y(const float& new_Y);

		/// ���������� ����� �������(X, Y)
		float length_v();
		
		/// ���������� ���� ����� �������(X, Y) � ���� OX
		float angle_OX();

		/// ���������� ���� ����� �������(X, Y) � ���� OY
		float angle_OY();

		/// ����� �������� (X, Y) � (x1, y1)
		void add_v(const Vector& vector);

		/// �������� �������� (X, Y) � (x1, y1)
		void dif_v(const Vector& vector);

		/// ��������� �������(X, Y) �� ������
		void scalar_multiply(const float& scalar);

		/// �������������� ����� X � Y � ������
		string data_to_str();
};