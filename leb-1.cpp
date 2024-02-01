/*
1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods
*/


#include<iostream>
using namespace std;

class x{
	public:
		int a,b,c;
	    int xx,xy,xz;
        int sum;
};

class y : public x{
	public:
		setdata(){
			cout << "Enter the first no:-";
			cin >> a;
			
			cout << "Enter the second no:-";
			cin >> b;
			
			cout << "Enter the third no:-";
			cin >> c;	
		}  
        
        getdata(){
        	xx=a*a*a;
        	xy=b*b*b;
        	xz=c*c*c;
        	
        	cout << "Cube three number is " << xx << "  " << xy << "  " << xz  << endl;
        	
        	sum = xx+xy+xz;
        	
            cout << "Sum of all cube is " << sum ;      
		}


};


int main(){
	y y1;
	
	
	y1.setdata();
	y1.getdata();
	return 0;
}

