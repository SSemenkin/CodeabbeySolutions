#include <iostream>
#include <cassert>

int sum_of_progressions_members(int init_value,
                                int step,
                                int steps)
{
    int result = 0;
    for (int i = 0; i < steps; ++i) {
        result += init_value + i *step;
    }
    std::cout << result;
    return result;
}

int main()
{
    assert((sum_of_progressions_members(5, 2, 3) == 21) && "test not passed");
    int tests;
    int init_value;
    int step;
    int steps;

    std::cin >> tests;

    for (int i = 0; i < tests; ++i) {
        std::cin >> init_value >> step >> steps;

        std::cout << sum_of_progressions_members(init_value, step, steps) << ' ';
    }

    return 0;
}
