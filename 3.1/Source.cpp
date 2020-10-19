// Lab_03_1.cpp
// Øêðèíäà Âîëîäèìèð
// Ëàáîðàòîðíà ðîáîòà ¹ 3.1
// Ðîçãàëóæåííÿ, çàäàíå ôîðìóëîþ: ôóíêö³ÿ îäí³º¿ çì³ííî¿.
// Âàð³àíò 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // âõ³äíèé ïàðàìåòð
	double y; // ðåçóëüòàò îá÷èñëåííÿ âèðàçó
	double A; // ïðîì³æíèé ðåçóëüòàò - ôóíêö³îíàëüíî ñòàëà ÷àñòèíà âèðàçó
	double B; // ïðîì³æíèé ðåçóëüòàò - ôóíêö³îíàëüíî çì³ííà ÷àñòèíà âèðàçó
	double z; // ðåçóëüòàò îá÷èñëåííÿ âèðàçó
	cout << "x = "; cin >> x;
	A = fabs(x * x * x);
	if (x < -1)
		B= fabs(2 + x) + sqrt(sin(x));
	if (-1 <= x && x <= 1)
		B = atan((x * x * x) + 1) + 1;
	if (x > 1)
		B = exp(cos(x)) + log10(1 / x + 1);
	
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	
	if (x < -1)
		B = fabs(2 + x) + sqrt(sin(x));
	else
		if (-1 <= x && x <= 1)
			B = atan((x * x * x) + 1) + 1;
		else
			B = exp(cos(x)) + log10(1 / x + 1);
	
	z = A + B;
	cout << "2) z = " << z << endl;
	cin.get();
	return 0;
}
