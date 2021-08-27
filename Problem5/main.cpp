#include <iostream>

int main()
{
    int count;
    int a;
    int b;
    int c;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> a >> b >> c;
        std::cout << (a < b && a < c ? a : (b < c && b < a ?  b : c)) << ' ';
    }

    return 0;
}
