//Diziler Örnek-4 Seçerek Sıralama

#include<iostream>
using namespace std;

int main(){
	
	int dizi1[10] = {-4,5,6,9,1,4,7,-87,3,-5};
	
	int minEleman;
	int gecici;
	for(int j= 0 ; j < 10 ; j++)
	{
		minEleman = dizi1[j];
		for(int i = j ; i < 10 ; i++)
		{
			if(minEleman>dizi1[i])
			{
				minEleman = dizi1[i];
				gecici = dizi1[j];
				dizi1[j] = dizi1[i];
				dizi1[i]= gecici;
			
			}
		}
	}
	for(int i = 0 ; i < 10 ; i++)
	
	   cout << dizi1[i] << " ";
}