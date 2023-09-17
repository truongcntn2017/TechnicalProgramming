#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a[] = { 10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);

    int k;
    // cin >> n;
    cin >> k;

    vector<bool> v(n);
    fill(v.end() - k, v.end(), true);

    do {
        for (int i = 0; i < n; ++i) {
            if (v[i]) {
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}