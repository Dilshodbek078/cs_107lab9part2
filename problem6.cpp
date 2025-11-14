#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) cout << "Sorted";
    else cout << "Not Sorted";

    return 0;
}
