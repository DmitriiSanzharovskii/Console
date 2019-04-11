//  Консольный калькулятор. Выполнил Санжаровский Дмитрий.Апрель 2019г.
/*
Данный калькулятор позволяет выполнить некоторые простые арифметические вычисления, а именно:
1. Сложение
2. Вычитание
3. Умножение
4. Деление
5. Возведение числа в степень
6. Нахождение процента от числа
*/
#include"pch.h"
#include<iostream>    //Подключение библиотек     

using namespace std; // Подключение пространства имен

void process_turn() //Начало работы процесса
{
	cout << " Вас приветствует программа: Консольный калькулятор!" << endl << endl; 		// Порядок выполнения действий																																				
	
	cout << "1.Введите число" << endl <<
		
		"2.Введите знак арифметического действия: " << endl <<
		
		"   Сложение + " << endl <<
		
		"   Вычитание: - " << endl <<
		
		"   Умножение: * " << endl <<
		
		"   Деление: / " << endl <<
		
		"   Возведенте в степень ^ " << endl <<
	
		"   Нахождение процентов % " << endl <<
	   
		"3.Введите второе число" << endl <<
	  
		"4.Нажмите клавишу ENTER" << endl;
		


}

int main()                          // Главная функция
{
	setlocale(LC_ALL, "Russian");   // Язык вводимых символов

	double calculate[4];            // массив 

	char symbhol;             // Ввод символа операции

	process_turn();           // Запуск процесса вычисления 

	cout << endl;

	{


		while (cin >> calculate[0] >> symbhol >> calculate[1])
		{
			switch (symbhol)
			{                            
			case '+':
				calculate[3] = calculate[0] + calculate[1];

				cout << calculate[0] << " + " << calculate[1] << " = " << calculate[3] << endl; break; // Результат сложения (сумма)
			case '-':
				calculate[3] = calculate[0] - calculate[1];

				cout << calculate[0] << " - " << calculate[1] << " = " << calculate[3] << endl; break; // Результат вычитания (разность)
			case '*':
				calculate[3] = calculate[0] * calculate[1];

				cout << calculate[0] << " * " << calculate[1] << " = " << calculate[3] << endl; break; // Результат умножения (произведение)
			case '/':
				calculate[3] = calculate[0] / calculate[1];

				cout << calculate[0] << " / " << calculate[1] << " = " << calculate[3] << endl; break; // Результат деления (частное)

			case '^':
				calculate[3] = calculate[0];

				cout << calculate[3] << "^" << calculate[1] << " = " << pow(calculate[3], calculate[1]) << endl; break; // Возведение в степень

			case '%':
				calculate[3] = calculate[0] * calculate[1] / 100;

				cout << calculate[0]<< "*" <<calculate[1] << "/" << 100 << " = " << calculate[3] << endl; break; // Вычисление процентов
			}
		}
	}


	system ("pause");
	return 0;
}