//Dizi Örnek -5 İki Boyutlu Diziler

#include<iostream>
using namespace std;
int main(){
	
	float notlar[4][3];
  
          for(int ogrencino1 = 0 ; ogrencino1 < 4 ; ogrencino1++)
    {
		  cout<< ogrencino1 << "  " << "Nolu Ogrencinin Notlari" << endl;
		  
          cout<<"Vize-1 Notunu Giriniz"<<endl;
          cin>>notlar [ogrencino1][0];
          
          
          cout<<"Vize-2 Notunu Giriniz"<<endl;
          cin>>notlar [ogrencino1][1];
          
          
          cout<<"Final Notunu Giriniz"<<endl;
          cin>>notlar [ogrencino1][2];
 
    }
          float DonemSonuNotu;
          for(int ogrencino1 = 0 ; ogrencino1 < 4 ; ogrencino1++)
        {
		  DonemSonuNotu = (notlar[ogrencino1][0]*0.25)+(notlar[ogrencino1][1]*0.25)+(notlar[ogrencino1][2]*0.50);
          cout<< ogrencino1 << "  " << "Nolu Ogrencinin Donem Sonu Notu :" << DonemSonuNotu << endl;
        } 
          return 0 ;
}

 