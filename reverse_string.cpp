#include<iostream>
#include<string>
using namespace std;

string reverse_string(string & s){
     int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    string s;
    cin>>s;
   reverse_string(s);
    cout<<s;
    return 0;
}