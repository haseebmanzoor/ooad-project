#include "court.h"
#include "detailscriminal.h"
#include "police.h"
#pragma once 

class criminal:public date
{
	char *name;
	char *sex;
	char *conno;
	char *age;
	char *address;
	court ccourt;
	police ppolice;
	details det;
public:

	int checker(char arr[]);
	void input();
	void output();
	void del();
	void display();
	void remove();
	int menu();
	void modify();
	void list();
	void empty();
	int concheck(char b[]);
};