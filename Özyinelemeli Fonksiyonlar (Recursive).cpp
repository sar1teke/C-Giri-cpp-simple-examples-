//Özyinelemeli Fonksiyonlar (Recursive)
#include<iostream>
#include<cmath>

using namespace std;

int toplama (int T)
{
	if(T>1)
	  
	  return T + toplama(T-1);
	
	else
	
	  return 1;
	  	
}
 int main(){
 	
 	cout << "Toplamak Istediginiz Araligi Giriniz:" << endl;
 	int a;
 	cin >> a;
 	int T = a;
 	int sonuc = toplama(T);
 	cout << "1 ile" << " " << T << " " << "arasindaki sayilarin toplami = " << sonuc << endl;
 	
 }
