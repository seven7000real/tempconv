#include <iostream>
using namespace std

int main()
{ 
    double temperature;
    char unit;
    std::cout << "Temperature Conversion Program\n";
    std::cout << "Unit references:\n";
    std::cout << "F = Fahrenheit, C = Celsius\n";
    std::cout << "What unit would you like to convert to?\n";
    cin >> unit;
    if (unit == 'F' || unit == 'f') {
        std::cout << "Insert temperature number in Celsius:";
        cin >> temperature;
        temperature = (1.8 * temperature) + 32.0;
        std::cout << "Temperature: " << temperature << " degrees in: " << unit;
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout << "Insert temperature in Fahrenheit:";
        std::cin >> temperature;
        temperature = (temperature - 32.0) / 1.8;
        std::cout << "Temperature: " << temperature << " degrees in: " << unit;
    }
    else {
        std::cout << "Please only enter the following units: F or C.";
    }

    std::cout << "\n==============================";
    return 0;
}
