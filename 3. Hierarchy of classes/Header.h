#pragma once
#include <iostream>

class Figure {
public:
	virtual void fig_type();
	virtual bool check();
	virtual void print_sides_count();
};
void print_info(Figure* figure);
class Triangle :public Figure {
protected:
	int a; int b; int c;
	int A; int B; int C;
public:
	Triangle(int a_, int b_, int c_, int A_, int B_, int C_);
	void fig_type() override;
	bool check() override;
	void print_sides_count() override;
};
class Right_triangle :public Triangle {
public:
	Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_);
	void fig_type() override;
	bool check() override;
};
class Isosceles_triangle :public Triangle {
public:
	Isosceles_triangle(int a_, int b_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};
class Equilateral_triangle :public Triangle {
public:
	Equilateral_triangle(int a_, int A_);
	void fig_type() override;
	bool check() override;
};
////////////////////////////////////////////////////////////////////////////////
class Quadrangle :public Figure {	
protected:
	int a; int b; int c; int d;
	int A; int B; int C; int D;
public:
	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
	void print_sides_count();
	void fig_type() override;
	bool check() override;
};
class Rectangle :public Quadrangle {
public:
	Rectangle(int a_, int b_, int A_);
	void fig_type() override;
	bool check() override;
};
class Square :public Quadrangle {	
public:
	Square(int a_, int A_);
	void fig_type() override;
	bool check() override;
};
class Parallelogram :public Quadrangle {
public:
	Parallelogram(int a_, int b_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};
class Rhombus :public Quadrangle {
public:
	Rhombus(int a_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};