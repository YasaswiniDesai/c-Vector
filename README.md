# Vectors

![image](https://github.com/YasaswiniDesai/c-Vector/assets/92711164/ee191c86-6fa8-4ade-bcaa-b59b9ffd0d15)


![image](https://github.com/YasaswiniDesai/c-Vector/assets/92711164/452370db-ae4f-4c79-b033-37f972001ef1)

![image](https://github.com/YasaswiniDesai/c-Vector/assets/92711164/69eaf756-33bb-4c98-b8d7-3f0774551948)

### Basic Vector Coding
```cpp
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
```
