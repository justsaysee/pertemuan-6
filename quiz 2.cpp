#include<iostream>
using namespace std;

int main(){
	/*int angka;
	cout<<"masukan jumlah angka =";
	cin>>angka;
	
	int nomor[angka];
	
	for(int i=0; i<sizeof(nomor)/sizeof(*nomor); i++){
		cout<<"masukan angka ke-"<<i+1<<":";
		cin>>nomor[i];
	}
	    cout<<"angka yang dimasukan adalah =";
		for(int i=0; i<sizeof(nomor)/sizeof(*nomor); i++){
		cout<<nomor[i]<<" , ";
	}
	cout<<endl;
	int bawah, atas;
	cout<<"pilih index yang ingin di cetak"<<endl;
	cout<<"indext batas bawah =";
	cin>>bawah;
	cout<<"indext batas atas =";
	cin>>atas;
	
	for(int i=bawah; i<=atas; i++){
		cout<<nomor[i]<<",";
	}*/
	
	string huruf[5]={"a","b","c","d","e"};
	
	int u =sizeof(huruf)/sizeof(*huruf);
	
	for(int i=u ; i>=0; i--){
		cout<<huruf[i]<<" , ";	
	}
	
}
