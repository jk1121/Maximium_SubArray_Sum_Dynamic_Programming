/*

	Maximum Subarray Sym problem.
	This problem is solved using Dynamic Programming 
	This method reduces the complexity from O(nlogn) using DIVIDE AND CONQUER to O(n).d
	Created By : Jatin Khattar
*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

int findMaximumSubarraySum(int *A,int n)
{
	int curr_max = A[0];
	int max_so_far =A[0];
	
	for(int i =1;i<n;i++)
	{
		curr_max = max(A[i],curr_max+A[i]);
		max_so_far = max(max_so_far, curr_max);
	}
	return max_so_far;
}
int main(void)
{
	
	int A[]={-2, -5, 6, -2, -3, 1, 5, -6};
	int n = sizeof(A)/sizeof(A[0]);
	cout<<findMaximumSubarraySum(A,n);
}

