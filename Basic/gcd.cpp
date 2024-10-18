#include <iostream>

class Solution {
public:
    // Function to calculate GCD (Greatest Common Divisor)
    int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        if (b == 0) {
            return a;
        }
        if (a > b) {
            return gcd(a % b, b);
        } else {
            return gcd(a, b % a);
        }
    }

    // Function to calculate LCM (Least Common Multiple)
    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }
};

int main() {
    Solution solution;
    int a = 15, b = 20;

    std::cout << "GCD of " << a << " and " << b << " is: " << solution.gcd(a, b) << std::endl;
    std::cout << "LCM of " << a << " and " << b << " is: " << solution.lcm(a, b) << std::endl;

    return 0;
}
