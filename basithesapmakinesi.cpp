#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    char islem;
    cout << "Yapmak istediginiz islemi giriniz : ";
    cin >> a >> islem >> b;
    
    if(islem =='+')
    cout << "Islemin sonucu : " << a + b << endl;
    else if(islem =='-')
    cout << "Islemin sonucu : " << a - b << endl;
    else if(islem =='*')
    cout << "Islemin sonucu : " << a * b << endl;
    else if(islem =='/')
    cout << "Islemin sonucu : " << a / b << endl;
    else
    cout << "Lutfen gecerli bir islem giriniz." << endl;
}
