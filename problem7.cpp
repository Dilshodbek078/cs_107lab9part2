#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maxVal = v[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
            index = i;
        }
    }

    cout << "Index=" << index;

    return 0;
}
