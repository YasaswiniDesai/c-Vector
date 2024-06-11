#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,num;
    cin >> n;
    vector<int> evenNums, oddNums;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            evenNums.push_back(num);
        } else {
            oddNums.push_back(num);
        }
    }

    cout << "Even numbers: ";
    for (int num : evenNums) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int num : oddNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
