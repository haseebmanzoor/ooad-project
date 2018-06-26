#include <iostream>
#include "detailscriminal.h"
using namespace std;

details::details(char *color_, char *face_, char *imark_, char *height_)
{
	color = new char[];
	int c = strlen(color_);
	for (int i = 0; i < c; i++)
	{
		color[i] = color_[i];
	}

	face = new char[];
	int c1 = strlen(face_);
	for (int i = 0; i < c1; i++)
	{
		face[i] = face_[i];
	}

	imark = new char[];
	int c2 = strlen(imark_);
	for (int i = 0; i < c2; i++)
	{
		imark[i] = imark_[i];
	}

	height = new char[];
	int c3 = strlen(height_);
	for (int i = 0; i < c3; i++)
	{
		height[i] = height_[i];
	}

}
void details::set_color(char *color_)
{
	color = new char[];
	int c = strlen(color_);
	for (int i = 0; i < c; i++)
	{
		color[i] = color_[i];
	}
}
void details::set_face(char *face_)
{
	face = new char[];
	int c1 = strlen(face_);
	for (int i = 0; i < c1; i++)
	{
		face[i] = face_[i];
	}
}
void details::set_imark(char *imark_)
{
	imark = new char[];
	int c2 = strlen(imark_);
	for (int i = 0; i < c2; i++)
	{
		imark[i] = imark_[i];
	}
}
void details::set_height(char *height_)
{
	height = new char[];
	int c3 = strlen(height_);
	for (int i = 0; i < c3; i++)
	{
		height[i] = height_[i];
	}
}
char details::get_color()
{
	return *color;
}
char details::get_face()
{
	return *face;
}
char details::get_height()
{
	return *height;
}
char details::get_imark()
{
	return *imark;
}
details::~details()
{
	delete color;
	delete face;
	delete imark;
	delete height;
}