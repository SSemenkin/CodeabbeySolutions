#include <iostream>
#include <cassert>

int f (int a, int b, int c)
{
    return a * b + c;
}

int sum_of_digits(int (*function)(int, int, int), int a, int b, int c)
{
    int digit = function(a, b, c);

    int result = 0;
    while(digit) {
        result += digit % 10;
        digit /= 10;
    }

    return result;
}

int main()
{
    assert(sum_of_digits(f, 11, 9, 1) == 1 && "test failed.");
    std::cout << "test passed.\n";
    int count;
    int a;
    int b;
    int c;

    std::cin >> count;

    for (int i = 0; i < count; ++i) {
        std::cin >> a >> b >> c;
        std::cout << sum_of_digits(f, a, b, c) << ' ';
    }

    return 0;
}
