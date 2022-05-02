//Dizi Örnek-1

#include<iostream>

using namespace std;
int main()
{
   	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   	string aranan;
   	int no=-1;
   	string ogrno[] = { "101", "102", "103", "104", "105", "106", "107", "108", "109", "110" };
    string isim[] ={"Ali","Veli","Hasan","Kemal","Can","Ahmet","Mehmet","Enis","Bilal","Burak"};
    string telefon[] = {"111","222","333","444","555","666","777","888","999","1000"};
    string mail[] = { "aaaa@aaa.aa", "bbbbb@bbb.bb", "cccc@ccc.cc", "dddd@ddd.dd", "eeee@eee.ee", "ffff@eee.ee", "gggg@eee.ee", "hhhh@eee.ee", "iiii@eee.ee", "jj@eee.eej" };
 
    cout<<"Kisi No'yu girin: ";
    cin>>aranan;
    for(int i=0;i<(sizeof(ogrno)/sizeof(*ogrno));i++)
    {
    	if(aranan==ogrno[i])
    	{
    		no=i;
    		break;
		}
	}
	cout<<"==========================================================================="<<endl;
	if(no!=-1){
		cout<<"Numara : "<<ogrno[no]<<endl<<"Ad : "<<isim[no]<<endl<<"Telefon : "<<telefon[no]<<"mail : "<<mail[no];
	}
	else{
		cout<<"Bulunamadi";
	}
}