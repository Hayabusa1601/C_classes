#include<stdio.h>

struct xyz {
  int x;
  long y;
  double z;
};

struct xyz scan_xyz() {
  struct xyz re_xyz;

  printf("整数を入力：");
  scanf("%d", &re_xyz.x);
  
  printf("整数を入力：");
  scanf("%ld", &re_xyz.y);
  
  printf("整数を入力：");
  scanf("%lf", &re_xyz.z);

  return re_xyz;
}

int main(void) {
 
  struct xyz p_xyz;
  p_xyz = scan_xyz();

  printf("x = %d\n", p_xyz.x);
  printf("y = %ld\n", p_xyz.y);
  printf("z = %lf\n", p_xyz.z);

  return 0;

}




