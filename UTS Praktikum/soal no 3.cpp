#include <iostream>
using namespace std;
int main() {
	int kehadiran,tugas,uts,uas,nilai;
	
	cout<<"NILAI AKHIR AKADEMIK";
	cout<<"masukkan nilai kehadiran :";
	cin>>kehadiran;
	cout<<"masukkan nilai tugas :";
	cin>>tugas;
	cout<<"masukkan nilai uts :";
	cin>>uts;
	cout<<"masukkan nilai uas :";
	cin>>uas;
	
	int nilai_kehadiran=0.10*kehadiran;
	int nilai_tugas=0.15*tugas;
	int nilai_uts=0.35*uts;
	int nilai_uas=0.40*uas;
	
	cout<<"nilai kehadiran :"<<nilai_kehadiran<<endl;
	cout<<"nilai tugas :"<<nilai_tugas<<endl;
	cout<<"nilai uts :"<<nilai_uts<<endl;
	cout<<"nilai uas :"<<nilai_uas<<endl;
	
	int total= nilai_kehadiran+nilai_tugas+nilai_uts+nilai_uas;
	cout<<"total nilai yang didapatkan :"<<total<<endl;
	if (nilai>90) ;
	cout<<"Anda Mendapatkan Nilai A";
}
