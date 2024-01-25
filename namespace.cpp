#include <iostream>

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}


int main () {

    // int x = 0;

    /*
    std::cout << x << '\n';
    std::cout << first::x  << '\n';
    std::cout << second::x  << '\n';
    */

    // int sum = first::x + second::x;
    // std ::cout << sum << '\n';

    // using namespace first;
    
    // std::cout << x;

    using namespace std;
    
    string name = "GOKIL";

    cout << "hello " << name;


    return 0;
}