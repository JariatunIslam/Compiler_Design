#include <iostream>

using namespace std;

int main()
{
    string input;
    bool numeric=false;
    int num=0;
    int dot =0;
    cout<<"Input:";
    cin>>input;
    for(int i=0;i<input.length();i++){
           if(input[i]=='0'||input[i]=='1'||input[i]=='2'||input[i]=='3'||input[i]=='4'||input[i]=='5'||input[i]=='6'||input[i]=='7'||input[i]=='8'||input[i]=='9'){
                num++;
            }
            if(input[i]=='.'&& dot==0){
                num++;
                dot++;
            }
            if(num==input.length()){

               numeric=true;
            }

    }
    if(numeric){
    cout << "The given input is numeric"<< endl;
    }
    else{
    cout << "The given input is not numeric"<< endl;
    }
    return 0;
}
