#include <iostream>
using namespace std;
int main(){
	int tinggi;
	cout<<"masukan Tinggi segitiga : ";
	cin>>tinggi;
	cout<<endl;
	
	for (int a=1; a<=tinggi; a++){ //perulangan pertama untuk menentukan segitiga
		for (int b=1; b<=a; b++){ //perulangan kedua uuntuk menampilkan bintang (*)
			cout<< "*";  
		}
		
		cout<<endl;
	}
}
