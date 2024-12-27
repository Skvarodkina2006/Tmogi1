#include <iostream>
#include <cmath>

const double PI = 3.14;

double calculateRadiusError(double volumeError, double radius) {
   
    double dV_dR = 4 * PI * std::pow(radius, 2);
    
    double radiusError = volumeError / dV_dR;
    
    return radiusError * 1000; // в мм
}

int main() {
    double R = 10.0; 
    double mV = 1.57; 

    double mR = calculateRadiusError(mV, R); 

    std::cout << "Средняя квадратическая погрешность радиуса: " << mR << " мм" << std::endl;

    return 0;
}
