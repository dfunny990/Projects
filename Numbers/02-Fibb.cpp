/*
  Patrick Saperstein
  May 22, 2014
  Projects--Numbers 02
  Nth Fibbonacci number
*/

#include<iostream>
using namespace std;

int fib(int f);

int main(){
	int n=0;
	cout<<"Welcome to the Fibonacci counter."<<endl;
	cout<<"Please enter the number of the fibonacci number you would like: ";
	cin>>n;
	if(n<0){
		cout<<"Error, cannot calculate a 0th or lower fibonacci number. Program now exiting.";
		return 0;
	}
	cout<<"The "<<n<<" fibonacci number is: "<<fib(n-1)<<endl;
}

int fib(int f){
	if(f==0 || f==1) {return 1;}
	return (fib(f-1)+fib(f-2));
}
