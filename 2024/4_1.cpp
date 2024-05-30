#include <bits/stdc++.h>

void load(std::ifstream &file, std::vector<int> &vec) {
    std::string line;
    std::getline(file, line);
    std::istringstream iss(line);

    int num;
    while (iss >> num)
        vec.push_back(num);
}

int main(void) {
    std::ifstream data("dane/liczby.txt");
    std::ofstream output("wyniki4.txt", std::ios::app);
    std::vector<int> primes, ints;
    int count = 0;
    
    output << 1 << ' ';

    load(data, primes);
    load(data, ints);

    for (const auto p : primes) {
        for (const auto i : ints) {
            if (i % p == 0) {
                count++;
                break;
            }
        }
    }

    output << count << '\n';

    return 0;
}
