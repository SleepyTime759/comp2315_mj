#include <iostream>
using namespace std;

int main()
{
    double celcius, fahrenheit;

    cout<<"ingrese la temperatura em grados Celcius: ";
    cin >> celcius;

    fahrenheit = celcius * 9/5 + 32;

    cout <<"La temperatura entrada en grados celcius es equivalente a " <<fahrenheit<< " grados fahrenheit."<<endl;

    return 0;
}