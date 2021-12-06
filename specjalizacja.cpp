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
		for(int i=0; i < dl; i++){
			for(int j=1; j < przesuniecie; j++){
				if(text[i] == ' ') continue;
				else if(text[i] == 'z'){
					text[i] == 'a';
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
		for (int i = 0; i < dl - 1; i += 2){
			char znak;
			znak = text[i];
			text[i] = text[i + 1];
			text[i + 1] = znak;
		}
		cout << "Zaszyfrowany tekst kodem przestawieniowym: \n" << text << "/n";
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
		else{
			text[i]++;
		}
		if(powrot){
			przesuniecie++;
			powrot = false;
		}
		}
		for (int i = 0; i < dl - 1; i += 2){	
			char znak;
			znak = text[i];
			text[i] = text[i + 1];
			text[i + 1] = znak;
		}
	}
		cout << "Zaszyfrowany tekst kodem przestawieniowym: \n" << text << "\n";
	break;

case 4:
	bool powrot = false;
	for(int x = 1; x < 26; x++){
		for(int i = 0; i < dl; i++){
			for(int j=1; j < x; j++){
				
				if(text[i] == ' ') continue;
				else if(text[i] == 'a'){
					text[i] == 'z';
					x--;
					powrot = true;
				}
				else text[i]--;
				
				if(powrot){
				x++;
				powrot = false;
				}
			}
		}
	cout << text << "\n";
}
break;
deafult:
cout << "wybór nie istnieje\n";
break;
}
}

