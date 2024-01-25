#include <iostream> //THIS IS HEADER FILE THEY CALL IT
#include <vector>


// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int angka;

//Datatype with 'using' seperti variable
//  nama nya = datatypenya
using text_t = std::string;
using angka = int;

int main() {

    //std::vector<std::pair<std::string, int>> parlist;

    // pairlist_t pairlist;

    text_t name = "gugu";
    std::cout << name << '\n';
    
    angka nilai = 10;
    std::cout << nilai << '\n';
    
    return 0;
}