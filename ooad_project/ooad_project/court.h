#pragma once
struct court
{
	char *crime;
	char *act;
	char *cour;
	char *state;
public:
	court();
	court(char*, char*, char*, char*);
	~court();
	void set_crime(char*);
	void set_act(char*);
	void set_cour(char*);
	void set_state(char*);

	char get_crime();
	char get_act();
	char get_cour();
	char get_state();
};