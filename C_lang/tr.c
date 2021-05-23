#include <stdio.h>
int main() {
char *ptr = "MyCaptain";
printf("%cn", *&*&*ptr); 
return 0;
}