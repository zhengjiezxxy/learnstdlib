#include <iostream>
#include <stdexcept>

constexpr int g(int n, int n0, int n1) {
    return n == 0? n1: g(n - 1, n1, n0 + n1);
}

constexpr int f(int n) {
    return n < 42? g(n, 0, 1): throw std::out_of_range("too big");
}

int main()
{
    try {
        constexpr int f41 = f(41); // OK: constexpr
        int           f43 = f(43); // OK: throws an exception
	// constexpr int f44 = f(44); // not OK but what happens?
    }
    catch (std::exception const& ex) {
        std::cout << "ERROR: " << ex.what() << "\n";
    }
}
