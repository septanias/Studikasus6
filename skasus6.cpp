#include <iostream>
#include <string>
using namespace std;
class data{
	public:
		void input();
		void output();
	private:
		char nama[50], matkul[50];
		int tugas, uts, uas, NA, tgs, nuts, nuas;
};
void data::input(){
	cout<<"Nama mahasiswa : ";
	cin.getline(nama, sizeof(nama));
	cout<<"Nama mata kuliah : ";
	cin.getline(matkul, sizeof(matkul));
	cout<<"Daftar nilai : "<<endl;
	cout<<"Nilai tugas (20%)	: "; cin>>tugas;
	cout<<"Nilai uts (35%)		: "; cin>>uts;
	cout<<"Nilai uas (45%)		: "; cin>>uas;
}
void data::output(){
	tgs=tugas*20/100;
	nuts=uts*35/100;
	nuas=uas*45/100;
	NA=tgs+nuts+nuas;
	cout<<"---------------Data Nilai Mahasiswa-------------"<<endl;
	cout<<"Nama mahasiswa : "<<nama<<endl;
	cout<<"Nama mata kuliah : "<<matkul<<endl;
	cout<<"Nilai tugas (20%)	: "<<tgs<<endl;
	cout<<"Nilai uts (35%)		: "<<nuts<<endl;
	cout<<"Nilai uas (45%)		: "<<nuas<<endl;
	cout<<"Nilai akhir		: "<<NA<<endl;
}
int main() {
	data nilai;
	nilai.input();
	nilai.output();
}
