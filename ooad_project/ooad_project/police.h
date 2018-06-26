#include "Date.h"
#pragma once 
struct police
{
	char *station;
	char *fir_no;
	date date_arr;
public:
	police();
	police(char*, char*, date);
	~police();

	void set_station(char*);
	void set_fir_no(char*);
	void set_date(date);

	char get_station();
	char get_fir_no();
	date get_date();

};