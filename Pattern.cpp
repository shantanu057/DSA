#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {                                           //123
    //     for(int j=1;j<=n;j++)                   //123
    //     {                                       //123    
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }
    // cout<<endl;
    
    int z;
    cin>>z;
    int count=1;
    for(int i=1;i<=z;i++)
    {
        for(int j=1;j<=z;j++)         //123
                                      //456
                                      //789
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}