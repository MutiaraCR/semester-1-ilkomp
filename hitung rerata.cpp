#include<iostream>
#include<cmath>
using namespace std;

void hitungRerata(){
	int N,a,b,c,r;
	cin>>N;
	
	for(int i=0 ; i<N ; i++){
		cin>>a;
		b+=a;
		c+=b;
	}
	r=a/N;
	cout<<r;
}

int main(){

	hitungRerata();
}
