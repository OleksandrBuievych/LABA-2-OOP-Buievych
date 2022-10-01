#pragma once
#include <iostream>

// ” вс≥х завданн€х, кр≥м зазначених у завданн≥ операц≥й, обов'€зково
//повинн≥ бути реал≥зован≥ наступн≥ методи :
//Х метод ≥н≥ц≥ал≥зац≥њ Init();
//Х метод введенн€ ≥з клав≥атури Read();
//Х метод вив≥денн€ на екран Display();
//Х перетворенн€ в р€док toString().

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