#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string a = "";
	double b, c;
	cin >> a >> b >> c;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << b+((c/100)*15) << "\n";
	return(0);
}