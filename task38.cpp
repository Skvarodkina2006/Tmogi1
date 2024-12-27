#include <iostream>
#include <cmath> 


double calculateSKP(double H1, int N) {
   
    double f = 0.0065 * sqrt(N);
    

    double deltaH = sqrt(H1 * H1 + f * f);
    
    return deltaH;
}

int main() {
  
    double H1 = 0.006; 
    int N = 10; 

    double result = calculateSKP(H1, N);

    std::cout << "Средняя квадратическая погрешность определения высоты точки 2: ± " 
              << result << " м" << std::endl;

    return 0;
}
