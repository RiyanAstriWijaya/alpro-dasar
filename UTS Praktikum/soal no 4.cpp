#include <iostream>
using namespace std;
 int main(){
 	float x,y,hasil;
 	char aritmatika;
 	
 cout << "KALKULATOR SEDERHANA" <<endl;
 cout << "Metode Switch Case" <<endl;
 cout << "====================" <<endl;
 cout << "Ketikkan Nilai Pertama: ";cin>>x;
 cout << "pilih opearator +,-,*,/ :";cin>>aritmatika;
 cout << "Ketikkan Nilai Kedua: ";cin>>y;
 
 cout << "hasil                :";
 cout << x <<""<< aritmatika <<""<<y;
 
 switch(aritmatika){
 	case'+':
 		hasil= x+y;
 		break;
 	case'-':
 		hasil= x-y;
 		break;
 	case'*':
 		hasil= x*y;
 		break;
 	case'/':
 		hasil= x/y;
 		break;
 }
 cout <<" "<< "=" <<" "<< hasil <<endl;
 
 cin.get();
 return 0;
 
}
