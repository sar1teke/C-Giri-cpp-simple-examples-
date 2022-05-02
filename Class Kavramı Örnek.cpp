//Class Kavramı Örnek
#include<iostream>
 using namespace std;
 
 class Dikdortgen
{
	   private:
	   
	   int kenar1;
	   int kenar2;
	   
	   public:
	   	
	   void setKenarlar(int k1 , int k2)
	   {
	   	kenar1 = k1;
	   	kenar2 = k2;
       }
       int AlanHesaplama()
       {
	   return kenar1 * kenar2;
       }
};


int main(){
	int a,b,c,d;
	cout << "Birinci Dikdortgen(Alan1) icin Degerleri Giriniz: " << endl;
	cin >> a;
	cin >> b;
	cout << "İkinci Dikdortgen(Alan2) icin Degerleri Giriniz: " << endl;
	cin >> c;
	cin >> d;
	Dikdortgen d1 , d2;
	d1.setKenarlar(a,b);
	d2.setKenarlar(c,d);
	
	cout << "Alan1: " << d1.AlanHesaplama() << endl;
	cout << "Alan2: " << d2.AlanHesaplama()<< endl;	
}