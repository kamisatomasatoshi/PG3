#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("lŠp‚ªÁ‚¦‚½\n\n");
}

void Rectangle::Draw()
{
	printf("lŠp‚ªY‚Ü‚ê‚½\n\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("–ÊÏ:%d\n\n", result);
}