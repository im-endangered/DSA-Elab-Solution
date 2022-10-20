//sajid was booking a tour package of irctc
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stack>
using namespace std;
int check(char a,char b){
    if(a=='('&&b==')') return 1;
    if(a=='{'&&b=='}') return 1;
    if(a=='['&&b==']') return 1;
    else return 0;
}
int main(){
    stack<int> s;
    string xi;
    cin>>xi;
    int x=xi.length();
    for(int i=0;i<x;i++){
        if(xi[i]=='(' || xi[i]=='{' || xi[i]=='[') s.push(xi[i]);
        else{
            if(!check(s.top(),xi[i])) {cout<<"Not Balanced"; return 0;}
            else s.pop();
        }
    }
    if(s.empty()) cout<<"Balanced";
    else cout<<"Not Balanced";
}