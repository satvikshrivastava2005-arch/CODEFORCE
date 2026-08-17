#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int up = 0, low = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            up++;
        } else {
            low++;
        }}
    if (up > low) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
 
    return 0;
}