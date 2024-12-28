#include <iostream>
#include <cmath>

int main() {
    
    double length = 17.3; 
    double sigma = 4.0;   

    double R = sigma * sqrt(length);

    std::cout << "Допустимое значение невязки для нивелирного хода длиной " 
              << length << " км: " << R << " мм" << std::endl;

    return 0;
}
