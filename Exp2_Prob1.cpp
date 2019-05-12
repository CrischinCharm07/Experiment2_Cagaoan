#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {

	 char p;
	 double h;
	 cout << "Choose the package you purchased." << endl;
	 cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
	 cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
	 cout << "Package C: For P1995/mo of unlimited access is provided." << endl;
	 cout << " " << endl;
	 cout << "Enter the letter of the package you purchased: "; cin >> p;
	 cout << " " << endl;
	 

	 switch (p)
	 {
		case 'A':
		case 'a':
			cout << "How many hours were used in a month? "; cin >> h;
			cout << " " << endl;
		 if (h > 10)
		 cout << "Your total amount due for this month is: P" << 995 + ((h - 10) * 20);
		 else
		 cout << "Your total amount due for this month is: P 995";
		break;

		 case 'B':
		 case 'b':
			 cout << "How many hours were used in a month? "; cin >> h;
			cout << " " << endl;
			if (h > 20)
			cout << "Your total amount due for this month is: P" << 1495 + ((h - 20) * 10);
			else
			cout << "Your total amount due for this month is: P 1495";
			break;

		 case 'C':
		 case 'c':
			 cout << "How many hours were used in a month? "; cin >> h;
			cout << " " << endl;
			cout << "Your total amount due for this month is: P 1995";
			break;

		 default:
			 cout << "Invalid input. You must enter a letter between A to C only.";

	 }
	 getch ();
	 return 0;
 }