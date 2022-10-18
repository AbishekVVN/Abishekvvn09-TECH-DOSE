#include <bits/stdc++.h> 
using namespace std; 
  
struct newStack{ 
    stack<int> s; 
    int min; 
  
    void getMin(){ 
        if(s.empty()){ 
            cout<<"Stack is empty\n"; 
        }
        else{
            cout<<"Minimum element : "<<min<<"\n"; 
        }    
    } 
  
    void pop(){ 
        if(s.empty()){ 
            cout<<"Stack is empty\n"; 
            return; 
        } 
  
        cout<<"Popped element : "; 
        int t = s.top(); 
        s.pop(); 
  
        if(t<min){ 
            cout<<min<< "\n"; 
            min = 2*min - t; 
        } 
  
        else{
            cout<<t<< "\n";
        }    
    } 
  
    void push(int x){ 
        if(s.empty()){ 
            min = x; 
            s.push(x); 
            return; 
        } 
  
        if(x < min){ 
            s.push(2*x - min); 
            min = x; 
        } 
  
        else{
           s.push(x);
        }   
    } 
}; 
 
int main(){
    newStack s; 
    
    s.push(30);
    s.push(20);
    s.push(10);
    s.getMin();
    s.pop();
    s.getMin();
  
    return 0; 
}
