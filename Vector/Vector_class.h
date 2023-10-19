#pragma once

#include <iostream>
#include <cmath>
#include <numbers>

using std::numbers::pi;

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

		/// ������ ��� X
		float get_X();

		/// ������ ��� Y
		float get_Y();

		/// ������ ��� X
		void set_X(float new_X);

		/// ������ ��� Y
		void set_Y(const float& new_Y);

		/// ���������� ����� �������(X, Y)
		float length_v();
		
		/// ���������� ���� ����� �������(X, Y) � ���� OX
		float angle_OX();

		/// ���������� ���� ����� �������(X, Y) � ���� OY
		float angle_OY();

		/// ����� �������� (X, Y) � (x1, y1)
		void sum_v(const float& x1, const float& y1);

		/// �������� �������� (X, Y) � (x1, y1)
		void dif_v(const float& x1, const float& y1);

		/// ��������� �������(X, Y) �� ������
		void scalar_multiply(const float& scalar);
};