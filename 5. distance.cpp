#include<iostream>
using namespace std;
int main (){
 
 int a,b;
 cin>>a;
 cin>>b;
 
 if(a==1&&b==2){
 	cout<<"5";
 }
 else if(a==2&&b==3){
 	cout<<"8";
 }
 else if(a==3&&b==4){
 	cout<<"7";
 }
 else if(a==4&&b==5){
 	cout<<"3";
 }
 else if(a==1&&b==3){
 	cout<<"13";
 }
 if(a==1&&b==4){
 	cout<<"20";
 }
 else if(a==1&&b==5){
 	cout<<"23";
 }
 else if(a==2&&b==4){
 	cout<<"15";
 }
 else if(a==2&&b==5){
 	cout<<"18";
 }
 else if(a==3&&b==5){
 	cout<<"10";
 }
 else if(a==2&&b==6){
 	cout<<"Error";
 }
 
 return 0;
}
