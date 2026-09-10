#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool isFirstWord = true;
    for (int i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 3; 
        } else {
            if (!isFirstWord) {
                cout << " ";
            }
            while (i < s.length() && !(i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')) {
                cout << s[i];
                i++;
            }
            isFirstWord = false;
        }
    }
    cout << "
";
    return 0;
}