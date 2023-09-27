#include <iostream>

using namespace std;

int main()
{
    string input;
    int num=0;
    int num_equal=0;
    bool exp=false;

    cout<<"Write your expression:";
    cin>>input;

     for(int i=0;i<input.length();i++){

        if(input[i]=='='){
                exp=true;
            }
    }

    if(exp){

    for(int i=0;i<input.length();i++){

        if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='%'||input[i]=='^'||input[i]=='='){
                cout<<input[i]<<endl;
            }
    }
    }
    else{
            cout << "Not an expression"<< endl;
    }

    return 0;
}
