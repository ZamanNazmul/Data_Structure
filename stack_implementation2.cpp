// Nazmul_Zaman Bsc in IT

#include<bits/stdc++.h>
#define n 100

class stack{
    int* arr;
    int top;

    public:

    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){

        if(top == n-1){
            std::cout<<"Stack over flow"<<std::endl;
            return ;
        }
            top++;
            arr[top]=x;
    }

    void pop(){
        if(top==-1){
            std::cout<<"No element to pop"<<std::endl;
        }

            top--;
    }

    int  Top(){
        if(top==-1){
            std::cout<<"No element in stack"<<std::endl;
            return -1;
        }
        return arr[top];

    }
    bool empty(){
        return top==-1;
    }

};

int main()
{

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    std::cout<<st.Top()<<std::endl;

    st.pop();
    std::cout<<st.Top()<<std::endl;

    st.pop();
    st.pop();
    st.pop();

    std::cout<<st.empty()<<std::endl;
    return 0;

}