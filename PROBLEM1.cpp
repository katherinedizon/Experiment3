#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	double total;
	int elements[10];
	int least;
	int largest;	
	
	
	cout << "This program displays the smallest and largest integer, the sum of the input, and the average of the numbers.\n";
	
	
	for(int i = 0; i < 10; i++)
	
	
	{
		cout << "Please enter number" << i + 1 << " : ";
		cin >> elements[i];
	}
	cout << endl;
	
		largest = elements[0];
	for(int i = 1; i < 10; i++)
	
	{
		
		if(largest < elements[i])
		largest = elements[i];
		
	}

	least = elements[0];
	for(int i = 1; i < 10; i++)
	
	{
		if(least > elements[i])
		least = elements[i];
	}
	
	for(int i = 0; i < 10; i++)
	{
		total = total + elements[i];
	}
	
	cout << "The smallest integer is: " << least << endl;
	
	cout << "The largest integer is: " << largest << endl;
	
	cout << "The sum of the numbers is: " << total << endl;
	
	cout << "The average of the numbers is: " << total/10 <<endl;
	
	getch();
	return 0;
}
