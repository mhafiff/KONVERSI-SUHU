#include <iostream>
using namespace std;

int main() {
    cout << "\nKONVERSI TEMPERATUR REAMUR\n" << endl;

    double reamur;
    cout << "Masukkan suhu dalam Reamur : ";
    cin >> reamur;
    cout << "Suhu adalah " << reamur << " Reamur" << endl;

    //Celcius
    double celcius = 5.0/4.0 * reamur;
    cout << "Suhu dalam Celcius adalah " << celcius << " Celcius" << endl;

    //Fahrenheit
    double fahrenheit = 9.0/4.0 * reamur + 32;
    cout << "Suhu dalam Fahrenheit adalah " << fahrenheit << " Fahrenheit" << endl;

    //Kelvin
    double kelvin = 5.0/4.0 * reamur + 273.15;
    cout << "Suhu dalam Kelvin adalah " << kelvin << " Kelvin" << endl;

    cout << "\nDibuat oleh Muhammad Hafif Naibaho\n";

    return 0;
}
