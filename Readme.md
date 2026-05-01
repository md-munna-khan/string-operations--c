# string operations 

## 11-1 String copy

```c
#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
   int length=strlen(b);
   for (int i = 0; i <=length; i++)
   {
  a[i]=b[i];
   }
   printf("%s %s",a,b);
    return 0;
}
```

## 11-3 String copy using strcpy

```c
#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
  strcpy(a,b);
   printf("%s %s",a,b);
    return 0;
}
```

## 11-4 String concat

```c
#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int length_a = strlen(b);
    int length_b = strlen(b);
    for (int i = 0; i <=length_b; i++)
    {
        a[i+length_a] = b[i];
    }
printf("%s %s",a,b);
    return 0;
}
```

## 11-6 String concat with strcat

```c
#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
  strcat(a,b);
printf("%s %s",a,b);
    return 0;
}
```