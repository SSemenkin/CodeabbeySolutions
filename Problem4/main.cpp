#include <iostream>

int main()
{
    int count;
    int a;
    int b;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> a >> b;
        std::cout << (a > b ? b : a) << ' ';
    }

    return 0;
}
