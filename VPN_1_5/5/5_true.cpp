#include<iostream>
using namespace std;
#define PI 3.14

int main()
{
	double r = 0, h = 0, length = 0, area = 0, spher_surface_area = 0, cylind_volume = 0;
	cin >> r >> h;
	length = 2 * PI * r;
	area = PI * r * r;
	spher_surface_area = 4 * PI * r * r;
	cylind_volume = h * PI * r * r;
	cout  << length<<" "<<area <<" "<< spher_surface_area << " "<< cylind_volume << endl;
	return 0;
}