#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>

	float a[4][3]; // matrisin verilerini burda tutucaz
	
	float b[3][1]; // b stunu verilerini burda tutucaz
	
	float x[3][1]; // x stunu verilerini burada tutucaz
	
	float d[4][4]; // iþlem gören matrisimizi burda tutucaz
	
	float b2[3][1];// iþlem gören b sütununu burda tutucaz
	
	float crp; // satýrlarý düzenlerken lazým olacak bir deðiþken
int main()
{
// önce kiþiden 3x3 matris verilerini isteyelim

	printf("lutfen matrisin 1. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[1][i]);  // 1. satýr deðerlerini alýyoruz.
	
	}	
	printf("lutfen matrisin 2. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[2][i]);  // 2. satýr deðerlerini alýyoruz.
	
	}	
	printf("lutfen matrisin 3. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[3][i]);  // 3. satýr deðerlerini alýyoruz.
	
	}	
	
//simdi birde b stun deðerlerini isteyelim.

	printf("lutfen matrisin b stun degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&b[i][1]);
	
	}	
	
// þimdi kullanýcýya girdiði matrisi gösterelim. (ilaveli matris þeklinde..)

	printf("\n|");
	for(int k=1;k<4;k++)			//	matrisin 1. satýrýný yazýyoruz..
	{
		printf("%.2f",a[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	matrisin 2. satýrýný yazýyoruz..
	{
		printf("%.2f",a[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	matrisin 3. satýrýný yazýyoruz..
	{
		printf("%.2f",a[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[3][1]);
	printf("\n");
	
//önce 1. satýr 1. sütun elemanýný 1 yapmamýz lazým. bunu tüm satýrý a[1][1] e bölerek yeniden düzenliyoruz.

	for(int k=1;k<4;k++)
	{
		d[1][k]=a[1][k]/a[1][1];	//	ilk elemanýmýz bir oldu.
		b2[1][1]=b[1][1]/a[1][1];	//	b stununu da a[1][1] elemanýna bölüyoruz; 	
	}
//pivotumuzun olduðu stunu tamamen 0 yapmamýz lazým.
	
	for(int t=1;t<4;t++)
	{

	d[2][t]=a[2][t]-d[1][t]*a[2][1];	//ikinci satýr düzenleniyor
	d[3][t]=a[3][t]-d[1][t]*a[3][1];	//üçüncü satýr düzenlenior
	
	}
	b2[2][1]=b[2][1]-a[2][1]*b2[1][1];	//b nin 2. satýr deðeri düzenleniyor
	b2[3][1]=b[3][1]-a[3][1]*b2[1][1];	//b nin 3. satýr deðeri düzenleniyor
	
	//ilk indirgenen matrisimiz yazdýrýlýyor
	
	printf("\n|");
	for(int k=1;k<4;k++)			//	yeni matrisin 1. satýrýný yazýyoruz..
	{
		printf("%.2f",d[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 2. satýrýný yazýyoruz..
	{
		printf("%.2f",d[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 3. satýrýný yazýyoruz..
	{
		printf("%.2f",d[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[3][1]);
	printf("\n");
	
// buraya kadar gayet baþarýlý...
// þimdi 2. satýrýn 0 dan farklý ilk sayýsýný 1 yapalým..

		b2[2][1]=b2[2][1]/d[2][2];
	for(int i=3;i>0;i--)
	{
		d[2][i]=d[2][i]/d[2][2];
		
	}
	

	
// ardýndan 3 satýr elemanlarýný düzenleyelim

	
// þimdi matrsi çizelim

	printf("\n|");
	for(int k=1;k<4;k++)			//	yeni matrisin 1. satýrýný yazýyoruz..
	{
		printf("%.2f",d[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 2. satýrýný yazýyoruz..
	{
		printf("%.2f",d[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 3. satýrýný yazýyoruz..
	{
		printf("%.2f",d[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[3][1]);
	printf("\n");





system("pause");
	
}


