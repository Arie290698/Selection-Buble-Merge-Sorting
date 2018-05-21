#include <iostream>
#include <string>
using namespace std;

int data[]={77,42,35,12,101,5};
int i, j, temp;
int n=sizeof(data)/sizeof(data[0]);

int main(){
	char pilihan;
	cout<<"\n\t-=[ Nama Kelompok ]=-"<<endl;
	cout<<"\t  - Arie Cahyadi (1717051056)\n\t  - Zihad Ubaddika Agung (1757051004)\n\t  - Risman Hanafi (1717051036)"<<endl;
	cout<<"\n\tPilihan Menu :\n\t1 Select Sorting\n\t2 Buble Sorting\n\t3 Merge Sorting"<<endl;
	cout<<"\n\tMasukkan Pilihan : ";
	cin >> pilihan;

    	switch (pilihan) {
    	case '1':
	
	break;
	
	case '2':
	
	break;
			
	case '3':
	
	break;
			
	default:
		system("cls");
		cout << "\nPilihan Program Salah atau Tidak Dikenali";
		system("PAUSE");
	break;
}
