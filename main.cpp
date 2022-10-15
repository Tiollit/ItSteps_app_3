#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int minran, maxran;	
	int random[100], a;
	cout << "Waiting to start filling an array: " << endl;
	system("pause");
	for (int j = 0; j < 100; j++)
	{
		a = rand() % 1000000;
		random[j] = a;
		//cout << random[j] << " ";
	}
	cout << endl;
	cout << "All done." << endl;
	cout << "Now time to find min and max number in an array:" << endl;
	system("pause");
	minran = maxran = random[0];
	for (int r = 0; r < 100; r++)
	{
		if (minran > random[r]) minran = random[r];
		if (maxran < random[r]) maxran = random[r];
	}
	cout << "Maximum of random array: " << maxran << endl;
	cout << "Minimum of random array: " << minran << endl;
	return 0;
}