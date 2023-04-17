#include <iostream>
#include "Header.h"

void Figure:: fig_type() {

		std::cout << "Фигура:" << std::endl;
}

 bool Figure::check() {
		std::cout << "Правильная" << std::endl;
		return true;
	}
void Figure::print_sides_count() {

		std::cout << "Количество сторон: 0" << std::endl;
	}


void print_info(Figure* figure) {
	figure->fig_type();
	figure->check();
	figure->print_sides_count();

}
 /////////////////////////////////////////////////////////////////////////////////
	Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) :Figure() {
		a = a_;
		b = b_;
		c = c_;
		A = A_;
		B = B_;
		C = C_;
	}

	void Triangle::fig_type(){
		std::cout << "треугольник:" << std::endl;
	}

	bool Triangle::check(){
		if (A + B + C != 180) {
			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {
			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	void Triangle::print_sides_count() {
		std::cout << "Количество сторон: 3" << std::endl;
		std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
		std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
	}

	Right_triangle::Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_) :Triangle(a_, b_, c_, A_, B_, C_) {

	}
	void Right_triangle::fig_type() {

		std::cout << "Прямоугольный треугольник:" << std::endl;
	}

	bool Right_triangle::check()  {

		if (C != 90) {

			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {
			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	Isosceles_triangle::Isosceles_triangle(int a_, int b_, int A_, int B_) :Triangle(a_, b_, b_, A_, B_, B_) {

	}
	void Isosceles_triangle::fig_type() {

		std::cout << "Равнобедренный треугольник:" << std::endl;

	}
	bool Isosceles_triangle::check()  {

		if (a != c && A != C) {


			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	Equilateral_triangle::Equilateral_triangle(int a_, int A_) :Triangle(a_, a_, a_, A_, A_, A_) {

	}
	void Equilateral_triangle::fig_type() {

		std::cout << "Равносторонний треугольник:" << std::endl;

	}
	bool Equilateral_triangle::check() {

		if ((a != c && a != b || c != a && c != b || b != a && b != c) && (A != 60 || B != 60 || C != 60)) {


			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}

	}
////////////////////////////////////////////////////////////////////////////////

	Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) :Figure() {
		a = a_;
		b = b_;
		c = c_;
		d = d_;
		A = A_;
		B = B_;
		C = C_;
		D = D_;
	}
	void Quadrangle::print_sides_count() {
		std::cout << "Количество сторон: 4" << std::endl;
		std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
		std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
	}
	void Quadrangle::fig_type(){

		std::cout << "Четырёхугольник:" << std::endl;
	}
	
	bool Quadrangle::check(){

		if (A + B + C + D != 360) {


			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}


	Rectangle::Rectangle(int a_, int b_, int A_) :Quadrangle(a_, b_, a_, b_, A_, A_, A_, A_) {

	}
	void Rectangle::fig_type() {

		std::cout << "Прямоугольник:" << std::endl;

	}
	bool Rectangle::check() {

		if ((a != b && c != d) && (A + B + C + D != 90)) {


			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	Square::Square(int a_, int A_) :Quadrangle(a_, a_, a_, a_, A_, A_, A_, A_) {

	}
	void Square::fig_type() {

		std::cout << "Квадрат:" << std::endl;

	}
	bool Square::check() {
		if ((a != b && a != c && a != d || b != a && b != c && b != d || c != a && c != b && c != d) && (A != 90 && B != 90 && C != 90 && D != 90)) {

			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) :Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_) {

	}
	void Parallelogram::fig_type(){

		std::cout << "Параллелограмм:" << std::endl;
	}
	bool Parallelogram::check()  {

		if ((a != b && c != d) && (A != B && C != D)) {

			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}

	Rhombus::Rhombus(int a_, int A_, int B_) :Quadrangle(a_, a_, a_, a_, A_, B_, A_, B_) {
	}
	void Rhombus::fig_type() {

		std::cout << "Ромб:" << std::endl;

	}
	bool Rhombus::check(){
		if (A != B && C != D) {
			std::cout << "Неправильная" << std::endl;
			return false;
		}
		else {

			std::cout << "Правильная" << std::endl;
			return true;
		}
	}
