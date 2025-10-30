# include <iostream>
using namespace std;
# define MAX 10

int main () {
int mat[MAX][3];
int transposemat[MAX][3];

int row, col, value;
    cout<<"Enter the no. of rows: ";
    cin>>row;
    cout<<"Enter the no. of columns: ";
    cin>>col;
    cout<<"Enter the no. of non-zero values: ";
    cin>>value;

transposemat[0][0] = mat[0][1] = col; // new rows equal to old columns
transposemat[0][1] = mat[0][0] = row; // new columns equal to old rows
transposemat[0][2]= mat[0][2] = value;


// lets print the old matrix first
// take input

for(int i=1; i<= value ; i++){
    cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
}

for(int i=0; i<= value; i++){
    cout<< mat[i][0] <<" "<<mat[i][1] <<" "<< mat[i][2];
    cout<<endl;
}

for(int i=1; i<= value ; i++){
    transposemat[i][0] = mat[i][1];
    transposemat[i][1] = mat[i][0];
    transposemat[i][2] = mat[i][2];
}

cout<<"The new transposed matrix is : "<<endl;
cout << transposemat[0][0] <<" "<<transposemat[0][1] <<" "<< transposemat[0][2]<<" ";
cout<<endl;

for(int i=1; i<= value; i++){
    cout<< transposemat[i][0] <<" "<<transposemat[i][1] <<" "<< transposemat[i][2];
    cout<<endl;
}
}
