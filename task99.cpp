#include <iostream>
#include <cmath>

const double RADIUS_EARTH = 6400e3; 
const double LENGTH_ARC = 1500; 
const double DELTA_L = 0.10; 
const double ANGLE_DEGREES = 1; 
const double DELTA_A = 10.0 / 3600; 

double calculatePartialDerivativeL(double l) {
    return l / sqrt(RADIUS_EARTH * RADIUS_EARTH - l * l);
}

double calculatePartialDerivativeR(double l) {
    return 1 - (RADIUS_EARTH / sqrt(RADIUS_EARTH * RADIUS_EARTH - l * l));
}

double calculateError() {
   
    double partialL = calculatePartialDerivativeL(LENGTH_ARC);
    double partialR = calculatePartialDerivativeR(LENGTH_ARC);
 
   
    double deltaP = sqrt(pow(partialL * DELTA_L, 2) + pow(partialR * (RADIUS_EARTH * DELTA_A * M_PI / 180), 2));
    
    return deltaP;
}

int main() {
    double error = calculateError();
    std::cout << "Средняя квадратическая погрешность поправки за кривизну Земли: " << error << " м" << std::endl;
    return 0;
}
