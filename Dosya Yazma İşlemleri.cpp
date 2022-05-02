#include<iostream>
#include<fstream>

using namespace std;
int main(){
	
 //1. Yöntem----------------------------------------------------------
   
    ifstream OkumaDosyasi;
    string satir;
    OkumaDosyasi.open("Okuma1.txt");

    
     getline(OkumaDosyasi,satir);
    cout << satir << endl;
     getline(OkumaDosyasi,satir);
    cout << satir << endl;
	 getline(OkumaDosyasi,satir);
    cout << satir << endl;
	 getline(OkumaDosyasi,satir);
    cout << satir << endl;
	 getline(OkumaDosyasi,satir);
    cout << satir << endl;
	 getline(OkumaDosyasi,satir);
    cout << satir << endl;
	 getline(OkumaDosyasi,satir);
    cout << satir << endl;
    
    OkumaDosyasi.close();
    
//2. Yöntem------------------------------------------------------------

    ifstream OkumaDosyasi;
    string satir;
    OkumaDosyasi.open("Okuma1.txt");
    
    while(getline(OkumaDosyasi,satir))
    {
	 
         cout << satir << endl;
    }
    OkumaDosyasi.close(); 

//3. Yöntem-------------------------------------------------------------

	ifstream OkumaDosyasi2;
    string kelime;
    OkumaDosyasi2.open("Okuma2.txt");
    
    while(OkumaDosyasi2>>kelime)
    {
    	 cout << kelime << endl;
	}
    	
    OkumaDosyasi2.close();
    
//4. Yöntem-------------------------------------------------------------

    ifstream OkumaDosyasi3("Okuma2.txt");
    string kelime;
   
    
    while(!OkumaDosyasi3.eof())
    {
    	OkumaDosyasi3 >> kelime; 
    	cout << kelime << endl;
	}
	OkumaDosyasi3.close();
    
         
         
}