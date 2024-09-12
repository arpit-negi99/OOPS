/*
You are given an array of elements. Now you need to choose the best index of this array
An index of the array is called best if the special sum of this index is maximum
across the special sum of all the other indices.
To calculate the special sum for any index you pick the first element that is and
add it to your sum. Now you pick next two elements i.e., and and add both of them to your sum.
Now you will pick the next elements, and this continues till the index for which it is
possible to pick the elements. Find the best index and in the output print its
corresponding special sum. Note that there may be more than one best index,
but you need to only print the maximum special sum.

Input
First line contains an integer as input. Next line contains space separated integers
denoting the elements of the array

Output
In the output you have to print an integer that denotes the maximum special sum

Typical input:                      Typical output:
5                                   8
1 3 1 2 5

10                                  9
2 1 3 9 2 4 -10 -9 1 3 
*/
#include <iostream>
using namespace std;
int main()
{
 int n , c = 1;
 cout << "Enter the size of the array - ";
 cin >> n;
 int a[n];
 int currentSum = 0;
 int maxSum = 0;
 int maxSumIndex = 0;
 cout << "Enter the array elements - "<<endl;
 for (int i = 0; i < n; i++)
 {
 cin >> a[i];
 }
 for (int i = 0; i < n; i++)
 {
 for (int j = i; n - j >= c; j += c - 1)
 {
 for (int k = j; k < j + c; k++)
 {
 currentSum += a[k];
 }
 c++;
 }
 c = 1;
 if (currentSum > maxSum)
 {
 maxSum = currentSum;
 maxSumIndex = i;
 }
 currentSum = 0;
 }
 cout <<"The Maximum Sum is -"<< "\n" <<maxSum <<endl;
}
