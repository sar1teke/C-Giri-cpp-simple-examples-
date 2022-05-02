//Dosya Okuma Yaparken Tek Ve Çift Olarak Sınıflandırma

#include<iostream>
#include<fstream>

using namespace std;
int main(){
 
ifstream OkumaDosyasi("dosya1.txt");
ofstream tekler("tek.txt");
ofstream ciftler("cift.txt");
	
int sayi;

while(OkumaDosyasi >> sayi)
{
	if(sayi % 2 == 0)
ciftler << sayi << " ";
    else
tekler << sayi << " ";    
}
OkumaDosyasi.close();
ciftler.close();
tekler.close();
}