#include <iostream>
#include <cmath>

int main() {
   
    double c = 299792.5; 
    double delta_c = 0.4; 
    double f = 10000.0; 
    double delta_f = 0.15; 

    
    double lambda = c / f;

    double relative_delta_c = delta_c / c;
    double relative_delta_f = delta_f / f;

   
    double relative_delta_lambda = sqrt(pow(relative_delta_c, 2) + pow(relative_delta_f, 2));

    
    double delta_lambda = lambda * relative_delta_lambda;

    

    std::cout << "Средняя квадратическая погрешность (Δλ): " << delta_lambda << " км" << std::endl;

    return 0;
}
