/*
  Patrick Saperstein
  May 22, 2014
  Projects--Numbers 03
  Prime factors
*/

#include<iostream>
#include<vector>
using namespace std;
void primeFact(vector<int> &results, int n);
bool isPrime(int n);

int main(){
	vector<int> results;
	int n=0;
	cout<<"Welcome to the prime factorization."<<endl;
	cout<<"Please enter the number (>2) you would like to factor: ";
	cin>>n;
	if(n<3){
		cout<<"Error, I said numbers less than 2. Program now exiting.";
		return 0;
	}
	primeFact(results, n);
	cout<<"The Prime Factors of "<<n<<" are:"<<endl;
	for(unsigned i=0; i<results.size(); ++i){
		cout<<results[i];
		if(i!=results.size()-1){
			cout<<", ";
		}
	}
}

void primeFact(vector<int> &results, int n){
	if(isPrime(n)){
		results.push_back(n);
		return;
	}
	for(unsigned i=2; i<n; i++){
		if(n%i==0){
			results.push_back(i);
			primeFact(results, n/i);
			break;
		}
	}
}

bool isPrime(int n){
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
		return true;
	}
}
