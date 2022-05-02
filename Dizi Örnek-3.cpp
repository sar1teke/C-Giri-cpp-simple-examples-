//Diziler Alıştırma

#include<iostream>

using namespace std;
int main(){
	
	int dizi1[4],dizi2[4];
    cout<<"Dizi1in elemanlarini giriniz"<<endl;
    for(int i = 0 ; i < 5 ; i++)
        cin>>dizi1[i];
     cout<<"Dizi2in elemanlarini giriniz"<<endl;
    for(int i = 0 ; i < 5 ; i++)
        cin>>dizi2[i];
        
    double dizi3[4];
    for(int i = 0 ; i < 5 ; i++)
    {
    dizi3[i]=(double)(dizi1[i]*dizi2[i])/(dizi1[i]+dizi2[i]);
	}   
	 for(int i = 0 ; i < 5 ; i++)
	 
	cout<<dizi3[i]<<" ";
	
	return 0;
	}