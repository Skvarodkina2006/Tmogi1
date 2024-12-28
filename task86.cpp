#include <iostream>
#include <cmath>

int main() {
    
    double a = 80.20;     
    double b = 59.30;     
    double h = 61.40;     

    double m_a = 0.15; 
    double m_b = 0.14; 
    double m_h = 0.14; 

    double S = (a + b) * h / 2.0;

    double rel_m_a = m_a / a;
    double rel_m_b = m_b / b;
    double rel_m_h = m_h / h;

    double m_S = S * sqrt(pow(rel_m_a, 2) + pow(rel_m_b, 2) + pow(rel_m_h, 2));

    std::cout << "Средняя квадратическая погрешность площади: " << m_S << " м²" << std::endl;

    return 0;
}

