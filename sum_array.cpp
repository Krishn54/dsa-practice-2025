#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum =0;
    for(auto i : arr) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}