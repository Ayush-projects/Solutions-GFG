//5. question link - https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1

#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




void binSort(int a[], int n)
{
   
   int l = -1;
   for(int i=0; i<n; i++)
   {
       if(a[i]==0)
       {
           l++;
           swap(a[l],a[i]);
       }
   }
   
   
   
   
   
}