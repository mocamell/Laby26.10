#include <iostream>
using namespace std;
void zad1(string name);
void zad2();
int main()
{
    /*
    //Zad1 
    string name;
    cout << "Jak masz na imie?" << endl;
    cin >> name;
    zad1(name);
  */
/*
    //Zad2
	cout << "Tabliczka mnozenia" << endl;
    zad2();
    */

    //Zad3
    int a, b;
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> a;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> b;


}
 void zad1(string name) {
 cout << "Czesc, " << name << endl;
 return;
    }
 void zad2() {
	 int wynik = 0;
     for (int i = 1; i <= 10; i++) {
         for(int f= 1; f <= 10; f++) {
             wynik = i * f;
			 cout << i << " * " << f << " = " << wynik << endl;
		 }
     }
 }
 int zad31(int a, int b) {
     if (a < b) {
         return b;
         }
     else {
         return a;
     }
 }
 void zad32(int a, int b) {
          if (a < b) {
         cout << "Wieksza liczba to: " << b << endl;
     }
     else {
         cout << "Wieksza liczba to: " << a << endl;
		  }
 }


