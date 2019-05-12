#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 
	 int f1 = 0, f2 = 1, f3 = 1;
	 cout << "Fibonacci Numbers:" << endl;
	 cout << "0,";

	 while (f1 + f2 < 6770)
	 {
		 f3 = f1 + f2;
		 f1 = f2;
		 f2 = f3;
		 
		 cout << f1 << ",";
	 }
	 cout << "10946";

 getch ();
	 return 0;
 }