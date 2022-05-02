//Dizi Örnek-2

#include<iostream>

using namespace std;
int main (){

int Btl[5];

cout<<"1-9 Arasinda Rastgele 5 Rakam Giriniz" << endl;
for(int i = 0 ; i < 5 ; i++)
    {
    cin>> Btl[i];
	}

cout<<"Herhangi Bir Karakter Giriniz"<< endl;
char krk;
cin>>krk;

for(int i = 0 ; i<5 ; i++)
{
    cout<<i<<"\t"<< Btl[i]<<"\t";
    for(int j = 0 ; j < Btl[i] ; j++)
    {
    cout<<krk;
	}
    cout<<endl;
}
	
}