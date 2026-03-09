#include <iostream>

int main() {
    int arr[] = {11, 13, 21, 45, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Initialize max_element with the first element of the array
    int max_element = arr[0];

    // Traverse the array from the second element
    for (int i = 1; i < n; ++i) {
        // Update max_element if the current element is greater
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    std::cout << "Largest element in the array is: " << max_element << std::endl;

    return 0;
}
[

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest element is: " << max;

    return 0;
}
