// Upper triangular matrix
#include <iostream>
using namespace std;
#define MAX 4;
// MAX tells us about the size of the matrix

int main()
{
    int i = 0;
    int n = MAX;
    int size = (n * (n + 1)) / 2;
    // basically sum of n elements
    int arr[size];

    // input the array
    cout << " Enter the elements\n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // printing the array
    cout << " The array is: \n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
    // The array is {2,5,1,0,3,1,4,2,7,0}
    // index of the numbvers are {00, 01, 02, 03, 11, 12, 13, 22, 23, 33}

    // printing the 2-D array
    i=0;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (k >= j)
            {
                cout << arr[i] << " ";
                i++;
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}