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
fflush(stdin);
     for (int i = 0; i <= p; i++) {
cout << sikc[i].nim<<" , "<< sikc[i].nama<<" , "<< sikc[i].alamat<<" , "<<
sikc[i].ipk<<endl;
  }
 cin.get();
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
    cout << "\nJumlah mahasiswa SIKC? :  ";
    cin >> jml;
    cin.ignore();
    for (int i = 0; i < jml; i++) {
        masukanData();
    }
    break;
   case '2':
    // mPertama("ke- dua");
    /* code */ 
    tampilkanData(pos);
    break;  
   case '3':
    // mPertama("ke- tiga");
    /* code */
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