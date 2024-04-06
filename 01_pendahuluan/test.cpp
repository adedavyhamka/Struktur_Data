#include <iostream>
/// @brief 
/// @param n 
/// @return 
int fibo(int n)
{
if(n==0) return 0; else if(n==1) return 1; else
//fungsi rekursif
return fibo(n-1)+fibo(n-2);
}
int main()
{ clrscr(); int bil;
cout<<"\nFungsi Rekursif untuk mencari deret Fibonacci"<
cout<<"\nDeret Fibonacci hingga suku ke-n = "; cin>>bil;
for (int n=0;n<=bil;n++)
cout<

getche(); return 0;
}