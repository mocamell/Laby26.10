#include <iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
void zad1(string name);
void zad2();
int zad31(int a, int b);
void zad32(int a, int b);
void zad41(int a, int b, int c);
int zad42(int a, int b, int c);
float zad5(float pods, float wys);
void zad6(int n);
double zad7(int a, int b);
void zad8(int a, int b);
double zad91(double a, double b);
double zad92(double a, double b);
double zad93(double a, double b);
double zad94(double a, double b);
int zad101(int n);
void zad102(int n);
void zad11(double a, double b);
double zad12();
int zad13(int a, int b);
int zad14(int n);
int zad151(int n);
void zad16(int s);
int zad171(int i);
int zad172(int i);
void zad18(int c);
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
	cout << "Tabliczka mnozenia:" << endl;
    zad2();
    */
    
    /*
    //Zad3
    int a, b;
    int wieksza;
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> a;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> b;
    zad32(a, b);
    wieksza = zad31(a,b);
    cout << "Wieksza jest liczba: " << wieksza << endl;
    */
    /*
    //Zad4
    int a, b,c;
    int mniejsza;
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> a;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> b;
    cout << "Podaj trzecia liczbe calkowita: ";
    cin >> c;
    zad41(a, b, c);
    mniejsza = zad42(a, b, c);
    cout << "Najmniejsza z liczb to: " << mniejsza << endl;
    */
    /*
    //Zad5
    float pods;
    float wys;
    float cos;
    float pole = 0.0f;
    cout << "Podaj dlugosc podstawy trojkata: ";
    cin >> pods;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wys;
    pole=zad5(pods, wys);
    cos = 2 * pole;
    cout << "Podwojona wartosc pola: " << cos << endl;
    */
    /*
    //Zad6
    int n;
    cout << "Podaj liczbe calkowita dodatnia: ";
    cin >> n;
    zad6(n);
    */
    /*
    //Zad7
    int a, b;
    cout << "Podaj pierwsza wartosc calkowita: ";
    cin >> a;
    cout << "Podaj druga wartosc calkowita: ";
    cin >> b;
    cout << "Srednia wazona tych liczb wynosi: " << zad7(a, b);
    */

    /*
    //Zad8
    int a;
    int b;
    double c = 0.0;
    cout << "Podaj dlugosc pierwszej przyprostokatnej: ";
    cin >> a;
    cout << "Podaj dlugosc drugiej przyprostokatnej: ";
    cin >> b;
    zad8(a, b);
    */
    /*
    //Zad9
    double a;
    double b;
    char znak;
    char k;
    while (1) {
        cout << "Podaj pierwsza liczbe zmiennoprzecinkowa:";
        cin >> a;
        cout << "Podaj druga liczbe zmiennoprzecinkowa:";
        cin >> b;
        cout << "Podaj znak dzialania (+, -, *, /):";
        cin >> znak;
        if (znak == '+') {
           cout << "Wynik dodawania: " << zad91(a,b) << endl;
        }
        else if (znak == '-') {
        cout << "Wynik odejmowania: " << zad92(a,b) << endl;
        }
        else if (znak == '*') {
        cout << "Wynik mnozenia: " << zad93(a,b) << endl;
        }
        else if (znak == '/') {
            if (b == 0) {
                cout << "Nie mozna dzielic przez 0!!" << endl;
            }
            else {
                cout << "Wynik dzielenia: " << zad94(a, b) << endl;
            }
        }
        cout << "Czy chcesz zakonczyc dzialanie programu? (T/N): ";
        cin >> k;
        if (k == 'T') {
            return 0;
        }
    }
    */
/*
//Zad10
int n;
cout << "Podaj liczbe skladnikow: ";
cin >> n;
cout << "Suma podanych skladnikow: " << zad101(n) << endl;
zad102(n);
*/
    /*
    //Zad11
    double a, b;
    cout << "Podaj dlugosc pierwszego boku prostokata: ";
    cin >> a;
    cout << "Podaj dlugosc drugiego boku prostokata: ";
    cin >> b;
    zad11(a, b);
    */
/*
//Zad12
double wynik = zad12();
cout << "Objetosc prostopadloscianu wynosi: " << wynik << endl;
*/
    /*
    //Zad13
    int a, b;
    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> a;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> b;
    cout << a << "^" << b << "=" << zad13(a, b) << endl;
    */
