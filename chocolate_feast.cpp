#include <iostream>
using namespace std;
 
 // recursive function to count the number of chocolates
 //through wrappers
int chocolate(int x, int p)
{ int wrap =x;  int choco =0;
   if( wrap < p )
    return choco;
    choco += x/p;  
    wrap = (x/p+ x%p);
    return (choco + chocolate(wrap, p));

}
int main()
{
int t; //test cases
cin>>t;

while(t--)
{
int n, m,p;
cin>>n>>m>>p;
int x= n/m; //no of chocolates obtained by amount available
cout<<(x + chocolate(x, p))<<endl;
}

return 0;
}
