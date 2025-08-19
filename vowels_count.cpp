#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int vowelsCount = 0;
    for(char c : str){
        c = tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            vowelsCount++;
        }
    }
    cout<<"Number of vowels: "<<vowelsCount<<endl;
    return 0;
}
