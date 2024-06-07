#include <iostream>
using namespace std;
int main () {
	string kamar;
	int hotel,harga,ls,total_harga;
	
	cout<<"1. Hotel Putri Rp.200.000"<<endl;
	cout<<"2. Hotel Odaita Rp.500.000"<<endl;
	cout<<"3. Hotel FrontOne Rp.750.000"<<endl;
	cout<<"Silahkan Pilih Jenis Hotel Anda Sukai : ";
	cin>>hotel;
	switch(hotel){
		case 1:
			kamar="Hotel Putri";
			harga=200000;
			break;
		case 2:
			kamar=" Hotel Odaita";
			harga=500000;
			break;
		case 3:
			kamar="Hotel FrontOne";
			harga=750000;
			break;
		default:
			cout<<"Pilihan Salah";
		
	}
	cout<<"Berapa lama Anda Akan Menyewa : ";
	cin>>ls;
	cout<<".............................."<<endl;
	total_harga=harga*ls;
	cout<<"Anda Memilih Hotel : "<<kamar<<endl;
	cout<<"Total Yang Harus Anda Bayar Rp. : "<<total_harga<<endl;
}
