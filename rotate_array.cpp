#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr){
    int n= arr.size();
    int lastelement=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];  
      }
        arr[0]=lastelement;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}