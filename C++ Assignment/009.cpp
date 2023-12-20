#include <iostream>
#include <vector>

using namespace std;

template <class T>
void matMul(T &matA, T &matB)
{
    for (int rowOfMatA = 0; rowOfMatA < matA.size(); rowOfMatA++)
    {
        for (int colOfMatB = 0; colOfMatB < matB[0].size(); colOfMatB++)
        {
            int sum = 0;
            for (int colOfMatA = 0; colOfMatA < matA[0].size(); colOfMatA++)
            {
                sum = sum + (matA[rowOfMatA][colOfMatA] * matB[colOfMatA][colOfMatB]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matARow, matACol, matBRow, matBCol;
    cout << "Enter total number of rows for matrix A: ";
    cin >> matARow;

    cout << "Enter total number of columns for matrix A: ";
    cin >> matACol;

    cout << "Enter total number of rows for matrix B: ";
    cin >> matBRow;

    cout << "Enter total number of columns for matrix B: ";
    cin >> matBCol;

    if (matACol != matBRow)
    {
        cout << "Dimension mismatch";
        return 1;
    }

    vector<vector<int>> matA;
    matA.resize(matARow);
    vector<vector<int>> matB;
    matB.resize(matBRow);

    cout << "Enter elements for matrix A: " << endl;
    for (int i = 0; i < matARow; i++)
    {
        for (int j = 0; j < matACol; j++)
        {
            int input;
            cout << i << j << " = ";
            cin >> input;
            matA[i].push_back(input);
        }
    }

    cout << "Enter elements for matrix B: " << endl;
    for (int i = 0; i < matBRow; i++)
    {
        for (int j = 0; j < matBCol; j++)
        {
            int input;
            cout << i << j << " = ";
            cin >> input;
            matB[i].push_back(input);
        }
    }

    cout << "first matrix elements:" << endl;
    for (int i = 0; i < matA.size(); i++)
    {
        for (int j = 0; j < matA[0].size(); j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "second matrix elements:" << endl;
    for (int i = 0; i < matB.size(); i++)
    {
        for (int j = 0; j < matB[0].size(); j++)
        {
            cout << matB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "multiplication of the matrix:" << endl;
    matMul<vector<vector<int>>>(matA, matB);

    return 0;
}