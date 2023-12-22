# include <iostream>
using namespace std;

int main(){
    
    //To declare Multipile pointers in a 
    //single statement you have to have put 
    //asterisk '*' with each pointers name
    //else only the first one will be 
    //acceptable as a ponter in all other ways
    int *num1{nullptr}, *num2{nullptr};
    int a = 100, b = 200;
    
    int *a{nullptr}; //adress 0x0
    int *b{};        //adress 0x0
    int *c;          //adress 0x1

    
    num1 = &a;
    num2 = &b;
    
    cout<<*num1<<endl;
    cout<<*num2<<endl;
    cout<< num3<<endl;

    return 0;
}
