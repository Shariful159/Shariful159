#include<bits/stdc++.h>
using namespace std;
int counDigit(long long n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int cnt=0;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }return pow(10,(cnt-1));

    }


}
int main()
{
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       cout<<(n-counDigit(n));

    cout<<endl;
    }
}
