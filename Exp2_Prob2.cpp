#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 double h, u;
	 cout << "How many gallons were used? "; cin >> h;
	 cout << " " << endl;
	 cout << "How much is your unpaid balance? P "; cin >> u;
	 cout << " " << endl;
	 cout << "Your total water bill includes:" << endl;
	 cout << "Water demand charge: P 35" << endl;
	 cout << "Consumption charge per gallon: P1.10" << endl;
	 cout << "Late charge for unpaid balance: P20" << endl;
	 cout << " " << endl;

	 if (u > 0)
		 cout << "Your total water bill is: P " << 55 + (1.10 * h);
	 else
		 cout << "Your total water bill is: P " << 35 + (1.10 * h);

 getch ();
	 return 0;
 }