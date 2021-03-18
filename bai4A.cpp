#include <iostream>
using namespace std;
void xuatdiachi(int *a)
{
    for (int i = 0; i < 4; i++)
    {
        cout << a + i << " ";
    }
    cout << endl;
}
void xuatdiachistring(string b)
{
    cout << &b << endl;

}
int main()
{
    int a[] = {1,2,3,4};
    xuatdiachi(a);
    cout << &a[0] << " " << &a[1] << " " << &a[2] << " " << &a[3] << endl;
    // vậy mảng được truyền theo cơ chế tham chiếu do địa chỉ khi in ra trong hàm void và trong hàm main là giống nhau

    string b;
    cin >> b;
    xuatdiachistring(b);
    cout << &b;
    // vậy string được truyền theo cơ chế pass - by - value





}
