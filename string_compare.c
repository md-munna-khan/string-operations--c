// #include <stdio.h>

// int main()
// {
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     int i = 0;
//     while (1)
//     {
//         if (i[a] == '\0' && b[i] == '\0')
//         {
//             printf("equal");
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("a is smaller");
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("b is smaller");
//             break;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("a is smaller");
//             break;
//         }
//         else if (a[i] > b[i])
//         {
//             printf("b is smaller");
//             break;
//         }
//         else if (a[i] == b[i])
//         {
//           i++;
//         }
//     }

//     return 0;
// }

// second way 
// #include <stdio.h>

// int main()
// {
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     printf("%d",strcmp(a,b));

//     return 0;
// }

// thrid way
#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
 int val=strcmp(a,b);
 if(val<0){
    printf("a is smaller");
 }else if(val==0){
       printf("equal");
       } else if(val>0){
       printf("B is smaller");
 }}
 
 

 

    
