#include <iostream>
#include <cmath>

int main () {

    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y); //max() function

    // z = std::min(x, y); //min() function

    // header <cmatch>
    // z = pow(2, 3); //pow() function adalah function untuk menghitung pangkat
    // z = sqrt(9);
    // z = abs(-10);
    // z = round(x);
    // z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}