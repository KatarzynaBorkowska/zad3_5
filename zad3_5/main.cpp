//Katarzyna Borkowska 7 Y1S1
//zad 3_5

#include <iostream>
#include <string>
using namespace std;
void szyfr_Cezara(int klucz, char a[],char b[])
{
    int dl = strlen(a);
    if(!(klucz >= -26 && klucz <= 26)) return;
    
    if(klucz >= 0)
        for(int i=0;i<dl;i++)
        if(a[i] + klucz <= 'Z')
            a[i] += klucz;
        else
            a[i] = a[i] + klucz - 26;
    else
        for(int i=0;i<dl;i++)
        if(a[i] + klucz >= 'A')
            a[i] += klucz;
        else
            a[i] = a[i] + klucz + 26;
    
    for (int i = 0; i < dl; i++) {
        b[i] = a[i];
    }
}
void de_szyfr_Cezara(int n, char a[],char b[])
{
    szyfr_Cezara(-n,b,a);
}
int main()
{
    char a[1001],b[1001];
    
    int n;
    
    cout<<"Podaj wyraz składający się z dużych liter: ";
    cin>>a;
    
    cout<<"Podaj klucz z przedziału [-26..26]: ";
    cin>>n;
    
    szyfr_Cezara(n,a,b);
    
    cout<<"Po zaszyfrowaniu: "<<b<<endl;
    
    
    cout<<"Podaj klucz z przedziału do deszyfrowania [-26..26]: ";
    cin >> n;
    
    de_szyfr_Cezara(n,b,a);
    
    cout<<"Po rozszyfrowaniu: "<<a<<endl;

    return 0;
}
