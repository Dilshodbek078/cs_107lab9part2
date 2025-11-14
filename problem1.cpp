#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n,x, i=0;
    cout<<"n= ";
    cin>>n;
    while (1) {
        i++;
        if (i>n) {
            break;
        }

        cin>>x;
        v.push_back(x);



    }
    for (int i=n-1; i>=0; i--) {
        cout<<v[i]<<" ";

    }
    return 0;
}
