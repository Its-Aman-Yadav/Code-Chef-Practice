// nums are user-defined types that consist of named integral constants.

#include <bits/stdc++.h>
using namespace std;

// Defining an enum
enum GeeksforGeeks { Geek1,
					Geek2,
					Geek3 };

GeeksforGeeks G1 = Geek1;
GeeksforGeeks G2 = Geek2;
GeeksforGeeks G3 = Geek3;

// Driver Code
int main()
{
	cout << "The numerical value "
		<< "assigned to Geek1 : "
		<< G1 << endl;

	cout << "The numerical value "
		<< "assigned to Geek2 : "
		<< G2 << endl;

	cout << "The numerical value "
		<< "assigned to Geek3 : "
		<< G3 << endl;

	return 0;
}
