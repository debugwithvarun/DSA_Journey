#include <iostream>
using namespace std;

int main()
{
    cout<<"pattern 1"<<endl;
    /* pattern 1
    1111
    2222
    3333
    4444
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= 4; j++)
       {
           cout << i;
        }
        cout << endl;
    }
    
    cout<<"pattern 2"<<endl;
    /* pattern 2
    *
    **
    ***
    ****
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout << "*";
        }
        cout << endl;
    }
    
    cout<<"pattern 3"<<endl;
    /* pattern 3
    ****
    ***
    **
    *
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 4; j >= i; j--)
       {
           cout << "*";
        }
        cout << endl;
    }

    cout<<"pattern 4"<<endl;
    /* pattern 4
    1
    12
    123
    1234
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout<<"pattern 5"<<endl;
    /* pattern 5
    A
    BC
    DEF
    GHIJ
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout << (char)('A'+i+j-2);
        }
        cout << endl;
    }
    cout<<"pattern 6"<<endl;
    /* pattern 6
    *****
    *   *
    *   *
    *****
    */
   for (int i = 1; i <= 4; i++)
   {
       cout<<"*";
       for (int j = 1; j <= 3; j++)
       {
           if(i==1 || i==4){
               cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<"*"<<endl;
        cout << endl;
    }
    cout<<"pattern 7"<<endl;
    /* pattern 7
    *
    **
    ***
    ****
    */
   for (int i = 1; i <= 4; i++)
   {
       
       for (int j = 1; j <= 3; j++)
       {
           if(j>=4-i+1){
               cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<"*"<<endl;
        cout << endl;
    }
    
    
    cout<<"pattern 8"<<endl;
    /* pattern 8
    1
    23
    456
    78910
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout << 1+i+j-2;
        }
        cout << endl;
    }

    cout<<"pattern 9"<<endl;
    /* pattern 9
    *
    ***
    *****
    *******
    *******
    *****
    ***
    *
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= (4-i); j++)
       {
           cout << ' ';
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<'*';
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= (4-i); j++)
        {
            cout << ' ';
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<'*';
        }
        cout << endl;
    }
    
    cout<<"pattern 10"<<endl;
    /* pattern 10
        *      *
        **    **
        ***  ***
        ********
        ********
        ***  ***
        **    **
        *      *
    */
   const int n=4;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            for(int j=1;j<=((n*2)-(2*i));j++){
                cout<<' ';
            }
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
   
        cout<<endl;
    }
    for(int i=4;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
            for(int j=1;j<=((n*2)-(2*i));j++){
                cout<<' ';
            }
            for(int j=1;j<=i;j++){
                cout<<'*';
            }
   
        cout<<endl;
    }
    return 0;
}
