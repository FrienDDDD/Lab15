#include<iostream>
using namespace std;

const int N = 5 ;

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

void inputMatrix(double A[][N]){


	for(int j = 0;j < N;j++){
		cout << "Row " << j+1 << ": "  ;
		for(int i = 0;i < N;i++){
			cin >> A[j][i] ;
		}
	}

}

void showMatrix(const bool A[][N]){

	for(int j = 0;j < N;j++){
		for(int i = 0;i < N;i++){
			cout << A[j][i] << " " ;

		}
	cout << "\n" ;
	}

}

void findLocalMax(const double A[][N], bool B[][N]){

	
	for(int j = 0;j < N ;j++){
		for(int i = 0;i < N; i++){
			if((j != 0 && j != N-1 ) && (i != 0 && i != N-1 )){
				if((A[j][i] >= A[j-1][i]) && (A[j][i] >= A[j+1][i]) && (A[j][i] >= A[j][i-1]) && (A[j][i] >= A[j][i+1])){
					B[j][i] = true ;
				}else{
					B[j][i] = false ;
				}
			}else{
				B[j][i] = false ;
			}

		}

	}
		
}


