#include <iostream>
#include <vector>
#include <algorithm>

int vowelCount(const std::string &input)
{
    return std::count_if(input.begin(), input.end(), [] (char s) {
        s = tolower(s);
        return s == 'a' || s == 'o' || s == 'u' || s == 'i' || s == 'e' || s == 'y';
    });
}

int main()
{
    std::cout << vowelCount("abracadabra");
    int cases;
    std::string input;

    std::cin >> cases;
    std::cin.ignore();

    for (int i = 0; i < cases; ++i) {
        std::getline(std::cin, input);
        std::cout << vowelCount(input) << ' ';
    }

    return 0;
}
