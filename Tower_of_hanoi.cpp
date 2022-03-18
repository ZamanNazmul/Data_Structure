#include<bits/stdc++.h>
using namespace std;

void towewOfHanoi(int n,char src,char dest,char helper) 
{
    if(n==0) return ;
    towewOfHanoi(n-1,src,helper,dest);
    cout<<"Move from : "<<src<<" to "<<dest<<endl;
    towewOfHanoi(n-1,helper,dest,src);

}
int main()
{
     towewOfHanoi(3,'A','B','C');

    return 0;
}
