// intro to stacks using STL
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;

//     s.push(2);
//     s.push(3);
//     s.push(30);
//     s.pop();
//     cout<<"printitng top element: "<<s.top()<<endl;

//     if(s.empty()){
//         cout<<"Stack is empty: "<<endl;
//     }

//     else{
//         cout<<"stack is not empty: "<<endl;
//     }
//     cout<<"size of stack is: "<<s.size();

// }


// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     //porperties
//     public:
//         int top;
//         int *arr;
//         int size;

//     //push operation
//     Stack(int size){
//         this -> size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element){
//         if(size - top > 1){
//             top++;
//             arr[top] = element;
//         }
//     }

//     void pop(){
//         if(top >=0){
//             top--;
//         }
//         else{
//             cout<<"stack underflow"<<endl;
//         }
//     }

//     int peek(){
//         if(top>=0 && top<size){
//             return arr[top];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }


//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     //Behaviour
// };

// int main(){
//     Stack st(5);
//     st.push(22);
//     st.push(12);
//     st.push(25);
//     st.push(34);
//     st.pop();
//     cout<<st.peek()<<endl;
//     if(st.isEmpty()){
//         cout<<"stack is empty: "<<endl;
//     }
//     else{
//         cout<<" stack is not empty"<<endl;
//     }

//     return 0;

// }

// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     public:
//         int *arr;
//         int size;
//         int top;

//         Stack(int size){
//             this -> size = size;
//             arr = new int[size] ;
//             top = -1;
//         }

//         void push(int element){
//             if(size-top>1){
//                 top ++;
//                 arr[top] = element;

//             }
//             else{
//                 cout<<"stack underflow: ";
//             }


//         }

//         void pop(){
//             if(arr[top] >=0){
//                 top--;
//             }
//             else{
//                 cout<<"stack underflow: ";

//             }

//         }

//         int peek(){
//             if(top>=0){
//                 return arr[top];
//             }
//             else{
//                 cout<<"stack underflow: ";
//             }
//         }


//         bool isEmpyt(){
//             if(arr[top] == -1){
//                 return true;
//             }
//             else{
//                 return false;
//             }

//         }
// };

// int main(){
//     Stack st(8);
//     st.push(3);
//     st.push(5);    
//     st.push(5);    
//     st.push(50);    
//     cout<<st.peek()<<endl;
//     return 0;
// }


////2 stacks in an array

// #include<iostream>
// #include<stack>
// using namespace std;

// class TwoStak{
//     public:
//         int *arr;
//         int size;
//         int top1;
//         int top2;

//     TwoStak(int s){
//         this -> size = size;
//         top1 = -1;
//         top2 = s;
//         arr = new int(s);


//     }

//     void push1(int num){
//         if(top2-top1>1){
//             top1++;
//             arr[top1] = num;

//         }
//         else{
//             cout<<"Stack underflow"<<endl;
//         }
//     }

//         void push2(int num){
//         if(top2-top1>1){
//             top2--;
//             arr[top2] = num;

//         }
//         else{
//             cout<<"Stack underflow"<<endl;
//         }
//     }

//     int pop1(){
//         if(top1 >= 0){
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }
//     int pop2(){
//         if(top2 >= 0){
//             int ans = arr[top1];
//             top2++;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }

//     int peek1(){
//         if(top1 >=0){
//             return arr[top1];
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     TwoStak tt(10);
//     tt.push1(5);
//     tt.push2(8);

// }


////reverse a string using stack

#include<iostream>
#include<stack>
using namespace std;


int main(){
    string str = "garg";

    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout<< "answer is "<<ans<<endl;
    return 0;
}