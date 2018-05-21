/*
Link Github : 
https://github.com/Arie290698/Selection-Buble-Merge-Sorting

References :
http://faculty.cs.niu.edu/~hutchins/csci241/sorting.htm
http://faculty.cs.niu.edu/~hutchins/csci241/mergsort.htm

Thanks for :
http://format.krzaq.cc/
*/
#include <iostream>
#include <string>
using namespace std;

int data[] = { 77, 42, 35, 12, 101, 5 };
int i, j, k, temp;
int n = sizeof(data) / sizeof(data[0]);
int ddata[] = {};

int main()
{
    char pilihan;
    cout << "\n\t-=[ Nama Kelompok ]=-" << endl;
    cout << "\t  - Arie Cahyadi (1717051056)\n\t  - Zihad Ubaddika Agung (1757051004)\n\t  - Risman Hanafi (1717051036)" << endl;
    cout << "\n\tPilihan Menu :\n\t1 Select Sorting\n\t2 Buble Sorting\n\t3 Merge Sorting" << endl;
    cout << "\n\tMasukkan Pilihan : ";
    cin >> pilihan;

    switch (pilihan) {
    case '1':
        system("cls");
        cout << "\n\t-=[ Selection Sort ]=-" << endl;
        cout << "\tUnsorted Data : ";
        for (i = 0; i < (n); i++) {
            cout << data[i] << " ";
        }

        cout << "\n\n\tSorted Data : ";
        for (i = 0; i < n; i++) {
            int Smallsub = i;
            for (j = i + 1; j < n; j++) {
                if (data[j] < data[Smallsub]) {
                    Smallsub = j;
                }
            }

            int temp = data[i];
            data[i] = data[Smallsub];
            data[Smallsub] = temp;

            cout << data[i] << " ";
        }
        cout << endl;
        break;

    case '2':
        system("cls");
        cout << "\t-=[ Buble Sorting ]=-";
        cout << "\n\tUnsorted Data : ";
        for (i = 0; i < (n); i++) {
            cout << data[i] << " ";
        }

        cout << "\n\n\tSorted Data : ";
        for (i = 0; i < (n - 1); i++) {
            for (j = 0; j < (n - i - 1); j++) {
                if (data[j] > data[j + 1]) {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        break;

    case '3':
        system("cls");
        cout << "\t-=[ Merge Sorting ]=-";
        cout << "\n\tUnsorted Data : ";
        for (i = 0; i < (n); i++) {
            cout << data[i] << " ";
        }

        cout << "\n\n\tSorted Data : ";
        /*
		int Middle;
        
        Middle = (data[0] + data[n]) / 2;

        k = 0;
        i = data[0];
        j = Middle + 1;

        while (i <= Middle && j <= data[n])
            if (data[i] <= data[j]) {
                ddata[k] = data[i];
                i++;
                k++;
            }
            else {
                ddata[k] = data[j];
                j++;
                k++;
            }

        while (i <= Middle) {
            ddata[k] = data[i];
            i++;
            k++;
        }

        while (j <= data[n]) {
            ddata[k] = data[j];
            j++;
            k++;
        }

        k = 0;
        i = data[0];
        while (i <= data[n]) {
            data[i] = ddata[k];
            i++;
            k++;
        }
		*/
        break;

    default:
        system("cls");
        cout << "\nPilihan Program Salah atau Tidak Dikenali";
        system("PAUSE");
        break;
    }
}
