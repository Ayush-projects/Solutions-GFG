//6. question link - https://practice.geeksforgeeks.org/problems/union-of-two-arrays/1
#include <iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       unordered_set<int> s;
       int n,m,k;
       cin>>n>>m;
       for(int i=0; i<n; i++)
       {
           cin>>k;
           s.insert(k);
       }
        for(int i=0; i<m; i++)
       {
           cin>>k;
           s.insert(k);
       }
       
       cout<<s.size()<<endl;
    }
}