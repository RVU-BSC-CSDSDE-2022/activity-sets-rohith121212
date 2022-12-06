#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main (){
  int n; 
  n= input_n();
  int sum; 
  sum = sum_n_nos(n);
  output(n , sum);
}

int input_n(){
  int n;
  printf("Enter n"); 
  scanf("%d",&n);
  return n;
  }
int sum_n_nos(int n){
  int sum;
  sum= n*(n+1)/2;
  return sum;
}
void output(int n, int sum){
  printf ("sum of %d natural numbers is %d",n,sum);
}