 #include<bits/stdc++.h>
 using namespace std;
 
// int fact(int n);

int fact(int n)
{
    if(n==0)return 1;
    else  
       return (n*fact(n-1));

//or you can use by this function 
//int prevfact=fact*(n-1);
//return n*prevfact;
       
}
 int main()
 {
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     fact(n);
     cout<<fact(n)<<endl;
 }