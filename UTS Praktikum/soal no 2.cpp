#include <iostream>
using namespace std;
int main(){
	int jurusan;
	
	cout<<"Macam-Macam jurusan "<<endl;
	cout<<"1. teknik Informatika"<<endl;
	cout<<"2. teknik sipil"<<endl;
	cout<<"3. akutansi"<<endl;
	cout<<"4. manajemen"<<endl;
	cout<<"5. hukum"<<endl;
	cout<<"6. pertanian"<<endl;
	cout<<"Masukkan pillihan anda : ";
	cin>>jurusan;
	switch(jurusan) {
		case '1' :
			cout<<"teknik informatika"<<endl;
			break;
		case '2' :
			cout<<"teknik sipil"<<endl;
			break;
		case '3' :
			cout<<"akutansi"<<endl;
			break;
		case '4' :
			cout<<"manajemen"<<endl;
			break;
		case '5' :
			cout<<"hukum"<<endl;
			break;
		case '6' :
			cout<<"pertanian"<<endl;	
			break;
		default :
			cout<<"Maaf pilihan anda salah, silahkan ulangi!";
			
}
}
			

