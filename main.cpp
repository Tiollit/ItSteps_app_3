#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	int a = 0, b = 1, minn, maxn, c = 0, d = 0, e = 1, m, n, s = 1;
	srand(time(NULL));
  	int newar[100];
	for (int i = 0; i < 100; i++)
	{
		newar[i] = rand() % 1000 - 500;
		cout << newar[i] << " " << endl;
		if (newar[i] < 0) a = a + newar[i];        //сума відємних елементів
		if (newar[i] % 2 == 0) b = b * newar[i];   //добуток парних елементів
	}
	minn = maxn = newar[0];
	cout << endl;
	cout << "Summ of all negative numbers: " << a << endl;
	cout << "Multiplication of even numbers: " << b << endl;
	for (int j = 0; j < 100; j++)
	{
		if (minn > newar[j])
		{
			minn = newar[j];
			c = j;
		}		
		if (maxn < newar[j])
		{
			maxn = newar[j];
			d = j;
		}		
	}
	if (c < d)
	{
		for (int k = c; k <= d; k++)
		{
			e = e * newar[k];
		}
	}
	else if (c > d)
	{
		for (int k = d; k <= c; k++)
		{
			e = e * newar[k];
		}
	}
	cout << "Multiplication of numbers between min and max: " << e << endl;
	for (int i = 0; i < 100; i++)           //мінімальна позиція відємного числа
	{
		if (newar[i] < 0)
		{
			n = i;
			break;
		}
	}
	for (int i = 99; i >= 0; i--)           //максимальна позиція відємного числа
	{
		if (newar[i] < 0)
		{
			m = i;
			break;
		}
	}
	for (int i = n; i < m; i++) s = s * newar[i];
	//cout << n << " " <<  m << endl;
	cout << "Multiplication of numbers between firs and last negative numbers: " << s << endl;
	return 0;
}