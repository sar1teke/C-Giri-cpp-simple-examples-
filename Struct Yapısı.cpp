// Struct Yapısı

#include<iostream>

using namespace std;

	struct insan
	{
		int tcNo;
		string adi;
		string sehir;
		
	}m,k,l,p; //Burada Kısa Yoldan Başka Degişkenler Tanımlayabilirsiniz.
	
	int main()
	{
		insan h;
		h.adi  = "Ismail";
		h.sehir = "konya";
		h.tcNo = 147258369;
		
		cout<< h.adi << " " "Adli kisinin TC kimlik numarasi" " " << h.tcNo << "'dur" <<" " "ve" " " << h.sehir << "da yasamaktadir." << endl;
		
		m.adi = "Ahmet";
		k.adi = "Mehmet";
		k.sehir ="Denizli";
		p.tcNo = 1596357428;
		//Yukarıda Bahsettiğim Kısa Yoldan Değişken Tanımlama Örneği;
		
		cout<< m.adi << "   "<< k.adi << "   " << k.sehir << "   " << p.tcNo << endl;
			
    }