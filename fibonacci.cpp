
// the vibonacci seris

#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int n1=0;
    int n2=1;
    int next;
    for(int i=1;i<=n;i++)
    {
        cout<<n1<<endl;
        next=n1+n2;
        n1=n2;
        n2=next;
    }
}


int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
} 