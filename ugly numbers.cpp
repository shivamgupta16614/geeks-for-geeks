#include <iostream>
using namespace std;
unsigned long a[10000];
int md(unsigned long long a, int b)
{
  while (a%b == 0)
   a = a/b;
  return a;
}
int check(unsigned long long i){
i=md(i,2);
i=md(i,3);
i=md(i,5);
 if(i==1){return 1;}
 else return 0;}


int main(){

long n=0;
a[0]=1;
unsigned long long x,i;
i=2;
n=1;
while(n<1000){

x=i;
    if(check(x)==1){cout<<n;
            cout<<a[n-1]<<endl;a[n]=i;n++;}
    i++;
}

}
