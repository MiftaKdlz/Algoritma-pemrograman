#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(int argc, char*argv[])
{
	char datang[8];
	char pulang[8];
	printf("-------------------------\n");
	printf("Menghitung Biaya Parkir\n\n");
	
	printf("Jam datang 24h(00:00:00):");gets(datang);
	printf("Jam keluar 24h(00:00:00):");gets(pulang);
	
	printf("---------------------------");
	printf("\nJam Datang   :%s",datang);
	printf("\nJam Pulang   :%s",pulang);
	
	int lamaj;
	if(pulang[0,1]>=datang[0,1]){
		lamaj=pulang[0,1]-datang[0,1];
	}
	else{
		lamaj=(pulang[0,1]-datang[0,1])+24;
	}
	
	printf("\nLama Parkir  :%d",lamaj);
	
	int lamam, lamad;
	if(pulang[3,4]>=datang[3,4]){
		lamam=pulang[3,4]-datang[3,4];
	}
	else{
		lamam=(60-datang[3,4])+pulang[3,4];
	}
	
	printf(":%d", lamam);
	
	if(pulang[6,7]>=datang[6,7]){
		lamad=pulang[6,7]-datang[6,7];
	}
	else{
		lamad=(60-datang[6,7])+pulang[6,7];
	}
	
	printf(":%d",lamad);
	
	int biaya= lamaj*3000;
	printf("\nBiaya        :%d",biaya);
	
	return 0;
}
