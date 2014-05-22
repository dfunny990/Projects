/*
  Patrick Saperstein
  May 22, 2014
  Projects--Numbers 04
  Tile Cost Calculator
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int l,w;
	double c,r;
	cout<<"Welcome to the Tile Cost Calculator."<<endl;
	cout<<"Please input the cost per square foot: ";
	cin>>c;
	if(c<0){
		cout<<"Cost can not be negative. Program Ending.";
		return 0;
	}
	cout<<"Please input the length of the floor: ";
	cin>>l;
	if(l<0){
		cout<<"Length can not be negative. Program Ending.";
		return 0;
	}
	cout<<"Please input the width of the floor: ";
	cin>>w;
	if(w<0){
		cout<<"Width can not be negative. Program Ending.";
		return 0;
	}
	r=l*w*c;
	cout<<"The cost to tile the floor is $"<<fixed<<setprecision(2)<<r<<endl;
	cout<<"Thanks for using the Tile Cost Calculator.";
}

