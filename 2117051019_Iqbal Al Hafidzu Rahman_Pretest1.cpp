#include <iostream>
using namespace std;
int main(){
//	input
	string variabel_nama;
	string variabel_jurusan;
	string variabel_alamat;
	string variabel_npm;
	cout<<"Masukkan nama anda    : ";
	getline(cin,variabel_nama);
	cout<<"Masukkan jurusan anda : ";
	getline(cin,variabel_jurusan);
	cout<<"Masukkan alamat anda  : ";
	getline(cin,variabel_alamat);
	cout<<"Masukkan NPM anda     : ";
	cin>>variabel_npm;
//	output
	cout<<"==================Biodata================ \n";
	cout<<"Nama    : "<<variabel_nama<<endl;
	cout<<"Jurusan : "<<variabel_jurusan<<endl;
	cout<<"Alamat  : "<<variabel_alamat<<endl;
	cout<<"NPM     : "<<variabel_npm<<endl;
	cout<<"========================================= \n";
	return 0;
}
