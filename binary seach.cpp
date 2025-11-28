#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int f=-1;
    int lb=0;
    int ub=n-1;
    int mid=(lb+ub)/2;
    while(arr[mid]!=key && lb<=ub)
    {
        if(key>arr[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
        mid=(lb+ub)/2;
    }
    if(arr[mid]==key)
    {
        f=mid;
    }
    cout<<f<<endl;
    return 0;
}
