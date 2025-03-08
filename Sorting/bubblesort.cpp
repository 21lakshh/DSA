#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of your array:\n";
    cin >> n;
    cout << "Enter the elements of your array:\n";
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Implementing Bubble sort
    bool sorted = false;
    for (int i = 0; i < n - 1; i++)
    {
        sorted = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j],arr[j+1]);
                sorted = true;
            }
        }
        if(sorted == false){
            break;
        }
    }
    // Output Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}