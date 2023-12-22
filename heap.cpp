# include <iostream>
using namespace std;

int main(){
    //Allocation of Heap Memory
 
    //Method no 1
    int *pnum1{};
    pnum1 = new int;
    *pnum1 = 82514;

    //Method 2
    int *pnum2{};
    pnum2 = new int {288};

    //Method 3
    int *pnum3{new int};
    *pnum3 = 167;

    //Method 4
    int *pnum4{new int (828)}; //direct init
    int *pnum5{new int {1282}}; //uniform int 
    
    



    delete pnum1; // removes the data i guess??
    pnum1 = nullptr; // important to set back to nullptr ie reinitialize

    delete pnum2;
    pnum2 = nullptr;//error: pnum2 = {nullptr}; ?

    delete pnum3;
    pnum3 = nullptr;
    
    delete pnum4;
    pnum4 = nullptr;

    delete pnum5;
    pnum5 = nullptr;
    return 0;
}
