#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	int tgllhr,blnlhr,thnlhr;
	char nama[30];
	char alamat[50];
	
	cout<<"ISILAH DENGAN BENAR"<<endl;
	printf("Masukkan nama anda             : ");scanf("%s",&nama);
	printf("Masukkan alamat anda           : ");scanf("%s",&alamat);
	printf("Masukkan tanggal lahir anda    : ");scanf("%d",&tgllhr);
	printf("Masukkan bulan lahir anda      : ");scanf("%d",&blnlhr);
	printf("Masukkan tahun lahir anda      : ");scanf("%d",&thnlhr);
	
	printf("\nHallo %s ",nama);
	printf("\nAlamat %s ",alamat);
	printf("\nUsia anda saat ini   : %d tahun",2021-thnlhr);printf(" %d bulan",11-blnlhr);printf(" %d hari ",8-tgllhr);
	{
	cout<<"\nTERIMA KASIH ATAS KUNJUNGANNYA"<<endl;
	}
	return 0;
}
