#include <iostream>
using namespace std;

int main() {
    int b;
    
    cout <<"int:" <<sizeof(int)<<endl;
    cout <<"float:" <<sizeof(float)<<endl;
    cout <<"double:" <<sizeof(double)<<endl;
    cout <<"char:" <<sizeof(char)<<endl;
    cout <<"bool:" <<sizeof(bool)<<endl;
    cout <<"long:" <<sizeof(long)<<endl;
    int a;
 cout << &a << endl;
 cout<<a<<endl;
 cout <<sizeof(a)<<endl;
 cout<<sizeof(int*)<<endl;
 cout<<sizeof(float*)<<endl;
 cout<<sizeof(double*)<<endl;
 cout<<sizeof(char*)<<endl;
 cout<<sizeof(bool*)<<endl;
 cout<<sizeof(long*)<<endl;
cout<<*(&a)<<endl;
int* direccion;
cout<<direccion <<endl;
cout<<&direccion <<endl;
cout<<*direccion <<endl;
    return 0;
}