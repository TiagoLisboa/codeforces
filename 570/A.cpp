#include <iostream>

using namespace std;

int main () {
	int sum = 0, x;
	cin >> x;
	int res = 1;
	int num = x;

	while (res) {
		sum = 0;
		num = x;
		while (num != 0)
		{
        		sum = sum + num % 10;
		        num = num / 10;
    		}

		if (sum%4 == 0) break;
		else x = x+1;
	}

	
	

	cout << x;
	cout << endl;

	return 0;
}
