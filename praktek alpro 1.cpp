#include<stdio.h>
#include<conio.h>

int main()
{
	char nama[25];
	int umur;
	char alamat[50];
	
	printf("Masukkan nama anda     : ");gets(nama);
	printf("Masukkan alamat anda   : ");gets(alamat);
	printf("Masukkan umur anda     : ");scanf("%d,",&umur);
	
	printf("\nNama anda          :  %s",nama);
	printf("\nAlamat anda        :  %s",alamat);
	printf("\nUmur anda          :  %d",umur);
	
	
	return 0;
}
