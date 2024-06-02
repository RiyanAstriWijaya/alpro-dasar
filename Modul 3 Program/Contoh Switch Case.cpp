#include <iostream>
using namespace std;
int main () {
	char grade;
	cout<<"masukkan grade :";
	cin>>grade;
	switch (grade) {
	
	case 'A':
		cout<<"Luar Biasa"<<endl;
		break;
	case 'B':
		cout<<"Biasa"<<endl;
		break;
	case 'C':
		cout<<"Cukup"<<endl;
		break;
	case 'D':
	case 'E':
		cout<<"Anda Remedi"<<endl;
		break;
	dafault:
		cout<<"Grade Salah"<<endl;
	}
}
