#include <iostream>
using namespace std;

int main() {
int pilihan;
  char ulang;
  do
  {
  cout << endl;
  cout << " =====MENU===== " << endl;
  cout << endl;
  cout << "1. Baca data" << endl;
  cout << "2. Cetak data" << endl;
  cout << "3. Ubah data" << endl;
  cout << "4. Hapus data" << endl;
  cout << "5. Keluar program" << endl;
  cout << "==============================" << endl;
  cout << " Pilihan Anda = ";cin >> pilihan;
  cout << "==============================" << endl;
  
  switch(pilihan){
  	case 1:
  		cout<<" Anda memilih menu nomor 1 "<<endl;
  		break;
  	case 2:
  		cout<<" Anda memilih menu nomor 2 "<<endl;
  		break;
  	case 3:
  		cout<<" Anda memilih menu nomor 3 "<<endl;
  		break;
  	case 4:
  		cout<<" Anda memilih menu nomor 4 "<<endl;
  		break;
  	case 5:
  		cout<<" Anda memilih menu nomor 5 "<<endl;
  		break;
  	default:
  		cout<<" Maaf menu tidak tersedia "<<endl;
  }
  cout<<endl;
  
  cout<<" Ingin memilih menu yang lain (y/t)?"<<endl;
  cin>>ulang;
  cout<<endl;
}
while(ulang!='t');
cout<<" Terima Kasih Atas Kunjunganya^_^";
cout<<endl;
  
  return 0;
}

