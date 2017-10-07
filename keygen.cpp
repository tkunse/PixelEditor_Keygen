#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	string str = "";
	string nstr = "";
	string tmp = "";
	string key = "2345679qwertyupadfghjkzxcvbnms";
	int len = key.length();
	int ebx = 0;
	
	srand((unsigned)time(NULL));
	str += key.substr(rand() % (len - 1), 1);
	nstr = str;
	str += "n120190720";
	nstr += "n2972";
	
	for (int i = 0; i < 6; i++) {
		tmp = key.substr(rand() % (len - 1), 1);
		str += tmp;
		nstr += tmp;
	}
	
	for (int i = 1; i <= 12 - 2; i++) {
		ebx = nstr[i] ^ ebx;
	}
	
	string t = key.substr(ebx % 30, 1);
	
	str.replace(str.length() - 1, 1, t);
	
	cout<<str<<endl;
}

