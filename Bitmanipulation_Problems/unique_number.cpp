// unique_number.cpp

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void findUniqueNumber(int arr[], int length) {
	int result = 0;
	for(int i = 0; i < length; i++) {
		result = arr[i] ^ result;
	}

	cout << result << endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int arr[] = { 11, 12, 23, 12, 11 };

  int length = sizeof(arr) / sizeof(arr[0]);

  findUniqueNumber(arr, length);

  return 0;
}