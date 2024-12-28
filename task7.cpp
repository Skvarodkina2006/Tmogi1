#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

//
double degreesToRadians(double degrees) {
    return degrees * (PI / 180.0);
}


double sinDegrees(double degrees) {
    return sin(degreesToRadians(degrees));
}

int main() {
  
    double b = 143.18; 
    double delta_b = 0.06; 

    
    double A = 51 + 52.0 / 60.0; 
    double B = 65 + 41.0 / 60.0;

    
    double C = 180.0 - A - B;

    
    double sinA = sinDegrees(A);
    double sinB = sinDegrees(B);

    double a = b * (sinA / sinB);

   
    double delta_A = (30.0 / 3600.0) * (PI / 180.0); 
    double delta_B = (30.0 / 3600.0) * (PI / 180.0); 

    
    double dA = b * (cos(degreesToRadians(A)) / sinB);
    double dB = -b * (sinA / (sinB * sinB)) * cos(degreesToRadians(B));

    
    double relativeError_a_b = delta_b / b;
    double relativeError_a_A = dA * delta_A / a;
    double relativeError_a_B = dB * delta_B / a;

    
    double denominatorRelativeError = sqrt(
        relativeError_a_b * relativeError_a_b +
        relativeError_a_A * relativeError_a_A +
        relativeError_a_B * relativeError_a_B
    );

   
    std::cout << "Знаменатель относительной погрешности: " << denominatorRelativeError << std::endl;

    return 0;
}
