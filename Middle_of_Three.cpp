//question link - https://practice.geeksforgeeks.org/problems/middle-of-three2926/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int middle(int a, int b, int c){
        if((a-b)*(a-c)<0)
        return a;
        else if ((b-a)*(b-c)<0)
        return b;
        return c;
        
        
        
        
        
        
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 