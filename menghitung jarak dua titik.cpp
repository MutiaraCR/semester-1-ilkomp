#include<iostream>
#include<cmath>
using namespace std;

void jarak(){
double a,b,c,D,x1,x2,y1,y2;

cin>>x1>>y1>>x2>>y2;

a = (x2-x1)*(x2-x1);
b = (y2-y1)*(y2-y1);
c = a+b;
D = sqrt(c);
    
cout<<D;
}

int main(){

jarak();

return 0;
}
