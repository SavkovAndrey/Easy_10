#include <iostream>

#include <math.h>
using namespace std;
//---------------------Функции и Прототипы---------------------------------------

// (1 - tg x) ^ (ctg x) + cos(x - y)



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	double x, y;

	double rezult, pr1 , pr2, pr3;

	const double pi = 3.141592;

	cout << "Введите переменные:  " << endl;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;

	x = x * pi / 180;

	y = y * pi / 180;

	cout << "Выводим Х и У переведенные в радианы ( отладка )" << endl;

	cout << x << "        " << y << endl << endl;

	pr1 = 1 - tan(x);            // 1 - 1 = 0  ????

	pr2 = cos(x)/sin(x);         // 0.7/0.7 = 1   ????

	pr3 = cos(x - y);            // 1 !! 
	
	rezult = pow(pr1, pr2) + pr3;

	cout << "Выводим три промежуточных результата ( так как не выполныем весь пример сразу ) ( ОТЛАДКА)" << endl;

	cout << endl << pr1 << "   " << pr2 << "    " << pr3 << endl << endl;

	cout << "Ответ: " << rezult << endl << endl;


	system("pause");

	return 0;
}
