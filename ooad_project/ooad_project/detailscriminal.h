#pragma once
struct details
{
	char *color;
	char *face;
	char *imark;
	char *height;
public:
	details();
	details(char*, char*, char*, char*);
	~details();
	void set_color(char*);
	void set_face(char*); 
	void set_imark(char*);
	void set_height(char*);

	char get_color();
	char get_face();
	char get_imark();
	char get_height();

};