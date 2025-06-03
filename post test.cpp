#include <iostream>
using namespace std;

int main(){
	int kuliah;
	cout<<"masukan jumlah mata kuliah";
	cin>>kuliah;
	string pelajaran[kuliah];
	
	for(int i=0; i<sizeof(pelajaran)/sizeof(*pelajaran); i++){
		cout<<"mata kuliah ke-"<<i<<" : ";
		cin>>pelajaran[i];
	}
	
	cout<<"cetak dari depan";
	for(int i=0; i <sizeof(pelajaran)/sizeof(*pelajaran); i++){
		cout<<pelajaran[i]<<" , ";}
	
	cout<<"cetak dari belakang";
		for(int i= sizeof(pelajaran)/sizeof(*pelajaran)-1; i >= 0 ; i--){
		cout<<pelajaran[i]<<" , ";}
		
	int bawah, atas;
	cout<<"pilih index yang ingin di cetak"<<endl;
	cout<<"masukan batas bawah =";
	cin>>bawah;
	cout<<"masukan batas atas =";
	cin>>atas;
	
	cout<<"cetak dari index 2 sampai 3";
	for(int i=bawah; i<=atas; i++){
		cout<<pelajaran[i]<<",";
	}
}
