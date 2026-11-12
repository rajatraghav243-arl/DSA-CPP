
#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxi = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 15};

    cout << largestElement(arr);

    return 0;
}
