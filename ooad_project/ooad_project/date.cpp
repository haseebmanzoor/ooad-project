#include <iostream>
#include "Date.h"
using namespace std;

date::date(int d_, int m_, int y_)
{
	d = d_;
	m = m_;
	y = y_;
}
void date::set_date(int d_)
{
	d = d_;
}
void date::set_month(int m_)
{
	m = m_;
}
void date::set_year(int y_)
{
	y = y_;
}
int date::get_day()
{
	return d;
}
int date::get_month()
{
	return m;
}
int date::get_year()
{
	return y;
}
date::~date()
{

}