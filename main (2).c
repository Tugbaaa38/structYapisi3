#include <stdio.h>
#include<stdlib.h>

typedef struct                             
{
   char eposta[30];
   char telefon[11];
}Iletisim;

typedef struct
{
	char ad[20];
	char soyad[20];
	int personel_no;
	Iletisim iletisim;
}Personel;

int main() {
	 
	 Personel personel[5];
	 int i;
	 for(i=0;i<5;i++)
	 {
	 	printf("%d.personel bilgileri giriniz:(AD-SOYAD-PERSONEL NO-EPOSTA-TELEFON)\n",i+1);
	 	scanf("%s %s %d %s %s",&personel[i].ad,&personel[i].soyad,&personel[i].personel_no,&personel[i].iletisim.eposta,&personel[i].iletisim.telefon);
	 } 
	 system("cls");
     printf("\tPERSONEL BILGILERI\n");
     printf("*****************************************************************\n");
     for(i=0;i<5;i++)
     {
     printf("Ad:%s\nSoyad:%s\nPersonel No:%d\neposta:%s\nTelefon:%s\n",&personel[i].ad,&personel[i].soyad,&personel[i].personel_no,&personel[i].iletisim.eposta,&personel[i].iletisim.telefon);
     printf("\n\n");
     }
     printf("*****************************************************************\n");
	return 0;
}

/*typedef deyimi: int, float, char gibi degisken isimlerini degistirmeye yarar.
struct deyimi ile beraber kullanildiginda olusturdugunuz yapiyi bir degisken türü olarak tanimlayip o yapinin çogaltilmasini saglar. 
Bu yapidan degisken tanimlamak için tekrar struct deyiminin kullanilmasina gerek kalmaz. */
