#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	int b, c, sump = 0, sumk = 0;
	string s;
	cout << "Let's play dice game: " << endl;
	cout << "Wanna start first: type y or n " << endl;
	cin >> s;
	for (int i = 0; i < 6; i++)
	{
		if (s == "y")
		{
			SetConsoleTextAttribute(hConsole, 5);
			cout << "Make your turn: " << endl;
			system("pause");
			b = rand() % 5 + 1;
			c = rand() % 5 + 1;
			sump += b;
			sump += c;			
		}
		else if (s == "n")
		{
			SetConsoleTextAttribute(hConsole, 6);
			cout << "Now computer turn: " << endl;
			system("pause");
			b = rand() % 5 + 1;
			c = rand() % 5 + 1;
			sumk += b;
			sumk += c;			
		}
		if (b == 1)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (b == 2)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << "   " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << "   " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (b == 3)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << "   " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << "   " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (b == 4)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (b == 5)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (b == 6)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}		
		if (c == 1)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (c == 2)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << "   " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << "   " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (c == 3)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << "   " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << "   " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (c == 4)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << "     " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (c == 5)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << "  " << char(174) << "  " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}
		else if (c == 6)
		{
			cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(179) << " " << char(174) << " " << char(174) << " " << char(179) << endl;
			cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
		}	
		if (s == "y") s = "n";
		else s = "y";
	}
	SetConsoleTextAttribute(hConsole, 7);
	cout << "End of the game - let's see total points: " << endl;
	system("pause");
	cout << "You total points: " << sump << endl;
	cout << "Computer total points: " << sumk << endl;
	if (sump > sumk)
	{
		SetConsoleTextAttribute(hConsole, 5);
		cout << "You Win! Congratulations!" << endl;
	}
	else if (sump < sumk)
	{
		SetConsoleTextAttribute(hConsole, 6);
		cout << "Sorry. You lose the game." << endl;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "This is draw. Nobody wins. Play another game." << endl;
	}
	SetConsoleTextAttribute(hConsole, 7);
	return 0;
}