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
        for (int i = 0; i < line.size() - 1; i++) {
            int digit = line[i] - '0';
            if (digit % 2 != 0) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            num++;
            greatest = std::max(greatest, std::stoi(line));
        }
    }
    std::ofstream output("wyniki3_2.txt");
    output << num << '\n' << greatest;

    return 0;
}