/*
//Zad14
int n;
cout << "Podaj liczbe naturalna: ";
cin >> n;
cout << "Wynik dzialania " << n << "!" << " wynosi: " << zad14(n) << endl;
*/
//Zad15
/*
int n;
cout << "Podaj liczbe naturalna: ";
cin >> n;
cout << "Wynik dzialania 2^" << n << " wynosi: " << zad151(n) << endl;
*/
//Zad16
/*
int s;
cout << "Podaj szczesliwy numerek od 1 do 10: ";
cin >> s;
zad16(s);
*/
//Zad17
/*
for (int i = 1;i <= 100;i++) {
    if (i % 2 == 0) {
        cout << i << "/2=" << zad171(i) << endl;
    }
    else {
        cout << "(" << i << "-1)/2=" << zad172(i) << endl;
    }
}
*/
//Zad18
/*
int c;
cout << "Podaj liczbe calkowita: ";
cin >> c;
zad18(c);
*/
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
             cout << i << " * " << f << " = " << wynik << "\t";
		 }
         cout << endl;
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
 void zad41(int a, int b, int c) {
     if (a <= b && a <= c) {
         cout << "Najmniejsza liczba to: " << a << endl;
     }
     else if (b <= a && b <= c) {
         cout << "Najmniejsza liczba to: " << b << endl;
     }
     else   {
         cout << "Najmniejsza liczba to: " << c << endl;
     }
 }
 int zad42(int a, int b, int c) {
     if (a <= b && a <= c) {
         return a;
     }
     else if (b <= a && b <= c) {
         return b;
     }
     else {
         return c;
     }
 }
 float zad5(float pods, float wys) {
     float pole = (pods * wys) / 2;
     cout << "Pole wynosi: " << pole << endl;
     return pole;
 }
 void zad6(int n) {
     for (int i = 1;i <= n;i++) {
         if (n % i == 0) {
             cout << i << " jest dzielnikiem tej liczby!" << endl;
         }
     }
 }
 double zad7(int a, int b) {
     int c, d;
     double wazona = 0;
     cout << "Podaj wage pierwszej wartosci: ";
     cin >> c;
     cout << "Podaj wage drugiej wartosci: ";
     cin >> d;
     wazona = ((a * c) + (b * d)) / (c + d);
     return wazona;

 }
 void zad8(int a, int b) {
     double c = sqrt(a*a + b*b);
     cout << "Przeciwprostokatna wynosi: " << c << endl;
 }
 double zad91(double a, double b) {
     double wynik = a + b;
     return wynik;
 }
 double zad92(double a, double b) {
     double wynik = a - b;
     return wynik;
 }
 double zad93(double a, double b) {
     double wynik = a * b;
     return wynik;
 }
 double zad94(double a, double b) {
     double wynik = a / b;
     return wynik;
 }
 int zad101(int n) {
     int c;
     int suma = 0;
     for (int i = 0; i < n;i++) {
         cout << "Podaj wartosc: ";
         cin >> c;
         suma = suma + c;
     }
     return suma;
 }
 void zad102(int n) {
     int c;
     int suma = 0;
     for (int i = 0; i < n;i++) {
         cout << "Podaj wartosc: ";
         cin >> c;
         suma = suma + c;
     }
     cout << "Wyliczona suma: " << suma << endl;
 }
 void zad11(double a, double b) {
     double o = 2 * a + 2 * b;
     cout << "Obwod tego prostokata wynosi: " <<o<< endl;

 }
 double zad12() {
     double a, b, c;
     cout << "Podaj dlugosc pierwszej krawedzi prostopadloscianu: ";
     cin >> a;
     cout << "Podaj dlugosc drugiej krawedzi prostopadloscianu: ";
     cin >> b;
     cout << "Podaj dlugosc trzeciej krawedzi prostopadloscianu: ";
     cin >> c;
     double v = a * b * c;
     return v;
 }
 int zad13(int a, int b) {
     int wynik = 1;
     for (int i = 1; i <= b;i++) {
         wynik = wynik * a;
     }
     return wynik;
 }
 int zad14(int n) {
     int wynik = 1;
     for (int i = 1;i <= n;i++) {
         wynik = wynik*i;
  }
     return wynik;
 }
 int zad151(int n) {
     int wynik = 1;
     for (int i = 0;i < n;i++) {
         wynik = wynik * 2;
     }
     return wynik;
 }
 void zad16(int s) {
     srand(time(NULL));
     int w;
     int suma = 0;
     double p;
     for (int i = 0; i < 10;i++) {
         w = rand() % 10 + 1;
         if (w == s) {
             suma = suma+1;
         }
     }
     p = (suma / 10.0) * 100;
     cout << "Szczesliwy numerek wylosowano " << suma << " razy." << endl;
     cout << "Stanowi to " << p << " procent wszystkich wylosowanych liczb." << endl;
 }
 int zad171(int i) {
     double w = i / 2;
     return w;
 }
 int zad172(int i) {
     double w = (i-1)/ 2;
     return w;
 }
 void zad18(int c) {
     if (c % 3 == 0&&c%2!=0) {
         int w = c * c * c;
         cout << "Szescian tej liczby to " << w;
     }
     else if (c % 2 == 0&&c%3!=0) {
         int y = c * c;
         cout << "Kwadrat tej liczby to " << y;
     }
     else if (c % 6 == 0) {
         int z = 0;
             cout << "Liczba jest podzielna przez 6! " << z;
     }
 }