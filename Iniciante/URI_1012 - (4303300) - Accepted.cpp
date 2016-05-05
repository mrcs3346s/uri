#include <bits/stdc++.h>

#define pi 3.14159

using namespace std;

int main(void)
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(3) << "TRIANGULO: " << (a*c)/2 << "\n" << "CIRCULO: " << pi*pow(c,2) << "\n" << "TRAPEZIO: " << ((a+b)*c)/2 << "\n" << "QUADRADO: " << pow(b,2) << "\n" << "RETANGULO: " << a*b << "\n";
	return(0);
}