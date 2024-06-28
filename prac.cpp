#include <iostream>
using namespace std;

int main()
{
    // int *ptrNumber = NULL;
    // int number = 10;

    // ptrNumber = &number;

    // cout<<number<<endl;  //10
    // cout<<*ptrNumber<<endl;  //10

    // *ptrNumber = 200;

    // cout<<number<<endl;  //200

    // const int number = 20;

    // cout<<number<<endl;

    // number = number + 10;

    // cout<<number<<endl;

    //    int *ptrNumber = NULL;

    //    int num1 = 10;

    //    ptrNumber = &num1;

    // //   *ptrNumber = 200;
    // num1 = 200;
    //    cout<<num1<<endl;
    //    cout<<*ptrNumber<<endl;

    int num1 = 10;
    int *const ptrNumber = &num1;
    // num1 = 50; //OK
    *ptrNumber = 50;
    printf("Num1 : %d\n", num1);       // 50
    printf("Num1 : %d\n", *ptrNumber); // 50: Dereferencing
    int num2 = 20;
    *ptrNumber = &num2; //Not OK
    return 0;
}