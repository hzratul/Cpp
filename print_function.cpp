# include <iostream>
using namespace std;

void print(int n = 0){cout<<n<<endl;};
void print(float f = 0){cout<<f<<endl;};
void print(char c = 'a'){cout<<c<<endl;};
void print(string s = ""){cout<<s<<endl;};
void print(bool b = false){cout<<b<<endl;};
int main(){
	print(100);
	print(107.654);
	print('P');
	print("Pythons print");
	print(true);
	return 0;
}

// Error : print function is ambiguious
