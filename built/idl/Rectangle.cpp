#include <iostream>
using namespace std;

class makeBox{

	Standard_Real height, width;
	public:
	Standard_EXPORT Rectangle();
	Standard_EXPORT Rectangle(Standard_Real height, Standard_Real width): height(height), width(width){};
	void set_values(Standard_Real, Standard_Real);
	Standard_Real area();

};

Standard_EXPORT Rectangle::Rectangle(){

};

void Rectangle::set_values( Standard_Real x, Standard_Real y ){
	width = x;
	height = y;
};

Standard_Real Rectangle::area(){
	return width*height;
};

	
