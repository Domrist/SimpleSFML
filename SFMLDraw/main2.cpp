#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> mas = { 1,2,34,887,645,898 };
	vector<int> mas2 = { 645,898 ,544,1024,1032000,-12};
	
	bool flag = false;

	for (int i : mas) {
		for (int ii : mas2) {
			if (i == ii) {
				cout << "YES\n";
				flag = true;
				break;
			}
			flag = false;
		}
		if (!flag) {
			cout << "NO" << endl;
			flag = true;
		}
		
	}
	return 0;
}