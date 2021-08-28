#include <iostream>
#include <string>
#include <cassert>

std::string& reverse(std::string &string)
{
    for (std::string::size_type i = 0; i < string.size() / 2; ++i) {
        std::swap(string.at(i), string.at(string.size() - 1 - i));
    }
    return string;
}

int main()
{
    std::string test_string = "hello";
    assert((reverse(test_string) == "olleh") && "test failed.");
    std::cout << "test passed.\n";
    int count;
    std::string string;

    std::cin >> count;
    std::cin.ignore();
    for (int i = 0; i < count; ++i) {
        std::getline(std::cin, string);
        std::cout << reverse(string) << ' ';
    }

    return 0;
}
