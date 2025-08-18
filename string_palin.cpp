#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s)) {
        cout << "palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
