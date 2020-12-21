#include <iostream>
using namespace std;

namespace A{
    void method1(){
        cout <<"A"<<endl;
    }
}
namespace B{
    void method1(){
        cout <<"B"<<endl;
    }
}
void swap(int *a,int *b){
    int c =*a;
    *a = *b;
    *b = c;
}
void swap_use_name(int &a,int &b){
    int c =a;
    a = b;
    b = c;
}
using namespace B;
int main() {
//    cout << "Hello, World!" << endl;
//    A::method1();
//    method1();
    int a=10,b=20;
    cout << a<<b<<endl;
    swap(&a,&b);
    cout << a<<b<<endl;
    swap_use_name(a,b);
    cout << a<<b<<endl;
    int x=10;
    int *p = &x;
    cout << p <<endl;
    cout << &x <<endl;
    cout << *p <<endl;
    x=20;
    int z=10;
    // const 加在*外面表示不可以通过指针改变指向的值，但可以通过原来的变量改变，只可以改变指向
    // const 加在*内部表示不可以更改指向
    cout << "=====" <<endl;
    int *const n = &z;
    cout << *n << endl;
    z =20;
    cout << *n << endl;
    cout << "=====" <<endl;
    const int *m = &z;
    *m =30;
    cout << *m << endl;
    return 0;
}

