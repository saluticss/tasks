
#include <iostream>

using namespace std;
double calculate(int n, double x) {
    double c_1 = 2;
    double coefficent = x*x;
    double c_2 = coefficent;
    double sum = 0;
    double z = 2;
    sum += c_1 * c_2 / z;
    for (size_t i = 2; i <= n; i++){
        c_1 = c_1 * 2;
        c_2 = c_2 * coefficent;
        z = i + 1;
        sum += c_1 * c_2 / z;
    }
    return sum;
}

int main(){
    int n = 3;
    double x = 2;
    cout << calculate(n, x)<<endl;
}

