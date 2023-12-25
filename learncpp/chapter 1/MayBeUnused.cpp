#include <iostream>
using namespace std;
int main(){
    // if unused will not gen. warning
    // C++17 feature
    [[maybe_unused]] double pi {3.1416};
    [[maybe_unused]] double g {9.8};
    [[maybe_unused]] double e {2.71};

    cout<<pi<<endl;
    cout<<g<<endl;
    
    double hi {3828.28};//this may generate warning
    return 0;
}
