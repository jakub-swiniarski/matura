#include <fstream>
#include <numeric>
#include <vector>

int nskrot(int n) {
    int m = 0;
    std::vector<int> odd;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0)
            odd.push_back(digit);
        n /= 10;
    }
    
    int factor = 1;
    for (const auto &i : odd) {
        m += i * factor;
        factor *= 10;
    }

    return m;
}

int main(void) {
    std::ifstream data("dane/skrot2.txt");
    std::ofstream output("wyniki3_3.txt");
    std::string line;

    while (std::getline(data, line)) {
        int num = std::stoi(line);
        int m = nskrot(num);

        if (std::gcd(num, m) == 7)
            output << num << '\n';
    }

    return 0;
}
