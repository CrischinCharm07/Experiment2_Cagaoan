#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 int n;
	 int sum;
	 int c;

	 do {
		 cout << "Enter a whole number: "; cin >> n;
		 if (n <= 0) {
			 sum = 0;
		 }

		 else {
			 sum = 0;
		 for (c = 1; c <= n; ++c){
			 sum += c;
			  
		 }
		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << "." << endl;
		 cout << " " << endl;
		 }
	 }

  
	 while (n != 0 && n >=0); 
	  cout << "Thank you!";

	 cout << "";
	

 getch ();
	 return 0;
	 }