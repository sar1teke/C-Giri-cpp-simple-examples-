#include<iostream>
using namespace std;
int main()
{
   int a,b,c, armstong, sayi, k=1;
   for(a=0; a<=9; a++)  
   		for(b=0; b<=9; b++)
   			for(c=0; c<=9; c++)
			   {
			       sayi = 100*a + 10*b + c;      
			       armstong  = a*a*a + b*b*b + c*c*c; 
			       if( sayi==armstong ) 
				   cout << k++ << ".sayi : " << sayi << endl;
			   }
}
