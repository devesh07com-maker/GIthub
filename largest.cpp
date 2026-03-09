#include <iostream>
using namespace std;
int main() {
    int arr[] = {5,10,15,20 ,25}    
    
    int max_element = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
cout << "Largest element in the array is: " << max_element << endl;

    return 0;
}
