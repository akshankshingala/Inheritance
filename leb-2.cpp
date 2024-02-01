/*
2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method
*/
#include<iostream>
using namespace std;

class p{
	public:
		float a,b,c;
		
		
		setdata(){
			cout << "Enter the aelicus  ";
			cin >> a;	
		}
};

class q : public p {
		public:
	
		toFehrenheit(){
				
			b = (a * 1.8) + 32;

				cout << "Celicus to Fehrenheit is " << b << endl;
		}
		
};

class r : public q{
		public:
			toKelvin(){
			c = (b - 32) * 5/9+ 273.15; 
				cout << "Fehrenheit to kelvin is " << c << endl;
				cout << "Celicus = " << a << endl;
				cout << "Fehrenheit = " << b << endl;
				cout << "kelvin = " << c << endl;
			}
};

int main(){
	r r1;
	
	r1.setdata();
	r1.toFehrenheit();
	r1.toKelvin();
}

