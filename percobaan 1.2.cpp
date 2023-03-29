#include<iostream>
using namespace std;
int main(){
	
	int nilai;
	cin>>nilai;
	
	if(nilai>100){
		cout<<" Nilai melebihi range \n";
	}
	else if(80<=nilai==100){
		cout<<"A";
	}
	else if(76<=nilai<=79){
		cout<<"A-";
	}
	else if(72<=nilai<=75){
		cout<<"A/B";
	}
	else if(68<=nilai<=71){
		cout<<"B+";
	}
	else if(64<=nilai<=67){
		cout<<"B";
	}
	else if(60<=nilai<=63){
		cout<<"B-";
	}
	else if(56<=nilai<=59){
		cout<<"B/C";
	}
	else if(52<=nilai<=55){
		cout<<"C+";
	}
	else if(48<=nilai<=51){
		cout<<"C";
	}
	else if(44<=nilai<=47){
		cout<<"C-";
	}
	else if(40<=nilai<=43){
		cout<<"D+";
	}
	else if(36<=nilai<=39){
		cout<<"D";
	}
	else if(nilai<=35){
		cout<<"E";
	}
	
	return 0;
}
