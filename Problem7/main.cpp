#include <iostream>
#include <cmath>
#include <cassert>

int fahrenheitToCelsius(float fahrenheitDegrees)
{
    fahrenheitDegrees -= 32;
    fahrenheitDegrees *= 5;
    fahrenheitDegrees /= 9;
    return round(fahrenheitDegrees);
}

int main()
{
    assert ((fahrenheitToCelsius(495) == 257) && "test failed.");
    int count;
    float fahrenheitDegrees;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> fahrenheitDegrees;

        std::cout << fahrenheitToCelsius(fahrenheitDegrees) << ' ';
    }

    return 0;
}
