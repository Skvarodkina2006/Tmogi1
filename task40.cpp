#include <iostream>
#include <cmath>

int main() {
    
    double H1 = 121.742; 
    double m_H1 = 0.008; 

    double a = 1273.0 / 1000.0; 
    double m_a = 3.0 / 1000.0; 

    double b = 1178.0 / 1000.0; 
    double m_b = 2.0 / 1000.0; 

    double H2 = H1 + a - b;

    double m_H2 = sqrt(pow(m_H1, 2) + pow(m_a, 2) + pow(m_b, 2));

    std::cout << "Средняя квадратическая погрешность высоты H2: " << m_H2 << " м" << std::endl;

    return 0;
}
