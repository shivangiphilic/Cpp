// You are using GCC
#include "bits/stdc++.h"
#define rows 50
#define cols 50
using namespace std;
int N;
int aresame;
class Matrix {
	int arr[rows][cols];

public:
	void input(vector<vector<int> >& A);
	void display();
	void operator+(Matrix x);
	void operator*(Matrix x);
	int operator=(Matrix x);
};
void Matrix::input(vector<vector<int> >& A)
{
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			arr[i][j] = A[i][j];
		}
	}
}
void Matrix::display()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
void Matrix::operator+(Matrix x)
{
	int mat[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			mat[i][j] = arr[i][j]
						+ x.arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}
}
void Matrix::operator*(Matrix x)
{
	int mat[N][N];
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {
			mat[i][j] = 0;

			for (int k = 0; k < N; k++) {
				mat[i][j] += arr[i][k]
							* (x.arr[k][j]);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}
}
int Matrix::operator=(Matrix x)
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (arr[i][j]!= x.arr[i][j])
    return 1;
}
int main()
{
	N = 3;
	vector<vector<int> > arr1
		= { { 1, 2, 3 },
			{ 4, 5, 6 },
			{ 1, 2, 3 } };
	vector<vector<int> > arr2
		= { { 1, 2, 3 },
			{ 4, 5, 6 },
			{ 1, 2, 3 } };
	Matrix mat1, mat2;
	mat1.input(arr1);
	mat2.input(arr2);
	cout << "Addition of two given"
		<< " Matrices is : \n";
	mat1 + mat2;
	cout << "Multiplication of two"
		<< " given Matrices is : \n";
	mat1* mat2;

        cout << "The matrices are equal";
            if (mat1=mat2)

	return 0;
}
