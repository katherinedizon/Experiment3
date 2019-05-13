#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	cout << "This program is a reverse array program.\n";
	
	char array[70];
	int arraysize;
	
	cout << "Please enter input array:\n"; cin>> array;

	arraysize = 0;
	
	while (array [arraysize] !='\0')
	arraysize++;
		
	cout << "The reverse array is:\n";
	
	for(int a=arraysize-1; a>=0; a--)
	{
		cout << array[a];
	}
	
	cout << "\nThe size of the array is:" << arraysize;
	
	getch();	
	return 0;
}


