#include <iostream>
#include <string>
#include <cassert>

std::string caesar_shift_cheaper(const std::string &input, int shift)
{
    std::string result;
    result.assign(input.size(), ' ');

    for (std::string::size_type i = 0; i < input.size(); ++i) {
        if (isalpha(input[i])) {
            int ascii = input[i] - shift;
            result[i] = ascii < 65 ? 90 - (64 - ascii) : ascii;
        } else {
            result[i] = input[i];
        }
    }
    return result;
}

int main()
{
    assert((caesar_shift_cheaper("YHQL YLGL YLFL.", 3) == "VENI VIDI VICI.") && "test 1 failed.");
    assert((caesar_shift_cheaper("HYHQ BRX EUXWXV.", 3) == "EVEN YOU BRUTUS.") && "test 2 failed.");
    std::cout << "tests passed.\n";


    int cases;
    int shift;
    std::string input;

    std::cin >> cases >> shift;
    std::cin.ignore();

    for (int i = 0; i < cases; ++i) {
        std::getline(std::cin, input);
        std::cout << caesar_shift_cheaper(input, shift) << ' ';
    }

    return 0;
}
