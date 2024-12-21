#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

void dMenu(){
system("cls");
cout<<"Aplikasi Mahasiswa SIKC"<<"\n";       
cout<<"1. Masukkan data mahasiswa "<<"\n";            
cout<<"2. Tampilkan data mahasiswa"<<"\n";            
cout<<"3. Perbaiki data mahasiswa"<<"\n";           
cout<<"4. Hapus data mahasiswa"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

mahasiswa sikc[30];
int pos=-1;

void masukanData(){
pos++;
system("cls");
cout << "Masukkan data mahasiswa ke-" << (pos + 1) << ":" << endl;
cout << "masukan nim: ";
getline (cin, sikc[pos].nim);
cout << "masukan nama: ";
getline (cin, sikc[pos].nama);
cout << "masukan alamat: ";
getline (cin, sikc[pos].alamat);
cout << "masukan ipk: ";
cin >> sikc[pos].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void tampilkanData(int p){
system("cls");
cout << "Menampilkan " << (pos + 1) << " Data Mahasiswa SIKC \n" << endl;
     for (int i = 0; i <= p; i++) {
cout << (i+1) << ". " << sikc[i].nim<<" , "<< sikc[i].nama<<" , "<< sikc[i].alamat<<" , "<<
sikc[i].ipk<<endl;
  }
 cin.get();
}

void perbaikanData(int p)
{
    system("cls");
    fflush(stdin);
    if (p >= 0 && p <= pos) {
        cout << "Masukkan nama baru: ";
        getline(cin, sikc[p].nama);
        cout << "Masukkan alamat baru: ";
        getline(cin, sikc[p].alamat);
        cout << "Masukkan IPK baru: ";
        cin >> sikc[p].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {

   case '1':
    int jml;
    cout << "\nJumlah mahasiswa SIKC yang ingin ditambahkan :  ";
    cin >> jml;
    cin.ignore();
    for (int i = 0; i < jml; i++) {
        masukanData();
    }
    break;

   case '2':
    tampilkanData(pos);
    break;  

   case '3':
    int ubahdt;
    cout << "\nMasukkan nomor mahasiswa yang ingin diperbaiki: ";
    cin >> ubahdt;
    cin.ignore();
    if (ubahdt >= 1 && ubahdt <= pos + 1) {
        perbaikanData(ubahdt - 1);  
    }
    break;  

   case '4':
    // mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}