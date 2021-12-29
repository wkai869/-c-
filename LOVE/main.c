#include "stdio.h"
#include "math.h"

int main()
{
printf("\n");
 printf("\n");
 printf("\n");
 printf("\n");
 printf("                 I love you!!!\n");
 printf("                我这一生只爱你一个人，从前的车马都很慢，一生只够爱一个人。\n");
 float y, x, z, f;
 for (y = 1.5f; y > -1.5f; y -= 0.1f)
 {
  for (x = -1.5f; x < 1.5f; x += 0.05f)
  {
   z = x * x + y * y - 1;
   f = z * z*z - x * x*y*y*y;
   putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)] : ' ');
  }
  putchar('\n');
 }

 getchar();
  return 0;
}
