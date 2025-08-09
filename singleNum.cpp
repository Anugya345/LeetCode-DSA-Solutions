#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int singleNum = 0;
    for (int num : arr) {
        singleNum ^= num; 
    }

    cout << "Single number is: " << singleNum << endl;
    return 0;
}
