# include <iostream>

int main(){
    const char *p_char{"Array fo characters."};
    int *pnum {};
    int num;
    pnum = &num;
    *pnum = 678;
    std::cout<<num<<std::endl;
    return 0;
}
