#include"Box.h"

void Box::setLength(int len){
	length = len;
}
void Box::setWidth(int wid){
	width = wid;
}
void Box::setHeight(int hei) {
	height = hei;
}
int Box::getLength() {
	return length;
}
int Box::getWidth() {
	return width;
}
int Box::getHeight() {
	return height;
}
int Box::calcVolume() {
	return length * width * height;
}