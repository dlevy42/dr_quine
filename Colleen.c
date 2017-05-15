#include <stdio.h>
/*
commentaire1
*/
void f(){}
int main(){
/*
commentaire2
*/
char*a="#include <stdio.h>%c/*%ccommentaire1%c*/%cvoid f(){}%cint main(){%c/*%ccommentaire2%c*/%cchar*a=%c%s%c;f();printf(a, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, a, 34, 10);return 0;}%c";f();printf(a, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, a, 34, 10);return 0;}
