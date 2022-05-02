//Özyinelemeli Fonksiyonlar Örnekler

#include<iostream>
#include<cmath>

using namespace std;

int Faktoriyel(int F)
{
	if(F == 1)
    return 1;
	else
	return F * Faktoriyel(F-1);
}
int Fibonacci(int N)
{
	if(N>2)
	return Fibonacci(N-2) + Fibonacci(N-1);
	else
	return 1;
}

int main(){
	
	int F;
	cout << "Faktoriyelini Hesaplamak Istediginiz Sayiyi Giriniz:" ;
	cin >> F;
	cout << "Sonuc = " << Faktoriyel(F) << endl;
	
	int N;
	cout << "Fibonacci Degerini Hesaplamak Istediginiz Sayiyi Giriniz:";
	cin>>N;
	cout << "Fibonacci Dizisine Gore " << N << ". terimin degeri = " << Fibonacci(N) << endl;
		
}



