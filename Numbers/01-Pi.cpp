/*
  Patrick Saperstein
  May 22, 2014
  Projects--Numbers 01
  Pi to Nth Digit
*/

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	int n=0;
	cout<<"Welcome to the Pi displayer."<<endl;
	cout<<"Please enter the number of digits of Pi (past the 3.) you would like: ";
	cin>>n;
	if(n<0){
		cout<<"Error, cannot calculate Pi to less than one digit. Program now exiting.";
		return 0;
	}
	long double pi=acos(-1.0L);
	cout<<setprecision(n+1)<<"Pi = "<<pi<<endl;
}

