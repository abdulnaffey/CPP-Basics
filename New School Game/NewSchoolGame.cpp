#include <iostream>
using namespace std;
int openLocks(int n, int m) {
	int sum = 0;
	for (int i = 1, k = 1; i < n || i<m; i = pow(k, 2), k++) {
		sum++;
	}
	return sum;
}
int mostTouchableLocker(int n, int m) {
	int count = 0,max=0,locker=0;
	for (int i = 1; i < m || i< n; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (max < count) {
			max = count;
			locker = i;
			//cout << count << "\t" << i << endl;
		}
		count = 0;
	}
	return locker;
}
int main() {

	int m = 100, n = 100;
	cout << "The number of Open Locks are : " << openLocks(n, m) << endl;
	cout << "The number of most touchable Locker is : " << mostTouchableLocker(m, n);
}