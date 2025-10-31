#include <iostream>
#include <cmath>
#include <numbers>
#include <math.h>
#define _USE_MATH_DEFINES

double densidad_lineal(double lamda0, double alpha, double x, double L){
    return lamda0*(1+alpha*x/L);
}

double campo_electrico_x(double k, int n, double x0, double y0){
    double sum_of_areas = 0;
    for(int i = 0; i < n; i++){

    }
}

int main() {         
    double  x0;
    double y0;
    double L;
    double lamda0;
    double alpha;
    int n = 100;
    const double pi = M_PI;
    const double epsilon_0 = 8.854187817e-12;
    const double k = 1/4*pi*epsilon_0;
    std::cout << "Por favor introduzca un punto x: \n";
    std::cin >> x0;
    std::cout << "Por favor introduzca un punto y: \n";
    std::cin >> y0;
    std::cout << "Por favor introduzca la longitud de la barra en metros: \n";
    std::cin >> L;
    std::cout << "Por favor introduzca alpha (factor de variación de la carga): \n";
    std::cin >> alpha;
    std::cout << "Por favor introduzca lamda cero (densidad de carga en el centro): \n";
    std::cin >> lamda0;
    return 0;          
}
