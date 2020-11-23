#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define end "\n"
#define first f
#define second s
#define INF (int)0x3f3f3f3f
#define LINF (long long)0x3f3f3f3f3f3f3f3fll

typedef long long int int64;
typedef unsigned long long int  uint64;

void get_binary(int n, string bin){
	if (bin.size() == n){
		int p = rand() % 2;
		int mod = 0;
		for (auto k : bin)
			if (k == '1')
				mod = (mod + 1)%2;
		if (p){
			for (auto k : bin)
				cout << k << ' ';
			cout << mod << endl;
		}
	}
	else{
		get_binary(n, bin + "0");
		get_binary(n, bin + "1");
	}
}

int main(){	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 6;
	get_binary(n, "");

	return 0;
}