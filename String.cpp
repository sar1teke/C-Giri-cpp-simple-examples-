//string

#include<iostream>

using namespace std;
int main(){

string metin1="Merhaba ";
string metin2="ism Sariteke";

 //String uzunlugu olcme
 
int uzunlukstring = metin1.size();
 cout<< uzunlukstring << endl;
 
 //Stringteki metini yazdırma
 
 cout<< metin1 << endl;
 cout<< metin2 << endl;
 
//Stringteki karaktere direk gitme
 
 cout<< metin1[0] << endl;
 cout<< metin1[2]<< endl;
 cout<< metin1[5] << endl;
 
 //String icindeki metine karakter ekleme
 
 metin2.insert(3,"ail");
 cout<< metin2 << endl;

//String icindeki metinleri birlestirme

string metin3 = metin1 + metin2;
cout<< metin3 << endl;
cout<<endl;
 //String metinlerini kendi aralarında degisim
 
 cout<< metin1 <<endl;
 cout<< metin2 <<endl;
 cout<<endl;
 swap(metin1,metin2);
 cout<< metin1 <<endl;
 cout<< metin2 <<endl;
 cout<<endl;
}