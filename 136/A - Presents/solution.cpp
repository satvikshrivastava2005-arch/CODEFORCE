#include <iostream>
using namespace std;
 
struct gifts {
    int pt;
    int gift;
 
    gifts(int ptval = 0, int giftval = 0) {
        pt = ptval;
        gift = giftval;
    }
};
 
int main() {
    int n, x;
    cin >> n;
 
    gifts g[101];
 
    for (int i = 1; i <= n; i++) {
        cin >> x;
        g[i] = gifts(i, x);
    }
 
    for (int person = 1; person <= n; person++) {
        for (int i = 1; i <= n; i++) {
            if (g[i].gift == person) {
                cout << g[i].pt << " ";
                break;
            }
        }
    }
 
    return 0;
}