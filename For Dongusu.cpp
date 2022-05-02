#include<iostream>

using namespace std;
int main(){

    cout<<"for-1"<<endl;
        for(int i=0 ; i<10 ; i++ )
        cout<< i << endl;

cout<<"-----------------------------------"<<endl;

    cout<<"for-2"<<endl;
        for(int i=0 ; i<30 ; i+=4)
        cout<< i << endl;
 
 cout<<"----------------------------------"<<endl;

    cout<<"for-3"<<endl;
        for(int i=20 ; i>0 ; i-=4 )
        cout<< i << endl;

cout<<"-----------------------------------"<<endl;
	
	cout <<"Basit Ornekler" << endl;
	
cout<<"-----------------------------------"<<endl;	

	cout <<"faktoriyel" << endl;
	
cout<<"-----------------------------------"<<endl;

cout<<"Faktoriyelini bulmak istediginiz sayiyi girin:"<<endl;
int sayi,sayi2;
cin >> sayi;
sayi2 = sayi;

int f=1; 
for(sayi ; sayi >= 1 ; sayi--)
{
	f = f*sayi;
}

cout<< sayi2 << "! =" << f << endl;

cout<<"-----------------------------------"<<endl;

    cout << "Mukemmel Sayi" << endl;
int sayi1;    
cout<<"Mukemmellik testi icin bir sayi giriniz:"<<endl;
cin>>sayi1;

int bolenler = 0;
for(int i = 1 ; i<sayi1 ; i++)
{
	if(sayi1 % i == 0)
	{
	  bolenler += i;
	}
}

if(sayi1 == bolenler)
{
	cout<<"Girilen Sayi Mukemmel Sayidir"<<endl;
}   
else
{
	cout<<"Girilen Sayi mukemmel Sayi Degildir"<<endl;
}

}
 
    
	
