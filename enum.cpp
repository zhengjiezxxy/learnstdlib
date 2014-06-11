#include <iostream>
enum A ;   // opaque-enum-declaration
class B{};      // a class definition

int main() {
    std::cout << sizeof(A) << '\n';
    std::cout << sizeof(B) << '\n';
}
