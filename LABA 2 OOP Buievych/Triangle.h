#pragma once
#include <iostream>

// � ��� ���������, ��� ���������� � ������� ��������, ����'������
//������ ���� ��������� ������� ������ :
//� ����� ����������� Init();
//� ����� �������� �� ��������� Read();
//� ����� �������� �� ����� Display();
//� ������������ � ����� toString().

class Triangle {
	float a, b, c;
	double ka;
public:
	Triangle(float valuea,float valueb, float valuec) {
		a = valuea;
		b = valueb;
		c = valuec;
	};
	Triangle() {};
	Triangle(float valuea,double ka) {
		a = valuea;
		c = a / sin(ka/57.3);
		b = c * cos(ka/57.3);
	};
	Triangle Init(float a, float b, float c);
	Triangle Read();
	void Display();
	float Perymetr();
	float Ploscha();
	char toString();
};