#include<iostream>
using namespace std;
int main(){
	
	int p;
	cin>>p;
	
	if(p==2||p==3||p==5||p==7||p==11||p==13||p==17||p==19||p==23||p==29||p==31||p==37||p==41||p==43||p==47||p==51||p==53||p==59||p==61){
		cout<<"Bilangan Prima\n";
	}
	else{
		cout<<"Bukan Bilangan Prima\n";
	}
	
	return 0;
}
