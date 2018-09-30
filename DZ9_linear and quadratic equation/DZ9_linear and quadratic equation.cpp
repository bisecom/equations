//linear and quadratic equation

#include<iostream>
using namespace std;
double equation(int a, int b);
void equation(int a, int b, int c);

int main()
{
	int a = 0, b = 0, c = 0;
	cout << "To solve a*x + b = 0 OR a*x2+b*x + c = 0 equations," << endl;
	cout << "Input \"a\", \"b\", \"c\":" << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin >> c;
	cout << endl;
	
	double x = equation(a, b);
	if (x == 0.00001)
	cout << "You can not input a = b = 0 OR a = 0, b != 0 for a*x + b = 0 equation, try other data..."<<endl;
	else
		cout << "Solution for a*x + b = 0 equeation, x = " << x<<endl;
	cout << endl;
	equation(a,b,c);
	cout << endl;
	return 0;
}

// Liner equation function

double equation(int a, int b)
{
	double x = 0.00001;
	if ((a != 0 && b != 0) || (a != 0 && b == 0))
	
		x = double(-b) / a;
			
	return x;
}

// Quadratic equation function

void equation(int a, int b, int c)
{
	if (a != 0)
	{
		int D = (b)*(b) - 4 * a*c;
		double square_root = 0, x_1 = 0, x_2 = 0;
		
		if (D > 0)
		{
			// Square_root determination for int;
			/*for (int i = 0; i < D; i++)
			{
				if (i*i == D)
				{
					square_root = i;
					break;
				}
			}
			*/
			square_root = sqrt((b*b-4*a*c));
			x_1 = ((-b) + square_root) / (2 * a);
			x_2 = ((-b) - square_root) / (2 * a);
			cout << "Solution for a*x2 + bx + c = 0 equeation; x_1 = " << x_1 << ", x_2 = " << x_2 << endl;
			
		}

		else if (D == 0)
		{
			x_1 = -(b) /( 2 * a);
			x_2 = x_1;
			cout << "Solution for a*x2 + bx + c = 0 equeation; x_1 = " << x_1 << ", x_2 = " << x_2 << endl;
		}
		else if (D<0)
			cout << "The equation has no solution if (b*b - 4 * a*c)<0, try other data..." << endl;
	}
	else
		cout << "The a*x2 + bx + c = 0 equation has no solution if a=0, try other data..."<<endl;
	
}