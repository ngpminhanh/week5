#include <iostream>

using namespace std;
int factorial(int x)
{
    cout <<"x = " <<  x <<" at " << &x << endl;
    if(x == 1) return 1;
    if(x == 0) return 0;
    if(x >= 2)
    {
        return x * factorial(x-1);
    }



}
int main()
{
    int n;
    cin >> n;
     factorial(n);
     cout << &n;
}
// chuỗi giá trị về địa chỉ của x sẽ luôn được in theo 1 thứ tự nhất định
//

