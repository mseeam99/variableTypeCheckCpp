/*****************************************************************************
*                        Author: Mohammad Seeam                              *                                  
*                         To Compile and Run -                               *
*       clear && g++ -o exe variableTypeChecking.cpp && ./exe                *
*****************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

void myFunctionToCheckType(stack<int> myStack){
    stack<char> dummyStack;
    if(typeid(myStack) == typeid(dummyStack)){
        cout<<"Both stack type are same !"<<endl;
    }else{
        cout<<"Both stack type are different !"<<endl;
    }
}

double checkType(int first, double second ){
    double firstDoubleValue = double(first);
    double answer = firstDoubleValue+second;
    return answer;
}

int functionParameterTest(int one, int two, int three=300){
    return one+two+three;
}

int main() {
    
    int count = 25;
    
    if (typeid(count) == typeid(int)) {
        std::cout << "It's an int....." << std::endl;
    }
    
    string name = "MOHAMMAD";
    
    if (typeid(name) == typeid(string)) {
        std::cout << "It's a string....." << std::endl;
        
    }
    
    char littleChar = 'M';
    
    if (typeid(littleChar) == typeid(char)) {
        std::cout << "It's a character....." << std::endl;
    }
    
    vector<string> myVector;
    
    if (typeid(myVector) == typeid(vector<string>)) {
        std::cout << "It's a vector....." << std::endl;
    }
    
    unordered_map <string,int> myMap;
    if(typeid(myMap) == typeid(unordered_map <string,int>)){
        cout<<"It's a Hash Map....."<<endl;
    }

    stack<int> myStack;
    myFunctionToCheckType(myStack);

    double pi = 3.1416;
    int addition = 100;
    cout<<checkType(addition,pi)<<endl;

    cout<<functionParameterTest(100,200)<<endl;

    return 0;
}

/*
It's an int.....
It's a string.....
It's a character.....
It's a vector.....
It's a Hash Map.....
Both stack type are different !
103.142
600
*/