#include <iostream>
using namespace std;

class Solution {
public:
    long long coloredCells(long long n) { // Using long long to prevent overflow
        return 2LL * (n - 1) * n + 1;//LL is long long
    }
};

int main() {
    long long n;
    cout << "Enter minutes (n): ";
    cin >> n;

    Solution sol;
    cout << "Total colored cells after " << n << " minutes: " << sol.coloredCells(n) << endl;

    return 0;
}
