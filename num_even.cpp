#include<iostream>
using namespace std;
int main(){
    int evenCount = 0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            evenCount++;
        }
    }
    cout<<"even numbers: "<<evenCount;
    return 0;
}