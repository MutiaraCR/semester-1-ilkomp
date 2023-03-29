#include<iostream>
using namespace std;
int main(){
	
	int nilai;
	cin>>nilai;
	
	if(nilai>100){
		cout<<" Nilai melebihi range \n";
	}
	else if(76<=nilai<=100){
		cout<<"A";
	}
	else if(71<=nilai<76){
		cout<<"B+";
	}
	else if(66<=nilai<71){
		cout<<"B";
	}
	else if(61<=nilai<66){
		cout<<"C+";
	}
	else if(56<=nilai<61){
		cout<<"C";
	}
	else if(50<=nilai<56){
		cout<<"D";
	}
	else if(nilai<50){
		cout<<"E";
	}
	
	return 0;
}
