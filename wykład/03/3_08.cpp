#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t[10];
	
	for(int i = 0; i < 10; ++i)
		t[i] = i+1;

	for(int i = 0; i < 10; ++i)
		cout << t[i] << endl;
    cout << endl;

	for(int i = 1; i <= 10; ++i)
	{
		t[i] = i+1;
		cout << t[i] << endl;
	}
}
             
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// zsh: abort      ./test
