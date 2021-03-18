#include <iostream>
using namespace std;
void xuatdiachi(int &b) // b là biến tham chiếu
{
    cout << &b << endl ;
    int c = 9;
    b = c;
    cout << &b << endl;



}
int main()
{
    int a;
    cin >> a;
    xuatdiachi(a);
    cout << &a << endl;
    // biến tham chiếu (b)và biến mà nó chiếu tới (a) là cùng một biến trong bộ nhớ
    //int &c ; Không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường vời khi run sẽ báo lỗi là c đã khai báo nhưng mà chưa được khởi tạo
    cout << a;

    // không thể chiếu một tham chiếu tới biến khác đích ban đầu

}
