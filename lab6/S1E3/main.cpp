#include <iostream>
#include <string.h>

using namespace std;

void strcat_pointer(char *s, char *t){
int n,n1,i;
n=strlen(t);
while(*t)
    *s++;
n1=strlen(s);
for(i=n1;i>=n;i--)
    s[i]=t[i];}

int main()

{
    char s[100],t[100];
    cin.get(s,100);
    cin.get(t,100);
    strcat_pointer(s,t);
    cout<<s;
    return 0;
}
