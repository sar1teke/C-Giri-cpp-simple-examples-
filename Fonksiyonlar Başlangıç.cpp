//Fonksiyonlar Başlangıç (Karesini Bulma)
#include<iostream>
using namespace std;

void KareAlma(int sayi)
{
	
int kare = sayi*sayi;
cout << "Sayinin Karesi:" << kare << endl;	

}

int main(){
	
	int sonuc ;
	cout << "Karesini Hesaplamak Istediginiz Sayiyi Giriniz" << endl;
	cin >> sonuc;
	KareAlma(sonuc);
	
}