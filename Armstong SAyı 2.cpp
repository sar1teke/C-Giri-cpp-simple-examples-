#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   float a,b,c,armstong, sayi, d=1 , k=1;
   	for(a=0; a<=9; a++)  	
	    for(b=0; b<=9; b++)
			for(c=0; c<=9; c++)

						{
							
							sayi = 100*a + 10*b + c;
							while(sayi<=1000)
						    {
						    sayi=sayi/10;
						    d++;
							armstong  = pow(a,d) + pow(b,d) + pow(c,d);
						    }
						    if( sayi == armstong)
							cout << k++ << ".sayi : " << sayi << endl;
						    
					    }
}