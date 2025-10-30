// WAP tp print diagonal Matrix
# include <iostream>
using namespace std;
# define MAX 5 // it tells basically the size of the array

int main () {
// input the array
int arr[MAX];
cout<<"Start entering the elements for the array : ";
for(int i=0; i<MAX; i++){
cin>> arr[i];
}

// printing the array 
cout<<"The matrix is : \n";
for(int i=0; i< MAX; i++){
for(int j=0; j<MAX ; j++){
if(i==j){
cout<<arr[i]<<" ";
}
else {
cout <<"0"<<" ";
}}
cout<<"\n";
}
return 0;
}

// basically this is the better way of printing a sparse matrix because it takes less memory
// space
