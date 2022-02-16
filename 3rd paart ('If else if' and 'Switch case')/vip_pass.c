#include <stdio.h>
int main()
{
  int vippass;

  int a;
  printf("Enter your age : \n");
  scanf("%d", &a);
  if ((a >= 18 && a <= 70) || vippass)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, no value is assigned, to vip, and didn't put '!' in front of vippass. \n");

  int i;
  printf("Enter your age : \n");
  scanf("%d", &i);
  if ((i >= 18 && i <= 70) || !vippass)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, no value is assigned, to vip, put '!' in front of vippass. \n");

  int b;
  vippass = 0;
  //vippass = 1;
  printf("Enter your age : \n");
  scanf("%d", &b);
  if ((b >= 18 && b <= 70) || vippass)
  {
    printf("You can drive. \n");
  }

  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the value is assigned to vip is zero but didn't checked equality for zero in if, and so the vip doesn't work, because zero is taken to be false in the c language. \n");

  int c;
  vippass = 0;
  //vippass = 1;
  printf("Enter your age : \n");
  scanf("%d", &c);
  if ((c >= 18 && c <= 70) || vippass == 0)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the value is assigned to vip is zero, and also checked the equality in the if. \n");

  int d;
  //vippass = 0;
  vippass = 2;
  printf("Enter your age : \n");
  scanf("%d", &d);
  if ((d >= 18 && d <= 70) || vippass)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the value assigned to vip is 2, but didn't checked equality in if, though vip is working well, because in c when the variable is assigned non zero entity, c take it as a true. \n");

  int e;
  //vippass = 0;
  vippass = 2;
  printf("Enter your age : \n");
  scanf("%d", &e);
  if ((e >= 18 && e <= 70) || vippass == 1)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the value assigned to vip is 2, but checked equality in if for 1, so vip is not working well. \n");

  int f;
  vippass = 0;
  vippass = 1;
  printf("Enter your age : \n");
  scanf("%d", &f);
  if ((f >= 18 && f <= 70))
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the first value we assigned to the vip is 0 and after is 1, and didn't checked the equality in if, though vip works well, which is the characteristic of c language which is to exicute the programme from top to bottom. \n");

  int g;
  char vippasss = c;
  //vippass = 1;
  printf("Enter your age : \n");
  scanf("%d", &g);
  if ((g >= 18 && g <= 70) || vippasss)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here,  the vip is assigned as a character, and its non zero, didn't checked the equality, though it worked properly. \n");

  int h;
  char vippassss = c;
  //vippass = 1;
  printf("Enter your age : \n");
  scanf("%d", &h);
  if ((h >= 18 && h <= 70) || !vippassss)
  {
    printf("You can drive. \n");
  }
  else
  {
    printf("You cannot drive. \n");
  }
  printf("Here, the vip is assigned as a character, and its non zero, didn't checked the equality, applied not operator, so it doesn't work properly. \n");

  return 0;
}