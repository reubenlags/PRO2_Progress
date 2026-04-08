//Palíndromos con pilas

#include <iostream>
#include <stack>
using namespace std;


// 10 20 20 10
// check if 20 = 20 and then remove the first 20 and then check witrh 10 and 10 if its equal
class Palindrome{
    public:
        bool check_palindrome(stack<int> p, int n){
            int x;
            if (n%2 != 0) cin >> x; //check if its odd
            //run the loop for the second half
            for (int i = 0; i < n/2; i++){
                cin >> x;
                if (p.top() != x) return false;
               p.pop(); //remove the top of the stack to continue with the remaining comparisions for the second half of the loop
            }
            return true;
        }

};



int main(){
    int n;
    cin >> n;
    stack<int>num;
    Palindrome test; 
    //load or read the stack
    for (int i = 0; i < n/2 ; i++){
        int x;
        cin >> x;
        num.push(x);
    }
    //verify 
    cout << ((test.check_palindrome(num,n) == true) ? "SI" : "NO" ) << endl;
}