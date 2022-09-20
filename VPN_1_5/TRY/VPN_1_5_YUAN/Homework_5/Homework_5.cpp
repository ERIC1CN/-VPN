#include<iostream>
using namespace std;
#define PI 3.14

int main()
{
	double r = 0,h = 0, length =0, area =0, spher_surface_area =0,cylind_volume =0;
	cout << "请依次输入圆的半径和圆柱的高(两个数中间用空格隔开)：";
	cin >> r >> h;
	length = 2 * PI * r;
	area = PI * r * r;
	spher_surface_area = 4 * PI * r * r;
	cylind_volume = h * PI * r * r;
	cout << "圆周长为:" << length << "圆面积为" << area << "圆球表面积为" 
		<< spher_surface_area << "圆柱体积为" << cylind_volume << endl;
	return 0;
}