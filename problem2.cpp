#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"enter n= ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            v[i] = v[i] / 2;
        } else {
            v[i] = v[i] * 2;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
