// Program to print circumference and area of circle
#include <iostream>
using namespace std;
int main(){
float radius,area,circum;
cout << "Enter radius :";
cin >> radius;
area = 3.14 * radius * radius;
circum = 2 * 3.14 * radius;
cout << "Area is : "<<area << "  \nCircumference is : "<<circum;
return 0;
}
