#include <iostream>

int main () {

    // Type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit = precede value with new data type (int)


    int y = 3.14; //contoh dari impicit, jadi otomatis ouput nya integer bukan bilangan desimal
    double p = (int) 3.14; // contoh dari explicit

    char x = 100;


    std::cout << x << '\n';

    std::cout << (char) 100 << '\n';


    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << '%';

    return 0;
}