#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {

    std::ifstream file("test.json");
    std::ostringstream tmp;
    tmp << file.rdbuf();
    std::string s = tmp.str();
    std::cout << s << std::endl;

    return 0;

}