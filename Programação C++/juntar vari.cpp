#include <iostream>
#include <string.h>


int main () {
	char stringum [50], stringdois [50];
	cout<<"primeira string:";
	cin.getline(stringum,50);
	cout<<"segunda string: ";
	cin.getline(stringdois,50);
	
	strcat (stringdois,stringum);
	cin>> stringdois;
	
	getch ();
	return (0);
}
