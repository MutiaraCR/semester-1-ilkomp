#include<iostream>
using namespace std;
int main(){
	
	int a;
	cin>>a;
	
	if(a%400==0){
		cout<<"Tahun Kabisat\n";
	}
	else if(a%100==0){
		cout<<"Bukan Tahun Kabisat\n";
	}
	else if(a%4==0){
		cout<<"Tahun Kabisat\n";
	}
	else {
		cout<<"Bukan Tahun Kabisat\n";
	}
	return 0;
	
}
