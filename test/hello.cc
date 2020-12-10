#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    char aa[20] = "asd123";
    char* bb = new char[20];
   // bb = aa;
    string sbb;
    strcpy(sbb.GetBuffer(), aa);
    int *p1 = new int[10];
    delete[] p1;
    return 0;
}
