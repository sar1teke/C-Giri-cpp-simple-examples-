//Dizilerde Struct Yapısı

#include<iostream>
using namespace std;

struct kisi
{
	int tcNo;
	string isim;
	string sehir;
	 
};

int main()
{
	kisi kisiler[3];
	for(int i = 0 ; i < 3 ; i++)
	{
	
	kisi b;
	cout<< i+1 << ". kisinin adini giriniz:";
	cin>>b.isim;
	
	cout<< i+1 << ". kisinin TC kimlik numarasini giriniz:";
	cin>>b.tcNo;
	
	cout<< i+1 << ". kisinin yasadigi sehri giriniz:";
	cin>>b.sehir;
	
	kisiler[i] = b;
	
	}
	for(int i = 0 ; i < 3 ; i++)
	{
	
	cout<< "Adi:" << kisiler[i].isim <<endl;
	cout<< "Yasadigi Sehir:" << kisiler[i].sehir <<endl;
	cout<< "TC kimlik numarasi:" << kisiler[i].tcNo <<endl;
	
	cout<<endl;
	
    }
    
	return 0;
}
