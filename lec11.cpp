#include <iostream>
#include <string>
using namespace std;

int main (){
//countdown program
/*
int x = 10;
for(int x = 10; x > 0; x--){
	cout << x << endl;
if (x == 1){
	cout << "We have lift off!";
} 
}
*/
//code sample -- nested loops
/*
for (int i=0; i<5; i++){
	for (int j=0; j<5; j++){
		cout << "*";	
}
cout << endl;
}
*/
/*
for (int i=1; i<5; i++){
	for (int j=i; j<5; j++){
		cout << "*";	
}
cout << endl;
}
*/
/*
for(int i = 20; i <= 24; i++){
	if(i % 2 == 0){
		cout << i << " - even" << endl;
	}else{
		cout << i << " - odd" << endl;
	}
}
*/
/*	
for (int i=0; i<7; i++){
	for (int j=0; j<7; j++){
		cout << "*";	
}
cout << endl;
}
*/

//loop sample
/*
int y;
cout << "Enter a number you want the table of: " << endl;
cin >> y;

while (cin.fail()){
cin.clear();
cin.ignore(1000, '\n');
cout << "Invalid command enter the number again: " << endl;
cin >> y;
}

for (int x = 0; x <= 10; x++)
{ cout << y << " x " << x << " = " << y * x << endl;
}
*/
//reference -- convert to while loop
/*
for (int i=1; i<5; i++){
	for (int j=i; j<5; j++){
		cout << "*";	
}
cout << endl;
}
*/
//while loop conversion ^
/*
int i = 0;
    while (i < 5) {
        int j = 0;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
*/
//this, but reversed ^ -- [incomplete]
/*
 int i = 1;
 int j = 1;
 
        while (i <= 5) {
            j = i;
            while (j <= i) {
                cout << "*";
                j++;
            }
            
            cout << endl;
            i++;
}
*/
//factorial (ex = 4! = 4*3*2*1* = 24)


return 0;
}

