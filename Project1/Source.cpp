#include <string>
#include <iostream>
#include "calculator.h"
using namespace std;
int main()
{
	
		try {
			
				TCalculator C;
				string test_string;
				getline(cin, test_string);
				C.SetExpr(test_string);
				C.ToPostfix();
				cout << C.Calc() << endl;
			
		}
		catch (char* e)
		{
			cout << e << endl;
		}
		system("pause");
		return 0;
	
}