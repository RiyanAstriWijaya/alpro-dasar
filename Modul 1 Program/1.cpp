#include <iostream>
using namespace std;

int main () {
	float Luas,t,a,b;
	int Keliling,s1,s2,s3,s4;
	
	cout<<"masukkan tinggi :" ;
	cin>>t;
	cout<<"masukkan nilai a :" ;
	cin>>a;
	cout<<"masukkan nilai b :" ;
	cin>>b;
	
	Luas=(t*(a+b))/2;
	cout<<Luas;
	
	cout<<endl;
	
	cout<<"masukkan nilai s1 :" ;
	cin>>s1;
	cout<<"masukkan nilai s2 :" ;
	cin>>s2;
	cout<<"masukkan nilai s3 :" ;
	cin>>s3;
	cout<<"masukkam nilai s4 :" ;
	cin>>s4;
	
	Keliling=s1+s2+s3+s4;
	cout<<Keliling;
}
