#include<iostream>
#include<cmath>
using namespace std;

void findMax(int N){
	int a[100],max;
	cin>>N;
	
	for(int i=0 ; i<N ; i++){
		cin>>a[i];
	}
	
	max = a[0] ;
	
	for(int i=0 ; i<N ; i++){
		if(a[i]>max){
			max = a[i];
		};
	}
cout<<max;
}

int main(){
int N;
	findMax(N);
}
