#include <iostream>
using namespace std;
int main(){
	string a;
	string b;
	string c;
	cout<<"Masukan Nama: ";
	getline(cin,a);
	cout<<"Masukan NPM: ";
	cin>>b;
	cout<<"Masukan Hobi: ";
	getline(cin,c);
	cout<<"Nama saya adalah "<<a<<" dengan NPM "<<b<<" dengan hobi "<<c ;
	return 0;
}

