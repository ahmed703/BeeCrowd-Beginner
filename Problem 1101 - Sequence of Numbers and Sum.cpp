#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int flag = 1;
    while(flag) {
        int m, n, min, max;
        cin >> m >> n;
        if (m == 0 || n == 0)
            flag = 0;
        if (m <= n) {
            min = m;
            max = n;
        }
        else {
            min = n;
            max = m;
        }
        int counter = min, sum = 0;
        while(flag) {
            cout << counter << " ";
            sum+=counter;
            counter++;
            if (counter > max) {
                cout << "Sum=" << sum << endl;
                break;
            }
        }
    }
    
    return 0;
}
