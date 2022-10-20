//prefix to infix
#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char a){
    if(a=='+'||a=='-'||a=='/'||a=='*') return true;
    else return false;
}
string preToInfix(string pre_exp){
    stack<string>s;
    int n=pre_exp.length(),i;
    string s1,s2;
    for(i=n-1;i>=0;i--){
        if(isOperator(pre_exp[i])){
            s1=s.top();
            s.pop();
            s2=s.top();
            s.pop();
            s.push('('+s1+pre_exp[i]+s2+')');
        }
        else{
            s.push(string(1,pre_exp[i]));
        }
    }
    return s.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<"Infix:"<<preToInfix(s);
	return 0;
}