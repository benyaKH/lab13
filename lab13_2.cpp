#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool matrix[][N]){
    for(int i = 0 ; i<N ; i++){
        for(int j = 0 ; j<N ; j++){
            cout<< matrix[i][j]<<" " ;
            }
        cout<<"\n";
        }
}

void inputMatrix(double data[][N]){
    for(int i=0;i<N;i++){
        cout<<"Row "<<i+1<<": ";
        for(int j=0;j<N;j++) cin>> data[i][j];
    }
}

void findLocalMax(const double old[][N], bool matrix[][N]){
    for(int i=0;i==0;i++){
        for(int j=0;j<N;j++) matrix[i][j] = 0;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j==0;j++) matrix[i][j] = 0;
    }
    for(int i=0;i<N;i++){
        matrix[i][N-1] = 0;
    }
    for(int j=0;j<N;j++){
        matrix[N-1][j] = 0;
    }
    for(int i=1;i<N-1;i++){
        for(int j=1;j<N-1;j++){
        if(old[i][j]>=old[i-1][j]&&old[i][j]>=old[i+1][j]&&old[i][j]>=old[i][j-1]&&old[i][j]>=old[i][j+1]){ 
        matrix[i][j] = true;
        }
        else matrix[i][j] = false;
        }
    }
}