#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
	int n, r;
	cout << "Counting...";
	cout << " " << endl;

	for(n=1; n <=10; ++n)
	{
		cout << n << ",";
	}

	for(n > 10; n <=29; ++n)
	{
		r = n % 2;
		if (r == 0)
		cout << n << ",";
	}

	cout << "30";

_getch();
return 0;
}