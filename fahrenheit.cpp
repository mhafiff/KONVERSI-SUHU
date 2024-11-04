#include <iostream>
using namespace std;

int main() {
    cout << "\nKONVERSI TEMPERATUR FAHRENHEIT\n" << endl;

    double fahrenheit;
    cout << "Masukkan suhu dalam Fahrenheit : ";
    cin >> fahrenheit;
    cout << "Suhu adalah : " << fahrenheit << " Fahrenheit" << endl;

    //Celcius
    double celcius = 5.0/9.0 * (fahrenheit - 32); //RUMUS FAHRENHEIT KE CELCIUS
    cout << "Suhu dalam Celcius adalah " << celcius << " Celcius" << endl;

    // Reamur
    double reamur = 4.0/9.0 * (fahrenheit - 32); // RUMUS FAHRENHEIT KE REAMUR
    cout << "Suhu dalam Reamur adalah " << reamur << " Reamur" << endl;

    // Kelvin
    double kelvin = 5.0/9.0 * (fahrenheit - 32) + 273.15; // RUMUS FAHRENHEIT KE KELVIN
    cout << "Suhu dalam Kelvin adalah " << kelvin << " Kelvin" << endl;

    cout << "\nDibuat oleh Muhammad Hafif Naibaho\n";

    return 0;
}
