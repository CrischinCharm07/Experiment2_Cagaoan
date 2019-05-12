#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <conio.h>
 using namespace std;
 int main()
 {
	 int x, y;
	 const double z = 2.5;

	 cout << "Input the x and y integers." << endl;
	 cout << "Integer x: "; cin >> x;
	 cout << "Integer y: "; cin >> y;

	 switch (x)
	 {		 
			case 1:
			 if (y >= 5) {
				cout << setw (10);
				std :: cout << std :: fixed;
				std :: cout << std :: setprecision(2);
				 cout << "V =  " << x + (y/z) << endl;
			 }
			 else {
				cout << setw (10);
				std :: cout << std :: fixed;
				std :: cout << std :: setprecision(2);
				 cout << "V =  " << x * y * z;
			 }
				 break;

			case 2:
				if (y <= 5) {
				cout << setw (10);
				std :: cout << std :: fixed;
				std :: cout << std :: setprecision(2);
				cout << "V =  " <<  abs ((x - y)/z);
				}
				
				else {
				cout << setw (10);
				std :: cout << std :: fixed;
				std :: cout << std :: setprecision(2);
				cout << "V =  " << x - sqrt(y + z); 
				}
				 break;

			default:
				cout << setw (10);
				std :: cout << std :: fixed;
				std :: cout << std :: setprecision(2);
				 cout << "V =  " << x + y + z;
				 break;
	 }
 getch ();
	 return 0;
 }