#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

int main(void) {
    int num = 0;
    int greatest = 0;
    
    std::ifstream data("dane/skrot.txt");
    std::string line;
    while (std::getline(data, line)) {
        bool exists = 0;
        int n1 = std::stoi(line);
        int n2 = n1;

        while (n2 > 0) {
            int digit = n2 % 10;
            if (digit % 2 != 0) {
                exists = 1;
                break;
            }
            n2 /= 10;
        }

        if (!exists) {
            num++;
            greatest = std::max(greatest, n1);
        }
    }
    std::ofstream output("wyniki3_2.txt");
    output << num << '\n' << greatest;

    return 0;
}
