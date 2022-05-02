//Random Sayı Üretme
#include<iostream>
#include<ctime>

using namespace std;
int main(){
	
	srand(time(0));
    for(int i = 0 ; i < 50 ; i++)
    //Burası 5-10 Arası Rastgele Sayılar Üretir.
       cout << 5 + rand() % 5 << endl;	
       cout << "------------------------------------------------------------------------------------------------"; 
	   cout << endl;   
    //İstenilen Aralıkta Rastgele Sayılar Üretme.
	int baslangic ;
    int bitis ;
    cout << "Rastgele Sayi Bulmak İstediginiz Araligi Giriniz ( Once Kucuk Sayi )" << endl;
    cin >> baslangic;
    cout << endl;
    cin >> bitis;
    
	int aralik = (bitis - baslangic);
    for(int i = 0 ; i < 50 ; i++)
       cout << baslangic + rand() % aralik << endl;    
}