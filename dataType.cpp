#include <iostream>

int main() {

    int x; //decleration
    x = 10; //assigment

    // std::cout << x;

    /*
    int p = 10;
    int h = 5;
    int sum = p + h;

    std::cout << p << '\n'; 
    std::cout << h << '\n'; 
    std::cout << sum << '\n';
    */


    // data type double (inlcuding decimal)
    double days = 7.6;


    // data type single character (char) 
    char j = 'J';

    // data type (boolean : true or false)
    bool student = true;
    bool power = false;

    // data type (string)
    std::string name = "bujang";
    std::string address = "jl ini itu";
    std::string food = "mangga";

    std::cout << "Hello" << name << "alamat anda : "<< address << '\n';
    std::cout << name + address;

    return 0;
}