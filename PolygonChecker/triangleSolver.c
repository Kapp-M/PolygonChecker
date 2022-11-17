#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"
#define PI 3.14159265359

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}

float triangle_angle1(int side1, int side2, int side3)
{
	float angle1 = (acos((pow(side1, 2) + pow(side2, 2) - pow(side3, 2)) / (2 * side1 * side2)) * 180) / PI;

	return angle1;
}

float triangle_angle2(int side1, int side2, int side3)
{

	float angle2 = (acos((pow(side2, 2) + pow(side3, 2) - pow(side1, 2)) / (2 * side2 * side3)) * 180) / PI;

	return angle2;
}

float triangle_angle3(int side1, int side2, int side3)
{

	float angle3 = (acos((pow(side3, 2) + pow(side1, 2) - pow(side2, 2)) / (2 * side3 * side1)) * 180) / PI;

	return angle3;
}
