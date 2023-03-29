#include<iostream>

using namespace std;

//NOMOR 1
int main(){
	
	cout<<"Nama\t\t: Ann";
	cout<<endl;
	cout<<"Umur\t\t: 19";
	cout<<endl;
	cout<<"Golongan Darah  : B";
	
	return 0;
}

//NOMOR 2
int main(){
	
	int a,n;
	a=0;
	cin>>n;
    
    for(int i=1; i<=n ; i++){
        a=a+i;    
    }
    cout<<a;
	return 0;
}


//NOMOR 3
int main(){
	
	int A [3][4]={{3,1,6,8},{5,2,3,4},{6,1,2,4}};
	
	for (int i=0 ; i<3 ; i++){
		for (int j=0 ; j<4 ; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

