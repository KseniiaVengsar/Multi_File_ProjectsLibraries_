// 3. Hierarchy of classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"
#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	Figure* figure = new Figure();
	print_info(figure);
	std::cout << std::endl;

	Triangle* triangle = new Triangle(1, 2, 3, 4, 5, 6);
	print_info(triangle);
	std::cout << std::endl;

	Right_triangle* right_triangle = new Right_triangle(1, 2, 3, 4, 5, 6);
	print_info(right_triangle);
	std::cout << std::endl;

	Isosceles_triangle* isosceles_triangle = new Isosceles_triangle(1, 2, 3, 4);
	print_info(isosceles_triangle);
	std::cout << std::endl;

	Equilateral_triangle* equilateral_triangle = new Equilateral_triangle(1, 2);
	print_info(equilateral_triangle);
	std::cout << std::endl;

	Quadrangle* quadrangle = new Quadrangle(1, 2, 3, 4, 5, 6, 7, 8);
	print_info(quadrangle);
	std::cout << std::endl;

	Rectangle* rectangle = new Rectangle(1, 2, 3);
	print_info(rectangle);
	std::cout << std::endl;

	Square* square = new Square(1, 2);
	print_info(square);
	std::cout << std::endl;

	Parallelogram* parallelogram = new Parallelogram(1, 2, 3, 4);
	print_info(parallelogram);
	std::cout << std::endl;

	// Очистка памяти
	//delete figure;
	delete triangle;
	delete right_triangle;
	delete isosceles_triangle;
	delete equilateral_triangle;
	delete quadrangle;
	delete rectangle;
	delete square;
	delete parallelogram;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
