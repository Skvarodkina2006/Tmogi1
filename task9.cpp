#include <iostream>
#include <cmath>

int main() {
    
    double a = 122.57, delta_a = 0.06;
    double b = 161.85, delta_b = 0.07;
    double c = 106.28, delta_c = 0.04;


    double cos_A = (b*b + c*c - a*a) / (2*b*c);
    double A_rad = acos(cos_A);
    double A_deg = A_rad * (180 / M_PI); 

    
    double dA_da = (-a) / (sqrt(b*b + c*c - a*a) * (b*c));
    double dA_db = (b*(b*b + c*c - a*a)) / (2*b*c*sqrt(b*b + c*c - a*a));
    double dA_dc = (c*(b*b + c*c - a*a)) / (2*b*c*sqrt(b*b + c*c - a*a));

    double delta_A_rad = sqrt(pow(dA_da * delta_a, 2) + pow(dA_db * delta_b, 2) + pow(dA_dc * delta_c, 2));

    double delta_A_sec = delta_A_rad * (180 / M_PI) ; 

    std::cout << "Угол A: " << A_deg << " ° ± " << delta_A_sec << " ″ " << std::endl;

    return 0;
}
