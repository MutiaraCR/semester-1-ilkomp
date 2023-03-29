#include<iostream>
using namespace std;
int main(){
	
	float nilai;
	cin>>nilai;
	
	if(nilai>=80){
		cout<<"A"<<endl;
	}
	else if(nilai>=76&&nilai<=79.99){
		cout<<"A-"<<endl;
	}
	else if(nilai>=72&&nilai<=75.99){
		cout<<"A/B"<<endl;
	}
	else if(nilai>=68&&nilai<=71.99){
		cout<<"B+"<<endl;
	}
	else if(nilai>=64&&nilai<=67.99){
		cout<<"B"<<endl;
	}
	else if(nilai>=60&&nilai<=63.99){
		cout<<"B-"<<endl;
	}
	else if(nilai>=56&&nilai<=69.99){
		cout<<"B/C"<<endl;
	}
	else if(nilai>=52&&nilai<=55.99){
		cout<<"C+"<<endl;
	}
	else if(nilai>=48&&nilai<=51.99){
		cout<<"C"<<endl;
	}
	else if(nilai>=44&&nilai<=47.99){
		cout<<"C-"<<endl;
	}
	else if(nilai>=40&&nilai<=43.99){
		cout<<"D+"<<endl;
	}
	else if(nilai>=36&&nilai<=39.99){
		cout<<"D"<<endl;
	}
	else if(nilai<=35.99){
		cout<<"E"<<endl;
	}
	
	return 0;
}
