#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Max element: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Min element: " << *min_element(arr.begin(), arr.end()) << endl;
    return 0;

}