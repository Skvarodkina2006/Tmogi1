#include <iostream>
#include <cmath>

int main() {
    
    double delta = 2.0; 
    int n = 2; 

    
    double delta_sqr = delta / sqrt(n);
    double delta_sr = sqrt(pow(delta_sqr, 2) + pow(delta, 2));

    
    std::cout << "Средняя квадратическая погрешность пятого дирекционного угла: " << delta_sr << " ″ " << std::endl;

    return 0;
}
