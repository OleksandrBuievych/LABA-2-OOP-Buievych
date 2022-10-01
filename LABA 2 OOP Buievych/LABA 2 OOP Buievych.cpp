//У всіх завданнях, крім зазначених у завданні операцій, обов'язково 
//повинні бути реалізовані наступні методи : 
//• метод ініціалізації Init(); 
//• метод введення із клавіатури Read(); 
//• метод вивідення на екран Display(); 
//• перетворення в рядок toString(). 



#include "Triangle.h" 
#include <iostream> 
#include <Windows.h>//Для української мови у консолі 
using namespace std;



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangle ABC(3,5,3);//Створюємо клас АВС 
	//ABC = ABC.Init(3, 5, 3);//Ініціалізуємо поля 
	//ABC.Read(); 
	ABC.Display();//Виведення на екран 
	ABC.toString();//Виведення полів класу у рядок 
	Triangle BCA;
	Triangle CAB(3,60);
	CAB.Display();

	
}