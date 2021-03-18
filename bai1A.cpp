#include <iostream>

using namespace std;
    //int a[] = {1, 2, 3};
    //char b[] = {'a','b','c'};
    // nếu khai bảo ở bên ngoài hàm main thì cả 2 cách in ra địa chỉ của mảng int đều cho một kết quả như nhau và các địa chỉ cách nhau 4 đơn vị

int main()
{
    int a[] = {1, 2, 3};
    //char b[] = {'a','b','c'};
    cout << a << " " << a+1 << " " << a+2 <<endl;
     //for(int i = -2; i >-6; i--)
    //{
     //   cout << &a[i] << " " ;
    //}


    //cout << (void*)&b[0] << " " << (void*)&b[1] << " " << (void*)&b[2] ;
}
