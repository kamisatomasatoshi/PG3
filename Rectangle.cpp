#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("�l�p��������\n\n");
}

void Rectangle::Draw()
{
	printf("�l�p���Y�܂ꂽ\n\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("�ʐ�:%d\n\n", result);
}