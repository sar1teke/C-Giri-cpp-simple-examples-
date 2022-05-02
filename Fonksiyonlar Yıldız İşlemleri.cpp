//Fonksiyonlarda Yıldız İşlemleri
#include<iostream>
using namespace std;

void yildiz1 (int sayi);
void yildiz2 (int sayi2);

int main (){
  int a;
  cout << "Bir Deger Giriniz:" << endl;
  cin >> a ;
  yildiz1(a);
  yildiz2(a); 	
}
void yildiz1 (int sayi)
{
	int satiruzunlugu = 2 * sayi - 1;
	for(int i = 0 ; i < sayi ; i++)
	{
		for(int j = 0 ; j < satiruzunlugu ; j++)
		{
			if(j < i || j > satiruzunlugu-i-1)
			cout << " " ;
			else
			cout << "*" ;
		}
		cout << endl;	 
	}
}
void yildiz2 (int sayi2)
{
	int satiruzunlugu = 2.5 * sayi2;
	for ( int i = 0 ; i < sayi2 ; i++)
	{
		for (int j = 0 ; j < satiruzunlugu ; j++)
		{
		if (j > sayi2-1 && j < sayi2+sayi2/2)
		cout << " ";
		else
		cout << "*";
	    }
	    cout << endl;
	}
			
}