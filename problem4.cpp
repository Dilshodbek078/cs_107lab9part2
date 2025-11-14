#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x, unique=0;
    cin>>n;
    for (int i=0; i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for (int i=0; i<n;i++) {
        bool is_unique = true;
        for (int j=0; j<i;j++) {
            cout << v.at(i) << " == " << v.at(j) << endl;
            if (v.at(i)==v.at(j)) {
                is_unique=false;
                break;
            }
        }
        if (is_unique) {
            unique++;
            cout << endl << "Unique++ = " << unique << endl;
        }
    }

    cout << "Unique: " << unique << endl;


    return 0;
}
