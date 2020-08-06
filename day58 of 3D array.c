#include <stdio.h>
int main()
{
  char a[2][3][3] = {
                      {
                       {'#','S','H'},
                       {'I','V','A'},
                       {'M','C','D'},
          
                      },
                      {
                       {'A','C'},
                      }
                    };
  printf("%s\t %s\t %s\t %s\t %s\t  %c\t", a, a+1, **a,*(*(a+0)+0), *(*(a+1)+0),*(*(*(a+0)+1)+1));
  return 0;
}
