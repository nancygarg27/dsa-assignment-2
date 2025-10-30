// tridiagonal matrix
# include <iostream>
using namespace std;
# define MAX 4

int main () {
    // firstly input an array

    // tridiagonal matrix
    // no of elements or you can say size of the array will be 3*MAX -2

    int n = (3*MAX) -2;
    int arr[n];
    for(int i=0; i<n; i++){
    cin >>arr[i];
    }
    cout<<endl;

    //printing the array
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // lets say the array is 2,1,3,1,3,5,2,7,9,0

    //printing the matrix

    cout<<"The matrix is: "<<endl;
    int k=0;

    for(int i=0; i<MAX ; i++){
        for (int j=0; j<MAX; j++){
            
            if ( (i==j) || (j==i+1) || (j== i-1) ){
                cout<<arr[k]<<" ";
                k++;
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}