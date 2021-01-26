#include <stdio.h>
#include <string.h>
main( )
{char a[10]="abc",b[10]="012",c[10]="xyz";
strcpy(a+1,b+2);
puts(strcat(a,c+1));
}
