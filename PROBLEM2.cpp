#include<iostream>
#include<conio.h>

using namespace std;

	int Day[1][7] = {1, 2, 3, 4, 5, 6, 7};
	char province[3][20] = {"A", "B", "C"};

int main ()

{
	string A;
	string B;
	string C;
	int Temperature[3][7];

    cout << "Enter all temperature for a week of Province A, Province B and Province C.\n";

    for (int i=0; i<3; ++i)
    
    {
    	
        for (int j=0; j<7; ++j)
        {
            cout << "Province " << province[i] << ", Day" << j + 1 << ": ";
            cin >> Temperature [i][j];
        }
        
    }

    cout << "\n\n\n\nDisplaying Values:\n";

    for (int i=0; i<3; ++i)
    
    {
    	
        for(int j=0; j<7; ++j)
        {
            cout << "Province " << province[i] << ", Day " << j + 1 << " = " << Temperature[i][j] << endl;
        }
        
    }

	getch();
	return 0;
}

