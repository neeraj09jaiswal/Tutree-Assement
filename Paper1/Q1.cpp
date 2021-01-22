#include <bits/stdc++.h> 
using namespace std;
void twoSmallest(int arr[], int n)  
{  
    int i, f,s; 
    if (n < 2)  
    {  
        cout<<" Invalid Input ";  
        return;  
    }
    f=s= INT_MAX;  
    for (i=0;i<n;i++)  
    {
        if (arr[i] < f)  
        {  
            s = f;  
            f = arr[i];  
        }
        else if (arr[i]<s && arr[i]!=f)  
            s = arr[i];  
    }  
    if (s == INT_MAX)  
        cout<<"All number Equal: "<<f<<" There is no second smallest";  
    else
        cout<<"First Smallest: "<<f<<" Second Smallest: "<<s<<endl;  
}  
int main()  
{  
    //int arr[] = {12, 12, 12};
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);  
    twoSmallest(arr, n);  
    return 0;  
}
