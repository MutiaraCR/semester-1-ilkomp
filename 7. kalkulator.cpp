#include<iostream>
using namespace std;
int main(){
	
	int a,b,hasil;
	char o;
	cin>>a; 
	cin>>b; 
	cin>>o;
	
	switch(o){
		case '+':
			hasil=a+b;
			cout<<hasil;
		break;
			case '-':
			hasil=a-b;
		cout<<hasil;
		break;
		case '*':
			hasil=a*b;
			cout<<hasil;
		break;
		case '/':
			hasil=a/b;
			cout<<hasil;
		break;
		case '%':
			hasil=a%b;
			cout<<hasil;
		break;
	}
	
	return 0;
}
