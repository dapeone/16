#include <iostream>
using namespace std;

int main(){
  
  int rows,cols,i,j;
  
  cout <<"Введите количество строк ";
  cin >> rows;
  cout <<"Введите количество столбцов ";
  cin >> cols;
  cout <<"Введите элементы матрицы"<< endl;
  
  double matrix[rows][cols], sum;

  for (i = 0; i < rows; ++i){
    for (j = 0; j < cols; ++j){
      cout <<"Введите элемент матрицы ["<< i << "] [" << j << "] ";
      cin >> matrix[i][j];
    }
  }
  
  cout <<"Исходная матрица"<< endl;
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j){
      cout << matrix[i][j] << " ";
    }
  cout << endl;
  }
  
  cout <<"Среднее арифметическое по столбцам"<< endl;
  for (j = 0; j < cols; ++j){
    sum = 0;
    for (i = 0; i < rows; ++i){
      sum += matrix[i][j];
    }
    cout << sum / i << " ";
  }
}