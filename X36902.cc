/* Avaluacio d'una expressio amb parentesis*/

#include <iostream>
#include <stack>
using namespace std;




int main(){
    char c;
    cin >> c;
    stack<char> p;
    int count = 0;
    bool position = true;
    while (c != '.' && position){
        if ( c == '(' || c == '[') p.push(c);
        else if (((c == ')' and p.top() == '(') or (c == ']' and p.top() == '[')) and !p.empty()) p.pop();
        else position = false;
        count++;
        cin >> c;
    }
    if (p.empty() and position == true) cout << "Correcte" << endl;
    else cout << "Incorrecte " << count << endl;

}
	