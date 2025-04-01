#include<iostream>

using namespace std;

const int N = 10001;

int n, k, i, a[N];

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(i=0; i <n-1;i++)
        for(int j = i + 1; j <n ; j++)
    {
        if(a[i] + a[j] == k)
            cout<<a[i]<<" "<<a[j]<<'\n';
    }
}
