#include <iostream>
#include "police.h"
#include "Date.h"
using namespace std;

police::police(char *station_,char *fir_, date date_)
{
	station = new char[];
	int p = strlen(station_);
	for (int i = 0; i < p; i++)
	{
		station[i] = station_[i];
	}

	fir_no = new char[];
	int p1 = strlen(fir_);
	for (int i = 0; i < p1; i++)
	{
		fir_no[i] = fir_[i];
	}

}
void police::set_station(char *station_)
{
	station = new char[];
	int p = strlen(station_);
	for (int i = 0; i < p; i++)
	{
		station[i] = station_[i];
	}

}
void police::set_fir_no(char *fir_)
{
	fir_no = new char[];
	int p1 = strlen(fir_);
	for (int i = 0; i < p1; i++)
	{
		fir_no[i] = fir_[i];
	}
}
char police::get_station()
{
	return *station;
}
char police::get_fir_no()
{
	return *fir_no;
}
police::~police()
{
	delete station;
	delete fir_no;

}