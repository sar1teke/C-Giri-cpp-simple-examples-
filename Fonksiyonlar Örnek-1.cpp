#include<iostream>
using namespace std;

int SayilarToplami(int a , int b)
{
	int toplam = 0;
	for(int i = a ; i < b ; i++ )
	{
		toplam = i + toplam;
		
	}
	return toplam;
}
 int main(){
 	cout << "Toplamak Istediginiz Deger Araligini Giriniz" << endl;
 	
 	int a;
 	int b;
 	cin>>a;
 	cin>>b;
 	
 	int sonuc;
 	sonuc = SayilarToplami(a,b);
 	cout << "Sonuc:" << sonuc << endl;
 }