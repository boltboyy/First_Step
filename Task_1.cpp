#include <iostream>
using namespace std;
int main()
{
	float x, h, f;
	int n;
	cout << "Enter x,h,n" << endl;
	cin >> x >> h >> n;
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (x > 5)
			{
				f = (x + i * h) * (x + i * h);
			}
			else
			{
				f = (x + i * h) - 1;
			}
			cout << f << '\t';
		}
	}
	else cout << "Ooops! n must be > 0";
	return 0;
}