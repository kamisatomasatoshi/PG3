#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("四角が消えた\n\n");
}

void Rectangle::Draw()
{
	printf("四角が産まれた\n\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("面積:%d\n\n", result);
}