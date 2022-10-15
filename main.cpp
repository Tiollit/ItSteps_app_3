#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
  	int newar[100];
	for (int i = 0; i < 100; i++)
	{
		newar[i] = rand() % 1000000 - 500000;

	}
	return 0;
}