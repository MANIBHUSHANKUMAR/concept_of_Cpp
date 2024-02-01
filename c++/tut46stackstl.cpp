/*#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<< st.top()<<"\n";
    st.push(4);
    st.push(6);
    cout<< st.top()<<"\n";
    st.pop();
    st.pop();
    cout<< st.top()<<"\n";
    return 0;

}*/

#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st;
st.push(1);
st.push(3);
st.push(5);
st.push(4);
cout<< st.top()<<"\n";
st.push(10);
st.push(59);
st.push(31);
cout<< st.top()<<"\n";

st.pop();
st.pop();
cout<< st.top()<<"\n";


    return 0;
}

