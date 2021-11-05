#include <iostream>
using namespace std;
int main()
{
	double x, y, z, g, h,sum, times;

	cout << "Jep x: "; cin >> x;
	cout << "Jep y: "; cin >> y;
	cout << "Jep z: "; cin >> z;
	cout << "Jep g: "; cin >> g;
	cout << "Jep h: "; cin >> h;
	times = x * y * z * g * h;
	sum = x + y + z + g + h;
	cout << "Shuma: " << sum << endl;
	
	if (times > 5) {
		cout << "Prodhimi: " << times << endl;
	}
	else {
		cout << "Prodhimi1: " << times << endl;
	}


	system("pause");
	return 0;
}
