#include <iostream>
#include <strings>

int main() {
    // Just training variable types & bitwise
    
    int x = 5; // 00000101
    int y = x << 2; // 00010100 (20 in decimal)
    char c = 'a';
    std::string text = "The c++ is... very cool?... I guess";

    std::cout << x << "\n"; // output = 5
    std::cout << y; // output = 20
    

    return 0;
}