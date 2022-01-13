#include <iostream>
#include <math.h>
using namespace std;

main()
{
	int nomermenu;
	float panjang,lebar,luas,keliling,diagonal;
	
	cout<<" MENU RUMUS PERSEGI PANJANG "<<endl;
	cout<<" 1. Hitung Luas             "<<endl;
	cout<<" 2. Hiting Keliling         "<<endl;
	cout<<" 3. Hitung Panjang Diagonal "<<endl;
	cout<<" 4. Exit                    "<<endl;
	cout<<" Masukkan Pilihan Yang Anda Inginkan : "; cin>>nomermenu;
	switch (nomermenu)
	{
		case 1 :
			{
				cout<<"  Panjang : "; cin>>panjang;
				cout<<"  Lebar   : "; cin>>lebar;
				luas=panjang*lebar;
				cout<<"  Luas    : "<<luas<<endl;
				break;
			}
		case 2 :
			{
				cout<<"  Panjang     : "; cin>>panjang;
				cout<<"  Lebar       : "; cin>>lebar;
				keliling=2*panjang+2*lebar;
				cout<<"  Keliling    : "<<keliling<<endl;
				break;
			}
		case 3 :
			{
				cout<<"  Panjang     : "; cin>>panjang;
				cout<<"  Lebar       : "; cin>>lebar;
				diagonal=sqrt((double)panjang*panjang+(double)panjang*lebar);
				cout<<"  Digonal    : "<<diagonal<<endl;
				break;
			}
		case 4 :
			{
				cout<<"  Exit Bray"<<endl;
			}
		default:
			{
				cout<<" Maaf menu tidak tersedia, silahkan masukkan angka yang lain "<<endl;
			
	}
	}
	return 0;
	
}
