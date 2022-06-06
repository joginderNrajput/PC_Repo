#include <iostream>
using namespace std;

// sum using two arguments
int sum(int a, int b)
{
    return a + b;
}

// sum using three arguments
int sum(int a, int b, int c)
{
    return a + b + c;
}

// volume of cylinder
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}

// volume of cube
int volume(int a)
{
    return (a * a * a);
}

// volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    int x, y, z;
    cout << "Enter the numbers : ";
    cin >> x >> y >> z;
    cout << "The sum of two numbers : " << sum(x, y) << endl;
    cout << "The sum of the three numbers is : " << sum(x, y, z) << endl;
    int r, h1;
    cout << "Enter the radius and height of the cylinder : ";
    cin >> r >> h1;
    cout << "The volume of the cylinder is : " << volume(r, h1) << endl;
    int a;
    cout << "Enter the side of the cube : ";
    cin >> a;
    cout << "The volume of the cube is : " << volume(a) << endl;
    int l, b, h2;
    cout << "Enter the length, breadth and height : ";
    cin >> l >> b >> h2;
    cout << "The volume of the cuboid is : " << volume(l, b, h2) << endl;
    return 0;
}