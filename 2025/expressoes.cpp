#include <iostream>
#include <stack>


using namespace std;

int T;


int main(){
    cin >> T;
    string vec[T];
    for (int i = 0; i < T; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < T; i++)
    {
        stack<char> A;
        bool correct = true;
        for (size_t j = 0; j < vec[i].size(); j++)
        {
            if(A.empty() || vec[i][j] == '(' || vec[i][j] == '[' || vec[i][j] == '{'){
                A.push(vec[i][j]);
                continue;
            }
            if(vec[i][j] == ')'){
                if (A.top()=='(')
                {
                    A.pop();
                    continue;
                }
                break;
            }
            if(vec[i][j] == ']'){
                if (A.top()=='[')
                {
                    A.pop();
                    continue;
                }
                break;
            }
            if(vec[i][j] == '}'){
                if (A.top()=='{')
                {
                    A.pop();
                    continue;
                }
                break;
            }
            
        }
        if(A.empty()){
            cout << "S" << endl;
            continue;
        }

        cout << "N" << endl;
        

        
    }
    


    return 0;
}