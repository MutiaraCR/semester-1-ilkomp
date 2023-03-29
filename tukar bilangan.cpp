#include<iostream>
#include<cmath>
using namespace std;

void tukar(int a, int b, int c){
    int N,d=0;
    cin>>N;
    
    while(N>0){    
        int b=N%10;
        d=d*10+b;
        N=N/10;
    }
    
    cout<<d<<endl;
}
int main(){
	int a,b,c;
	tukar(a,b,c);

return 0;
}
