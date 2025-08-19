#include<iostream>
using namespace std;

int main(){
    int a=1;
    int f=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<f<<" ";
        int c=a+f;
        a=f;
        f=c;
    }
    return 0;
}