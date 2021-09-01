#include <iostream>
#include <cassert>
#include <string>

char isPalindrome(const std::string& input)
{
    std::string lower_string;

    for (std::string::size_type i = 0; i < input.length(); ++i) {
        if (isalpha(input[i])) {
            lower_string += (tolower(input[i]));
        }
    }

    for (std::string::size_type i = 0; i < lower_string.length() / 2; ++i) {
        if (lower_string[i] != lower_string[lower_string.length() - i - 1]) {
            return 'N';
        }
    }
    return 'Y';
}

int main()
{

    assert((isPalindrome("Stars") == 'N') && "test 1 failed." );
    assert((isPalindrome("O, a kak Uwakov lil vo kawu kakao!") == 'Y') && "test 2 failed." );

    std::cout << "tests passed.\n";

    int cases;
    std::string input;


    std::cin >> cases;
    std::cin.ignore();

    for (int i = 0; i < cases; ++i) {
        std::getline(std::cin, input);
        std::cout << isPalindrome(input) << ' ';
    }

    return 0;
}
