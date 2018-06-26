#include <iostream>
#include "court.h"
using namespace std;
// function to get lengthof string...

court::court(char *act_, char *cour_, char *crime_, char *state_)
{
	
	act = new char[];
	int l = strlen(act_);
	for (int i=0; i < l; i++)
	{
		act[i] = act_[i];
	}

	cour = new char[];
	int l1 = strlen(cour_);
	for (int i = 0; i < l1; i++)
	{
		cour[i] = cour_[i];
	}

	crime = new char[];
	int l2 = strlen(crime_);
	for (int i = 0; i < l2; i++)
	{
		crime[i] = crime_[i];
	}

	state = new char[];
	int l3 = strlen(state_);
	for (int i = 0; i < l3; i++)
	{
		state[i] = state_[i];
	}

}
void court::set_act(char *act_)
{
	act = new char[];
	int l = strlen(act_);
	for (int i = 0; i < l; i++)
	{
		act[i] = act_[i];
	}
}
void court::set_cour(char *cour_)
{
	cour = new char[];
	int l1 = strlen(cour_);
	for (int i = 0; i < l1; i++)
	{
		cour[i] = cour_[i];
	}
}
void court::set_crime(char *crime_)
{
	crime = new char[];
	int l2 = strlen(crime_);
	for (int i = 0; i < l2; i++)
	{
		crime[i] = crime_[i];
	}
}
void court::set_state(char *state_)
{
	state = new char[];
	int l3 = strlen(state_);
	for (int i = 0; i < l3; i++)
	{
		state[i] = state_[i];
	}
}

char court::get_act()
{
	return *act;
}
char court::get_cour()
{
	return *cour;
}
char court::get_crime()
{
	return *crime;
}
char court::get_state()
{
	return *state;
}
court::~court()
{
	delete act;
	delete cour;
	delete crime;
	delete state;
}