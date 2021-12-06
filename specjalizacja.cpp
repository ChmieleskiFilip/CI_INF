#include <iostream>
#include <cstring>
using namespace std;

int main(){

string text;
int szyfr;
bool powrot = false;

cout << "podaj text ktory chcesz zaszyfrowac \n";
getline(cin, text);

cout << "wybież algorytm szyfrujący.\n" << "1. szyfr podstawieniowy\n" << "2. szyfr pszedstawieniowy\n";
cout << "3. szyfr podstawienowy i przedstawienowy\n" << "4. odszyfruj tekst\n";
cin >> szyfr;
int dl = text.length();

switch(szyfr){


case 1:
	int przesuniecie;
	cout << "ille chesz przesunąć? (MAX. 26)\n";
        cin >> przesuniecie;
		for(int i=0; i < dl; i++)
		{
			for(int j=1; j < przesuniecie; j++){
				if(text[i] == ' ') continue;
				else if(text[i] == 'z'){
					text[i] == 'a';
					przesuniecie--;
					powrot = true;
				}
				else if(text[i] == 'Z'){
					text[i] == 'A';
					przesuniecie--;
					powrot = true;
				}
				else{
					text[i]++;
				}
				if(powrot){
				przesuniecie++;
				powrot = false;		
				}
			}
		}
		cout << text;
	break;
	
case 2:
		for (int i = 0; i < dl - 1; i += 2)
		{
			char znak;
			znak = text[i];
			text[i] = text[i + 1];
			text[i + 1] = znak;
		}
		cout << "Zaszyfrowany tekst kodem przestawieniowym: \n" << text << "/n";
	//}
	break;
		
case 3:
	for(int i=0; i < dl; i++){
			for(int j=1; j < przesuniecie; j++){
			if(text[i] == ' ') continue;
		else if(text[i] == 'z'){
			text[i] == 'a';
			przesuniecie--;
			powrot = true;
		}
		else if(text[i] == 'Z'){
			text[i] == 'A';
			przesuniecie--;
			powrot = true;
		}
		else{
			text[i]++;
		}
		if(powrot){
			przesuniecie++;
			powrot = false;
		}
		}
		for (int i = 0; i < dl - 1; i += 2)
		{	
			char znak;
			znak = text[i];
			text[i] = text[i + 1];
			text[i + 1] = znak;
		}
	}
		cout << "Zaszyfrowany tekst kodem przestawieniowym: \n" << text << "\n";
	break;

case 4:
	char znak;
		cout << "O ile przesunac: ";
		cin >> szyfr;
	if (szyfr <= 0 || szyfr > 26)
	{
		cout << "Niepoprawna liczba\n";
	}
	for (int j = 0; j < dl; j++){
		znak = text[j];
		if (znak >= 'a' && znak <= 'z')
		{
		znak = ((znak - 'a' + (26 - szyfr)) % 26) + 'a';
		  }
		text[j] = znak;
		}
		cout << "Odszyfrowany tekst kodem cezara\n" << text << "\n";
	break;
	deafult:
	cout << "niepoprawny wybór";
	}
		
}
