#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);

	for(int i = 0; i < 10; i++)
		cout << v[i] << "  ";
	cout << endl;

	vector<int>::iterator p = v.begin();
	while(p != v.end())
    {
		cout << *p << "  ";
		p++;
	}

	getch();
	return 0;
}
