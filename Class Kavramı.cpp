//Sınıf(Class) Kavramına Giriş.
#include<iostream>

using namespace std;

class Ogrenci
{
	public:
      int OgrenciNo;
	  string ad;
	  string soyad;
	  
	  void Ogrencibilgileri()
	  {
	  	   cout << "Ogrencinin Adi: " << ad << endl;
	  	   cout << "Ogrencinin Soyadi: " << soyad << endl;
	  	   cout << "Ogrencinin Numarasi: " << OgrenciNo << endl;
      }
};

int main(){
	
	Ogrenci ismail;
	
	ismail.ad = "ismail";
	ismail.soyad = "Sariteke";
	ismail.OgrenciNo = 213301022;
	
	ismail.Ogrencibilgileri();
}