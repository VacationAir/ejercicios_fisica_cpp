#include <iostream>
#include <cmath>
#include <numbers>
#include <math.h>
#define _USE_MATH_DEFINES

double densidad_lineal(double lamda0, double alpha, double x, double L){
    return lamda0*(1+alpha*x/L);
}

double integral_campo_electrico_x(double lamda0, double alpha, double x, double x_0, double y_0,  double L){
    return densidad_lineal(lamda0, alpha, x, L) * ((x_0 - x) / std::pow(std::pow(x_0-x, 2) + y_0 * y_0, 1.5)); // returns y
}

double integral_campo_electrico_y(double lamda0, double alpha, double x, double x_0, double y_0,  double L){
    return densidad_lineal(lamda0, alpha, x, L) * y_0 / std::pow(std::pow(x_0 - x, 2) + y_0 * y_0, 1.5);
}

double campo_electrico_x(double lamda0, double alpha, double L, double k, int nsamples, double x_0, double y_0){
    double sum_of_areas = 0;
    double dx = L/ nsamples;
    for(double i = -L/2; i <= L/2; i+=dx){
        // a = y0, c = y1, h = dx
        sum_of_areas += (integral_campo_electrico_x(lamda0, alpha, i, x_0, y_0, L) + integral_campo_electrico_x(lamda0, alpha, i +dx, x_0, y_0, L)) / 2 * dx ;
    }
    sum_of_areas = sum_of_areas * k;
    return sum_of_areas;
}

double campo_electrico_y(double lamda0, double alpha, double L, double k, int nsamples, double x_0, double y_0){
    double sum_of_areas = 0;
    double dx = L/ nsamples;
    for(double i = -L/2; i <= L/2; i+=dx){
        // a = y0, c = y1, h = dx
        sum_of_areas += (integral_campo_electrico_y(lamda0, alpha, i, x_0, y_0, L) + integral_campo_electrico_y(lamda0, alpha, i +dx, x_0, y_0, L)) / 2 * dx ;
    }
    sum_of_areas = sum_of_areas * k;
    return sum_of_areas;
}


int main() {         
    double  x0;
    double y0;
    double L;
    double lamda0;
    double alpha;
    int n = 10000000;
    const double pi = M_PI;
    const double epsilon_0 = 8.854187817e-12;
    const double k = 1/(4*pi*epsilon_0);
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
    double result_integral_campo_el_x = campo_electrico_x(lamda0, alpha, L, k, n, x0, y0);
    std::cout << "La integral del campo electrico x es de: " << result_integral_campo_el_x << " en N/C\n";
    double result_integral_campo_el_y = campo_electrico_y(lamda0, alpha, L, k, n, x0, y0);
    std::cout << "La integral del campo electrico y es de: " << result_integral_campo_el_y << " en N/C\n";
    double modulo_campo_electrico = sqrt(result_integral_campo_el_x * result_integral_campo_el_x + result_integral_campo_el_y * result_integral_campo_el_y);
    std::cout << "La integral del campo eléctrico con respecto a x es de: " <<modulo_campo_electrico << " en N/C\n";
    return 0;          
}
