#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a, b, d, e;
	double c, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (b*c)+(e*f) << "\n";
	return(0);
}