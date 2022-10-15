#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main()
{
	string a, c;
	int b, v;
	cout << "Incert symbol, speed of painting in miliseconds, line lenght and line type: H for horizontal, V for vertical " << endl;
	cin >> a >> v >> b >> c;
	for (int i = 0; i < b; i++)
	{
		if (c == "H")
		{
			Sleep(v); cout << a << " ";
		}

		else if (c == "V")
		{
			Sleep(v); cout << a << endl;
		}
	}

	return 0;
}