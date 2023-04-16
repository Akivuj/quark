// #include<iostream>

// using namespace std;

// int main()
// {
//     int num1,num2,num3;
//     cout <<"Ingrese primer valor:";
//     cin >>num1;
//     cout <<"Ingrese segundo valor:";
//     cin >>num2;
//     cout <<"Ingrese tercer valor:";
//     cin >>num3;
//     if (num1 > num2 && num1 > num3)
//     {
//         cout <<num1;
//     }
//     else
//     {
//         if (num2 > num3)
//         {
//             cout <<num2;
//         }
//         else
//         {
//             cout <<num3;
//         }
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Ingrese el primer numero:";
	cin >> num1;
	cout << "Ingrese el segundo numero:";
	cin >> num2;
	cout << "Ingrese el tercer numero:";
	cin >> num3;
	if (num1 < num2 && num1 < num3)
	{
		cout << "El numero menor es:";
		cout << num1;
	}
	else
	{
		if (num2 < num3)
		{
			cout << "El numero menor es:";
			cout << num2;
		}
		else
		{
			cout << "El numero menor es:";
			cout << num3;
		}
	}
	cout << "\n";
	if (num1 > num2 && num1 > num3)
	{
		cout << "El numero mayor es:";
		cout << num1;
	}
	else
	{
		if (num2 > num3)
		{
			cout << "El numero mayor es:";
			cout << num2;
		}
		else
		{
			cout << "El numero mayor es:";
			cout << num3;
		}
	}
	return 0;
}