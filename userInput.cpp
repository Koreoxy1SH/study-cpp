#include <iostream>

int main () {

    // cout << (insertion operator) character ouput
    // cin >> (extraction operator) character input

    std::string name;
    int age;

    std::cout << "Umur berapa saha ? : ";
    std::cin >> age;

    std::cout << "Nama kamu saha ? : ";
    std::getline(std::cin >> std::ws, name); //gunakan get line function untuk user input yang menambahkan beserta spasi contohnya seperti "budi susanto". di value tersebut terdapat spasi antara nama budi dan susanto. std::ws = menambahkan WhiteSpace di ujungb baris value.
    

   

    std::cout << "Etah edan " << name << '\n';
    std::cout << "Edan bener umur kau " << age << '\n';

    return 0;
}