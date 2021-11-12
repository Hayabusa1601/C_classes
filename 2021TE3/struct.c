#include<stdio.h>

struct car_s{
  char name[50];
  char color[10];
  int age;
  double fuel;
};

int main(void) {
   struct car_s car[3] =
   {
     {"トレノAE86
