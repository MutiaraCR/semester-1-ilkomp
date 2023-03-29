#include<iostream>
using namespace std;
int main(){
	int nilai;
	cin>>nilai;
	if(nilai==100){
		cout<<"nilai sempurna\n";
	}else if(nilai>80&&nilai<100){
		cout<<"nilai di atas kkm\n";
	}else if(nilai<=75&&nilai>0){
		cout<<"nilai di bawah kkm\n";
	}
}

