#include <iostream>

int main()
{
    int count;
    int sum = 0;
    int buffer;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> buffer;
        sum += buffer;
    }
    std::cout << sum << '\n';

    return 0;
}
