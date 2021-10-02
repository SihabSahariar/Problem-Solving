#include <bits/stdc++.h>
#define ll long long 
#define MAX 1000009
using namespace std;
int main()
{

    int mat1[10][10];
    
    int row1,col1,row2,col2;
    cout<<"ENTER SIZE OF MATRIX 1 (ROW,COL) : "; cin>>row1>>col1;
    cout<<endl;

    //Matrix 1
    for(int i = 0 ; i<row1 ; i++){
        for(int j =0 ; j<col1 ; j++){
            cin>>mat1[i][j];
        }
    }

    //print matrix 1
    cout<<"MATRIX 1 : "<<endl;
    for(int i = 0 ; i<row1 ; i++){
        for(int j =0 ; j<col1 ; j++){
            printf("MAT1[%d][%d] : %d ",i,j,mat1[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
    
    //transpose matrix
    int res[col1][row1];
    for(int i = 0 ; i < col1 ; i++){
        for(int j = 0 ; j < row1 ; j++){
            res[i][j] = mat1[j][i];
        }
    }
    //result
    cout<<"RESULT "<<endl;
    for(int i= 0; i<col1;i++){
        for(int j = 0; j<row1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
        
   
        
    
    


   return 0;
}