// harfleri alfabetik sıralama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	char dizi[40];
	int sayac = 0;
	int temp;
	cout << "Lütfen Bir Kelime Giriniz (Hepsi Küçük Harf Olsun)" << endl;
	cin >> dizi;
	while (dizi[sayac] != '\0')
	{
		sayac++;
	}
	
	int i = 0, j = 0;

	while (i < sayac-1)
	{
		j = i + 1;
		while (j < sayac)
		 
		{
			if (dizi[i] > dizi[j])
			{
				temp = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = temp;
			}
			
			j++;
		}

		i++;
	}
	cout<<	"Kelimeninin Yeni Hali:  "<< dizi << endl;
}

