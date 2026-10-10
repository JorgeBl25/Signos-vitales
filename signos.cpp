#include <iostream>

using namespace std;

double fahrenheitACelsius (double f) {
    return (f - 32) * 5 / 9;
}

int main (){
    double fahrenheit;

    cout << "ingrese temperatura en F: " << endl;
    cin >> fahrenheit;
    cout << "temperatura en C: " << fahrenheitACelsius(fahrenheit) << " °C" <<endl;

    return 0;

}
