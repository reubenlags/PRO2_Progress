#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
    int count;
    stack<int> p;
    while (cin >> s){
        int mida = s.size(); // size of sequence of string of paranthesis
        int cont = 1; //count 
        for (int i = 0; i < mida; ++i) { //recorregut per la sequencia
            if (s[i] == '(') {
                p.push(cont);
                cout << s[i] << p.top();
                ++cont;
            }
            else if (s[i] == ')') {
                cout << s[i] << p.top();
                p.pop();
            }
        }
        cout << endl;
    }
}
