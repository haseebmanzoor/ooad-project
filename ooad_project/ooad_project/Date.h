#pragma once
struct  date
{
	int d;
	int m;
	int y;
public:
	date(int=0,int=0,int=0);
	~date();
	void set_date(int);
	void set_month(int);
	void set_year(int);

	int get_day();
	int get_month();
	int get_year();
};