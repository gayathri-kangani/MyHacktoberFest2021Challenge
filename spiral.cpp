#include <iostream>
using namespace std;

int main()
{

    // char x=130;
    // cout<<(int)x;
    //Write your code here
    int input[20][20];
	int nRows, nCols;
        cin >> nRows >> nCols;
        for(int i=0;i<nRows;i++) {
            for(int j=0;j<nCols;j++) {
                cin>>input[i][j];
            }
        }
        // int **input = new int *[nRows];

        // for (int i = 0; i < nRows; i++)
        // {
        //     input[i] = new int[nCols];
        //     for (int j = 0; j < nCols; j++)
        //     {
        //         cin >> input[i][j];
        //     }
        // }
	
    int fRow=0,fCol=0,lRow=nRows-1,lCol=nCols-1;
    int count=0;
    int tNum=nRows*nCols;
    for(;count<tNum;fRow++,fCol++,lRow--,lCol--) {
        for(int j=fRow;j<=lCol;j++) {
            cout<<input[fRow][j]<<' ';
            count++;
        }
        for(int i=fRow+1;i<=lRow;i++) {
            cout<<input[i][lCol]<<' ';
            count++;
        }
        for(int j=lCol-1;j>=fRow;j--) {
            cout<<input[lRow][j]<<' ';
            count++;
        }
        for(int i=lRow-1;i>=fRow+1;i--) {
            cout<<input[i][fCol]<<' ';
            count++;
        }
        //cout<<'-'<<count<<endl;
	}

    //cout<<endl<<count;
	
	// for (int i = 0; i < nRows; ++i)
 //        {
 //            delete[] input[i];
 //        }
 //        delete[] input;

 //        cout << endl;
}
