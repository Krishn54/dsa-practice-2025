#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int f =1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f;
    return 0;

}