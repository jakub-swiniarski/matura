#include <bits/stdc++.h>

int main(void) {
    std::ifstream data("dane/liczby_przyklad.txt");
    std::ofstream output("wyniki4.txt", std::ios::app);
    std::vector<int> primes, ints;
    int count = 0;
    
    output << 1 << ' ';

    int num;
    std::string line;
    std::istringstream iss;

    std::getline(data, line);
    iss.str(line);
    while (iss >> num)
        primes.push_back(num);

    std::getline(data, line);
    iss.clear();
    iss.str(line);
    while (iss >> num)
        ints.push_back(num);

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
