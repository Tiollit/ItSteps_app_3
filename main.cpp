#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	int b, c, sump = 0, sumk = 0;
	string s;
	cout << "Let's play dice game: " << endl;
	cout << "Wanna start first: type y or n " << endl;
	cin >> s;
	for (int i = 0; i < 6; i++)
	{
		if (s == "y")
		{
			cout << "Make your turn: " << endl;
			system("pause");
			b = rand() % 6;
			c = rand() % 6;
			sump += b;
			sump += c;
			s = "n";
		}
		else if (s == "n")
		{
			cout << "Now computer turn: " << endl;
			system("pause");
			b = rand() % 6;
			c = rand() % 6;
			sumk += b;
			sumk += c;
			s = "y";
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
	}
	cout << "End of the game - let's see total points: " << endl;
	system("pause");
	cout << "You total points: " << sump << endl;
	cout << "Computer total points: " << sumk << endl;
	if (sump > sumk) cout << "You Win! Congratulations" << endl;
	else cout << "Sorry. You lose the game" << endl;

	return 0;
}