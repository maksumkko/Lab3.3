#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	const double PI = 3.141592653589793238;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	
	if (x <= -7 - R)
	{
		y = R;
	}
	else
	{
		if (-7 - R <= x && x <= -7 + R)
		{
			y = R - sqrt(pow(R, 2) - pow(x, 2) + (14 * x) + 49);
		}
		else
		{
			if (-7 + R <= x && x <= -4)
			{
				y = R;
			}
			else
			{
				if (-4 <= x && x <= 0)
				{
					y = -(R * x) / 4;
				}
				else
				{
					if (0 <= x && x <= PI)
					{
						y = sin(x);
					}
					else
					{
						if (PI <= x)
						{
							y = x;
						}
					}
				}
			}
		}
	}
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;

}