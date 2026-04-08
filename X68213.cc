#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

void write_stack(stack<string> p, int cat){
    cout << "Pila de la categoria " << cat << endl;
    while (!p.empty()){
        cout << p.top() << endl;
        p.pop();
    } 

    /*for (int i = 0; !p.empty(); i++){
        cout << p.top() << endl;
        p.pop();
    }
        */ 
    cout << endl;
}

int main(){
    int n;
    cin >> n ;
    char x;
    cin >> x;
    vector<stack<string>> library(n);
    int op;
    while (cin >> op && op != 4){
        if (op == 1){
            string title;
            int cat;
            cin >> title >> cat ;
            library[cat-1].push(title);
        }
        else if (op == 2){
            int num,cat;
            cin >> cat >> num; // ERRROROORR : you took inverted inputs here!
            for (int i = 0; i < num; i++){
                library[cat-1].pop();
            }
        }
        else if (op == 3){
            int cat;
            cin >> cat;
            write_stack(library[cat-1],cat);
        }
    }
}