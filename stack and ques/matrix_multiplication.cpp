// C++ program to multiplication of two matrixes
#include<iostream>
using namespace std;

int main(){
    int matrix1[4][4], matrix2[4][4], matrix3[4][4], sum = 0;
    cout<<"Enter the elements of the first martrix : "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the elements of the second matrix : "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum = 0;
            for(int k=0; k<4; k++){
                sum = sum + matrix1[i][k] * matrix2[k][j];
                matrix3[i][j] = sum;
            }
        }
    }
   cout<<"\n Multiplication Result"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<matrix3[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}