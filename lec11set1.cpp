#include <iostream>
#include <string>
using namespace std;

int main()
{

	cout << "Welcome! This program will simply print the values of 0 to 50, within the given conditions." << endl;
/*
//program that prints the values from 0 to 50
cout << "Increment (0 to 50)" << endl;
cout << endl;

	for(int i = 0; i <= 50; i++){
		cout << i << endl;
	}
	cout << endl;
//program that prints the values from 50 to 0	
cout << "Decrement (50 to 0)" << endl; 
cout << endl;	

	for(int i = 50; i >=0; i--){
		cout << i << endl;
	}
	cout << endl;
//program that prints the values from 30 to 50
cout << "Increment (30 to 50) " << endl;
cout << endl;

	for(int i = 30; i <= 50; i++){
		cout << i << endl;
	}
	cout << endl;
//program that prints the values from 50 to 10, in decrements of 2
cout << "Decrements (50 to 10, in 2's)" << endl;
cout << endl;

	for(int i = 50;i >= 10; i = i - 2){
		cout << i << endl;
}
cout << endl;
//program that prints the values from 100 to 200, in increments of 5
cout << "Increments (100 to 200, in 5's)" << endl;
cout << endl;

	for(int i = 100;i <= 200; i = i + 5){
		cout << i << endl;
}
cout << endl;
cout << "Print finished!"; 
*/

//program to print "ARSH" in 4 different lines6
string myWord = "ARSH";
for(int x = 0; x < 4; x++ ){
	cout << myWord.at(x) << endl;
}
return 0;
}
