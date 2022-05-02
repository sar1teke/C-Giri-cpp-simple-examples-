#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
int girilen_sayi,girilen_sayi_kopya,basamak;
int sonuc=0;
cout<<"bir sayi girin : ";
cin>>girilen_sayi;
girilen_sayi_kopya=girilen_sayi;
do
{
basamak=girilen_sayi_kopya%10;
girilen_sayi_kopya=girilen_sayi_kopya/10;
sonuc=sonuc+(basamak*basamak*basamak);
}while (girilen_sayi_kopya>=1);
if (girilen_sayi==sonuc)
{
cout<<"sayi armstrong !!!"<<endl;
}
else cout<<"sayi armstrong degil !!!"<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}