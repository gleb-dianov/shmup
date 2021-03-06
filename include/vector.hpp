#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
	public:
		Vector(int x = 0, int y = 0);
		std::ostream& operator<<(std::ostream& out);
		Vector abs();
		int& x();
		int& x(int newX);
		int& y();
		int& y(int newY);
		Vector operator+(Vector& second);
		Vector operator-(Vector& second);
		Vector operator/(Vector second);
		Vector& operator+=(Vector& second);
	private:
		int _x;
		int _y;
};

#endif
