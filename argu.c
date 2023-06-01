#include <stdio.h>
void funcl(int u, int v);                     /* prototipo de función */
void func2(int *pu, int *pv);                 /* prototipo de función */

int main()
{
    int u = 1;
    int v = 3;
    printf("\nAntes de la llamada a func1: u=%d  v=%d", u, v);
    func1(u, v);
    printf("\nDespués de la llamada a func1: u=%d  v=%d", u, v);

    printf("\n\nAntes de la llamada a func2: u=%d  v=%d", u, v);
    func2(&u, &v);
}
void funcl(int u, int v)
{
    u = 0;
    v = 0;
    printf (" \nDentro de func1:             u=%d  v=%d", u, v);
    return;
}
void func2(int *pu, int *pv)
{
    *pu = 0;
    *pv = 0;
    printf (" \nDentro de func2:             *pu=%d *pv=%d", *pu,*pv);
    return;
}