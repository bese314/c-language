#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>

	float a[4][3]; // matrisin verilerini burda tutucaz
	
	float b[3][1]; // b stunu verilerini burda tutucaz
	
	float x[3][1]; // x stunu verilerini burada tutucaz
	
	float d[4][4]; // i�lem g�ren matrisimizi burda tutucaz
	
	float b2[3][1];// i�lem g�ren b s�tununu burda tutucaz
	
	float crp; // sat�rlar� d�zenlerken laz�m olacak bir de�i�ken
int main()
{
// �nce ki�iden 3x3 matris verilerini isteyelim

	printf("lutfen matrisin 1. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[1][i]);  // 1. sat�r de�erlerini al�yoruz.
	
	}	
	printf("lutfen matrisin 2. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[2][i]);  // 2. sat�r de�erlerini al�yoruz.
	
	}	
	printf("lutfen matrisin 3. satir degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&a[3][i]);  // 3. sat�r de�erlerini al�yoruz.
	
	}	
	
//simdi birde b stun de�erlerini isteyelim.

	printf("lutfen matrisin b stun degerlerini sirasiyla giriniz.\n");
for(int i=1;i<4;i++)
	{
		scanf("%f",&b[i][1]);
	
	}	
	
// �imdi kullan�c�ya girdi�i matrisi g�sterelim. (ilaveli matris �eklinde..)

	printf("\n|");
	for(int k=1;k<4;k++)			//	matrisin 1. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",a[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	matrisin 2. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",a[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	matrisin 3. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",a[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b[3][1]);
	printf("\n");
	
//�nce 1. sat�r 1. s�tun eleman�n� 1 yapmam�z laz�m. bunu t�m sat�r� a[1][1] e b�lerek yeniden d�zenliyoruz.

	for(int k=1;k<4;k++)
	{
		d[1][k]=a[1][k]/a[1][1];	//	ilk eleman�m�z bir oldu.
		b2[1][1]=b[1][1]/a[1][1];	//	b stununu da a[1][1] eleman�na b�l�yoruz; 	
	}
//pivotumuzun oldu�u stunu tamamen 0 yapmam�z laz�m.
	
	for(int t=1;t<4;t++)
	{

	d[2][t]=a[2][t]-d[1][t]*a[2][1];	//ikinci sat�r d�zenleniyor
	d[3][t]=a[3][t]-d[1][t]*a[3][1];	//���nc� sat�r d�zenlenior
	
	}
	b2[2][1]=b[2][1]-a[2][1]*b2[1][1];	//b nin 2. sat�r de�eri d�zenleniyor
	b2[3][1]=b[3][1]-a[3][1]*b2[1][1];	//b nin 3. sat�r de�eri d�zenleniyor
	
	//ilk indirgenen matrisimiz yazd�r�l�yor
	
	printf("\n|");
	for(int k=1;k<4;k++)			//	yeni matrisin 1. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 2. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 3. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[3][1]);
	printf("\n");
	
// buraya kadar gayet ba�ar�l�...
// �imdi 2. sat�r�n 0 dan farkl� ilk say�s�n� 1 yapal�m..

		b2[2][1]=b2[2][1]/d[2][2];
	for(int i=3;i>0;i--)
	{
		d[2][i]=d[2][i]/d[2][2];
		
	}
	

	
// ard�ndan 3 sat�r elemanlar�n� d�zenleyelim

	
// �imdi matrsi �izelim

	printf("\n|");
	for(int k=1;k<4;k++)			//	yeni matrisin 1. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[1][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[1][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 2. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[2][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[2][1]);
	
	printf("|");
	for(int k=1;k<4;k++)			//	yeni matrisin 3. sat�r�n� yaz�yoruz..
	{
		printf("%.2f",d[3][k]);
		printf("\t");
	}
	printf(":\t%.2f|\n",b2[3][1]);
	printf("\n");





system("pause");
	
}


