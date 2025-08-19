#include<iostream>
#include<vector>
using namespace std;
int findsecondmax(vector<int>&num){
    int max=0;
    int secondmax=0;
    for(int i=0;i<num.size();i++){
        if(num[i]>max){
            secondmax=max;
            max=num[i];
        }
        else if(num[i]>secondmax && num[i]<max){
            secondmax=num[i];
        }
    }
    return secondmax;
}
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<findsecondmax(num);
    return 0;
}