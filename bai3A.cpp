#include <iostream>
using namespace std;
void tang(int &x)
{
    x++;
    //cout << &x << endl;
}
int tang1(int y)
{
    y++;
    cout << &y << endl;
    return y;
}
int main()
{
    int n, m;
    cin >> n >> m;
    tang(n);
    cout << n << endl;
    //cout << &n << endl;
    cout << tang1(m) << endl;
    cout <<  m << endl;
    cout << &m << endl;
    /* với n = 5 và m = 5
        địa chỉ của tham biến x = 0x61fe1c và của n = 0x61fe1c
        địa chỉ của tham trị y = 0x61fdf0 trong khi của biến m = 0x61fe18 */


}
