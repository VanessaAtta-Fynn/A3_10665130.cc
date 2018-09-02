#include <iostream>
using namespace std;
int main()
{
    int n;
	cout << " Student Subject Score: ";
	cin >> n;


    if(n>100){
        cout << "Input error";
	}
	else{
    if(n<0){
        cout << "Input error";
	}
	else{
	if(n>=80){
		cout << "A";
	}
		else{
                if(n>=75){
		cout << "B+";
	}
	else{
		if(n>=70){
		cout << "B";
	}
	else{
		if(n>=65){
		cout << "C+";
	}
	else{
		if(n>=60){
		cout << "C";
	}
	else{
		if(n>=55){
		cout << "D+";
	}
	else{
		if(n>=40){
		cout << "D";
	}
	else{
		if(n>=30){
		cout << "E";
	}
	else{
		cout <<"F";
	}
	}
	}
	}
	}
	}
	}
	}
    }
    }
	return 0;
}
