#include <iostream>
using namespace std;

int  main(){
    char array[100] = "Muslimeen";
    int i = 0;

    while(array[i] != '\0'){
        cout<<array[i]<<endl;
        i++;
    }
    return 0;
}
