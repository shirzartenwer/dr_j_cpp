#include "Rectangle.h"

Rectangle::Rectangle()
{
	this->length = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setLength(double length)
{
	this->length = length;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::area() const
{
	return length * width;
}

double Rectangle::perimeter() const
{
	return 2 * length + 2 * width;
	//return 2 * (length + width)
}


bool Rectangle::operator==(const Rectangle& other) const {
	return this->length == other.length && this->width == other.width;
}


Rectangle Rectangle::operator+(const Rectangle& other) const{
 	return Rectangle(length+other.length, width+other.width);
};

void Rectangle::operator=(const Rectangle& other){
	this->length = other.length;
	this->width = other.width;
};

bool Rectangle::operator!=(const Rectangle& other) const{

	bool result = false;

	if (this->length != other.length or this->width != other.width){
		result = true;
	}

	return result;

};