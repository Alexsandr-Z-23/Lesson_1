#include <iostream>
using namespace std;
const int car = 15;

int main()
{
	setlocale(LC_ALL, "rus");

	//cout << "Hello World!\n";
	//int num;
 //  cin >> num;
 //  cout << num;
 //\b удаление последнего символа
 //\n переход на новую строку
 //\t применение табуляции отступа в строке
 //\\ вывод обратной черты \
 //\" вывод двойной кавычки
 //\' вывод одинарной кавычки
	//cout << R"(hello\nworld)"; // raw-строка

									// ТИПЫ ДАННЫХ
					//1. ЧИСЛОВЫЕ

	//float - 4b - (1.5; 0.389464);   0,0000000 -> 7 знаков после запятой
	//double - 8b - (1.5; 0.389464);  0,0000000 -> 16 знаков после запятой
	//long double -18-19 знаков после запятой  2.4e+10

	//	int		4b - 2 147 483 648 --  -2 147 483 647
	//	short	2b - 32 768 ---- 32 767
	//	long	4b - 2 147 483 648 -- - 2 147 483 647
	//	long long	8b - 9 223 372 036 854 775 808 ----  9 223 372 036 854 775 807

		//unsigned int num = 0; // отбрасывает отрицательную часть диапазона значений
		//
		//			// СИМВОЛЬНЫЕ
		//char  1b    - 0-255 или -128 -> 127
		//			//ЛОГИЧЕСКИЙ

		//bool  1b     true/false  1/0
		
	//==============================================================
	//int number = 15; // обьявление /  number = 15; // инициализация

	//number = 30;

	//const int number_1 = 25;
	//
	//unsigned b = 154923ULL;
	//auto a  {1024U};
	//long num{ -2048L };
	//long long numL{ 4096ULL };
	//cout << " a " <<sizeof( b)<<" " << b << endl;
	//cout << " Long " << num << endl;
	//cout << " Long long " << numL << endl;

	//int counter = 0;
	//counter++;  // инкремент
	//counter += 1;
	//cout << counter << endl;
	//--counter;	// декремент
	//counter -= 1;
	//cout << counter << endl;

	//int a{ 26 };
	//int b{ 5 };
	//int c = (a % b) ; // c = 25 % 5 =26 - 5*5= 1 
	//cout << c;

	//+=
	//-=
	//*=
	// /=
	//%=

	/*int a = 13;
	int b =15;
	int c = a > b ? a - b : a + b;
	cout << c;*/


	//bool a = 1;//true
	//bool b = 0; // false
	//bool c = 'g'; // true
	//bool d = 3.4; // true

	//int g = true; // 1
	//double f = false; // 0

	//int a = 3.4; // 3
	//float d = 35005; 
	//double f = 0.456826916;
	//d = f;
	//cout << d << endl;


	//double sum{ 103.4 };
	//unsigned int hours{ 9 };
	//unsigned int rez{ (unsigned int) (sum / hours) }; // явное преобразование 
	//cout << rez;


	int A = 30;
	int B = 40;

	//cout << (A == B)<<endl; //результат логический тип данных bool true или false
	//cout << (A != B)<<endl;
	//cout << (A >= B)<<endl;
	//cout << (A < B) << endl;
	//cout << (A > B) << endl;
	//cout << (A <= B) << endl;

	//cout << (A && B) << endl; // оператор И 
	//cout << (A || B) << endl;	// оператор ИЛИ
	//cout << (!A) << endl;	// оператор НЕ
	//cout << !(6 != 2);


	if (A>B)   //false
		cout << A-B << endl;
	else
		cout << A + B << endl;
	


}


