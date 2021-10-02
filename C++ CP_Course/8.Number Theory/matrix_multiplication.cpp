#include <bits/stdc++.h>
#define ll long long 
#define MAX 1000009
using namespace std;
// Col(MatA)= Row(MatB) ; to multiply 
int main()
{

    int mat1[10][10],mat2[10][10],res[10][10];
    
    int row1,col1,row2,col2;
    cout<<"ENTER SIZE OF MATRIX 1 (ROW,COL) : "; cin>>row1>>col1;
    cout<<endl;
    cout<<"ENTER SIZE OF MATRIX 2 (ROW,COL) : "; cin>>row2>>col2;
    cout<<endl<<endl;
    if(col1!=row2)cout<<"NOT POSSIBLE"<<endl;
    else
    {
        //Matrix 1
        
        for(int i = 0 ; i<row1 ; i++){
            for(int j =0 ; j<col1 ; j++){
                cin>>mat1[i][j];
            }
        }
                
        //Matrix 2
        for(int i = 0 ; i<row2 ; i++){
            for(int j =0 ; j<col2 ; j++){
                cin>>mat2[i][j];
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
        
        //print matrix 2
        cout<<"MATRIX 2 : "<<endl;
        for(int i = 0 ; i<row2 ; i++){
            for(int j =0 ; j<col2 ; j++){
                printf("MAT2[%d][%d] : %d ",i,j,mat2[i][j]);
            }
            cout<<endl;
        }
        int sum = 0;
        
        //multiply
        for(int i = 0; i<row1;i++){
            for(int j = 0 ; j<col2;j++){
                for(int k = 0; k<col1;k++){
                    sum+= mat1[i][k]*mat2[k][j];
                }
                    res[i][j] = sum;
                    sum = 0;
            }
        }
        
        //print result 
        cout<<"RESULT: "<<endl;
        for(int i = 0 ; i<row1 ; i++){
            for(int j =0 ; j<col2 ; j++){
                cout<<res[i][j]<<" ";
                //printf("RESULT[%d][%d] : %d ",i,j,res[i][j]);
            }
            cout<<endl;
        }     
        
    }
    


   return 0;
}