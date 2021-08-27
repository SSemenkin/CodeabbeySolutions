#include <iostream>
#include <cmath>

int main()
{
    int count;
    float a;
    float b;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> a >> b;

        std::cout << round(a / b) << ' ';
    }


    return 0;
}
