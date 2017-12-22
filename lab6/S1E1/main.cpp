#include <iostream>
#include <string.h>

using namespace std;

char strcpy_array(char a[], char s[])
{
    int i,n;
    n=strlen(s);
    for(i=0;i<=n;i++)
        a[i]=s[i];
    return *a;
}

 char strcpy_pointer(char a[], char s[])
 {

    *a=*s;
    return *a;
 }
int main(){
    char a[100], s[100];
    cin.get(s,100);
    strcpy_array(a,s);
    cout<<a<<endl;
    strcpy_pointer(a,s);
    cout<<a;
    return 0;

}
