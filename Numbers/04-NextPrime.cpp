/*
  Patrick Saperstein
  May 22, 2014
  Projects--Numbers 03
  Prime factors
*/

#include<iostream>
using namespace std;
bool inputNext();
int nextPrime(int prime);
bool isPrime(int x);

int main(){
	int np=2;
	char input='y';
	cout<<"Welcome to the prime finder."<<endl;
	cout<<"The first prime is 2"<<endl;
	while(inputNext()){
		np = nextPrime(np);
		cout<<"The next prime is "<<np<<endl;
	}
	cout<<"Thanks for using the prime finder.";
}

bool inputNext(){
	char input;
	while(true){
		cout<<"Would you like to view the next prime? (y/n) ";
		cin>>input;
		if(tolower(input)=='y'){ return true; }
		else if(tolower(input)=='n'){ return false; }
		else {
			cout<<"Bad input, please try again."<<endl;
			continue;
		}
	}	
}

int nextPrime(int prime){
	int next = prime;
	while(true){
		++next;
		if(isPrime(next)){
			return next;
		}
	}
}

bool isPrime(int x){
	for(int i=2; i<x; i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
