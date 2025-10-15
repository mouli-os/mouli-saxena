
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int balance=5000; // initial balance
    int withdraw;
    cout<<"Enter withdrawal amount";
    cin>>withdraw;
    //Using conditional operator to check withdrawl
    (withdraw>balance)?cout<<"insufficient balance":cout<<"successfull"<<endl<<balance-withdraw;


    return 0;
}