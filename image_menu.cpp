#include "image_menu.h"
#include <iostream> //std::istream and std::ostream
#include <string> //std::string

std::string getString( std::istream& is, std::ostream& os, const std::string& prompt ) {
    std::string answer;
    os << prompt;
    is >> answer;
    return answer;
}

int getInteger( std::istream& is, std::ostream& os, const std::string& prompt ) {
    int answer;
    os << prompt;
    is >> answer;
    return answer;
}

double getDouble( std::istream& is, std::ostream& os, const std::string& prompt ) {
    double answer;
    os << prompt;
    is >> answer;
    return answer;
}


int assignment1( std::istream& is, std::ostream& os ) {
    std::string color = getString(is, os, "Color: ");
    int num = getInteger(is, os, "Integer: ");
    double d = getDouble(is, os, "Number: ");
    int i;
    for (i = 0; i < num; i++) {
        std::cout << (i + 1) << " " << color << " "  << d << std::endl;

    }
    return num;
}

/*
int main( std::istream& is, std::ostream& os ) {
    int a = assignment1(std::cin, std::cout);
    return a;
}
*/

