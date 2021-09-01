#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>

int main()
{
    std::string buffer;
    std::map<std::string, int> frequency;


    for (int i = 0; i < 3; ++i) {
        std::cin >> buffer;
        ++frequency[buffer];
    }

    for (auto &pair : frequency) {
        if (pair.second > 1) {
            std::cout << pair.first << ' ';
        }
    }


    return 0;
}
