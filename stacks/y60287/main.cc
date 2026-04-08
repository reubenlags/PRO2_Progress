#include <iostream>
#include "vstack.hh"
#include "html_elem.hh"

using namespace std;

void chk_script(string& s, VStack& p){
    bool trobat = false;
    if (p.contains("script") and p.size() >= 3 and p.top(0) == "script"){
        if (p.top(-1) == "head" && p.top(-2) == "html") trobat = true;
    }
    if (!p.contains("script") or trobat) cout << s << " " ;
}

int main(){
    string s;
    VStack p;
       //Read and print values of the stack that are not exceptional cases
    while (cin >> s){
        //check if its a tag and set our stack
       if (is_tag(s)){
        if (is_close_tag(s)) p.pop(); // pop the closing tag name from the stack
        else p.push(tag_name(s)); //push the opening tag name into the stack
        cout << s << " " ;
       }
       else chk_script(s,p);

    }
}
    