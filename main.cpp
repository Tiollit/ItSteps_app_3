#include <iostream>            // —працюЇ т≥льки €кщо прибуток в кожному м≥с€ц≥ р≥зний. 
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	int k, p, b, c;
	double a, minpr, maxpr, max = 0;
	double profit[12];	
	for (int i = 0; i <= 11; i++)
	{
		cout << "Incert your surplus for " << i + 1 << " month: " << endl;
		cin >> a;
		profit[i] = a;
		if (max < profit[i]) max = profit[i];
	}
	cout << max << endl;
	cout << "Incert months from which do you wanna see min and max surplus: " << endl;
	cin >> b >> c;
	maxpr = 0; minpr = max;
	if (b < c)
	{
		for (int r = b - 1; r < c - 1; r++)
		{
			if (minpr > profit[r])
			{
				minpr = profit[r];
				k = r + 1;
			}
			if (maxpr < profit[r])
			{
				maxpr = profit[r];
				p = r + 1;
			}
		}
	}
	else if (b > c)
	{
		for (int r = c - 1; r < b - 1; r++)
		{
			if (minpr > profit[r])
			{
				minpr = profit[r]; 
				k = r + 1;
			}
			if (maxpr < profit[r])
			{
				maxpr = profit[r];
				p = r + 1;
			}
		}
	}
	else if (b == c)
	{
		minpr = maxpr = profit[b - 1];
		k = p = b;
	}
	cout << fixed;
	cout << "The minimum and maximum surplus from selected period is: " << endl;
	cout << "Minimum surplus: " << minpr << " from " << k << " month" << endl;
	cout << "Maximum surplus: " << maxpr << " from " << p << " month" << endl;
	return 0;
}