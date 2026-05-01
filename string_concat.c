// #include <stdio.h>
// int main()
// {
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     int length_a = strlen(b);
//     int length_b = strlen(b);
//     for (int i = 0; i <=length_b; i++)
//     {
//         a[i+length_a] = b[i];
//     }
// printf("%s %s",a,b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
  strcat(a,b);
printf("%s %s",a,b);
    return 0;
}