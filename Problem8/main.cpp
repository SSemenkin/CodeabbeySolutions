#include <iostream>
#include <cassert>

int sum_of_member_progression(int init_value,
                                int step,
                                int steps)
{
    int result = 0;
    for (int i = 0; i < steps; ++i) {
        result += init_value + i * step;
    }
    return result;
}

int main()
{
    assert((sum_of_member_progression(5, 2, 3) == 21) && "test not passed.");
    int tests;
    int init_value;
    int step;
    int steps;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i) {
        std::cin >> init_value >> step >> steps;

        std::cout << sum_of_member_progression(init_value, step, steps) << ' ';
    }

    return 0;
}
