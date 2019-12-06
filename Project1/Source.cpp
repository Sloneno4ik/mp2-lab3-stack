#include <string>

#include "calculator.cpp"
using namespace std;
void main()
{
	TCalculator C;
	string expr;
	cin >> expr;
	C.SetExpr(expr);
	C.ToPostfix();
	cout << C.GetPostfix();
	cout << C.Calc();
}