#include <iostream>
#include <fstream>
#include <conio.h>
#include "criminal.h"
#include "Date.h"
using namespace std;

int criminal::checker(char *arr)
{
	int i = 0;
	while (i != '\0')
	{
		if ((arr[i] > 64 && arr[i] < 92) || (arr[i]>94 && arr[i] < 124) || (arr[i] = ' '))
		{
			i++;
			continue;
		}
		else
		{
			cout << "Data is wrong Please try Again !!!!" << endl;
			return 0;
		}
	}
	return 1;
}
void criminal::input(void)
{
	this->empty();
	criminal x;
	int c = 0;
	fstream fill;
	fill.open("data.txt");
	while (!c)
	{
		cout << "Please enter the convict code to proceed: " << endl;
		gets(this->conno);
		c = x.concheck(this->conno);
	}
	c = 0;
	while (!c)
	{
		cout << "Please enter the convit name to proceed: " << endl;
		gets(this->name);
	}
	c = 0;
	while (!c)
	{
		cout << "please enter your gender m/f "<< endl;
		gets(this->sex);
	}
	cout << "Enter address to be noted please: " << endl;
	gets(this->address);

	cout << "Enter age please: ";
	gets(this->age);

	cout << "please enter description to file: " << endl;
	cout << "please enter colour: " << endl;
	gets(this->det.set_color);

	cout << "Please enter face description: " << endl;
	gets(this->det.set_face);
	
	cout << "Please enter height: " << endl;
	gets(this->det.set_height);
	
	cout << "Please enter any marks on face or any part of body founded: " << endl;
	gets(this->det.set_imark);
	
	cout << "Please enter details for court from where prisoner convicted: " << endl;
	gets(this->ccourt.set_cour);
	
	cout << "Please enter details for state where prisoner was caught: " << endl;
	gets(this->ccourt.set_state);
	
	cout << "Please enter crime type of priosner: " << endl;
	gets(this->ccourt.set_crime);

	cout << "Please enter ACT under which prisoner is caught: " << endl;
	gets(this->ccourt.set_act);

	cout << "Please enter complete address of police station: " << endl;
	gets(this->ppolice.set_station);

	cout << "please enter FIR details :" << endl;
	gets(this->ppolice.get_fir_no);

	char ch;
	cout << "please enter date of arrest of prisoner: " << endl;
	cin >> this->ppolice.set_date.d >> this->ppolice.set_date.m >> this->ppolice.set_date.y;

	cout << "do you want to save data above? y/n" << endl;
	cin >> ch;

	if (ch == 'y' || ch == 'Y')
	{
		cout << "record has been saved, thank you for your time !!" << endl;
		fill.write((char*)this, sizeof(criminal));
	}
	else if (ch == 'n' || ch == 'N')
	{
		cout << "As you wish. thank you for your time " << endl;
		fill.close();
	}
}
void clrscr();
void criminal::output()
{
	
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;
	cout << "    Personal Record of Convict: " << endl;
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;

	cout << "convict number: " << puts(conno) << endl;
	cout << " Name is: " << puts(this->name) << endl;
	cout << "Gender is: " << puts(this->sex) << endl;
	cout << "Address is: " << puts(this->address) << endl;
	cout << "Age is: " << puts(this->age) << endl;
	cout << "Description of criminal is: " << endl;
	cout << "1. FACE: " << puts(this->det.get_face);
	cout << "2. COLOR: " << puts(this->det.get_color);
	cout << "3. IMARKS: " << puts(this->det.get_imark);
	cout << "4. HEIGHT: " << puts(this->det.get_height) << endl;

	cout << "press any key to continue !!!" << endl;
	getche();
	clrscr();
	
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;
	cout << "    CRIMINAL RECORD: " << endl;
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;

	cout << "court from which convicted: " << puts(this->ccourt.get_cour) << endl;
	cout << "state from which convicted: " << puts(this->ccourt.get_state) << endl;
	cout << "crime for which convicted: " << puts(this->ccourt.get_crime) << endl;
	cout << "act under which convicted: " << puts(this->ccourt.get_act) << endl;
	cout << endl;
	cout << "Fir no: " << puts(this->ppolice.get_fir_no) << endl;
	cout << "Date of arrest: " << this->ppolice.get_date.d << "/" << this->ppolice.get_date.m << "/" << this->ppolice.get_date.y << "/" << endl;
	cout << "Police station where fir was confirmed: " << puts(this->ppolice.get_station) << endl;
	cout << "press any key to continue!!!" << endl;
	getche();
	clrscr();
}
void criminal::display() 
{
	clrscr();
	char N[10]; 
	int rec; 
	int loc; 
	cout << "ENTER THE CONVICT CODE OF CONVICT " << endl;
	cout << " WHOSE INFORMATION YOU WANT :" << endl;
	gets(N); 
	fstream file; 
	file.open("data.txt");
	if (rec != 0) 
	{
		loc = (rec - 1)*sizeof(criminal);
		file.seekg(loc); 
		file.read((char*)this, sizeof(criminal)); 
		this->output(); 
	} 
	file.close();
}

void criminal::remove() 
{
	clrscr();
	char no[10];
	int s; 
	cout << "ENTER convict number you want to delete ";
	gets(no); 
	if (s != 0)
	{
		delete no;
	}
}
int criminal::menu() 
{ int ch; 
do
{ clrscr();
cout << "MAIN MENU WELCOME TO WORLD OF CRIMINALS :) "; 
cout << "PRESS :";
cout << "1. TO ADD RECORD/RECORDS "; 
cout << "2. TO MODIFY RECORD/RECORDS "; 
cout << "3. TO DISPLAY RECORD ";
cout << "4. TO DELETE RECORD "; 
cout << "5. TO LIST ";
cout << "6. TO QUIT ";
cin >> ch; 
} 
while ((ch != 1) && (ch != 2) && (ch != 3) && (ch != 4) && (ch != 5) && (ch != 6)); 
return(ch); 
}
