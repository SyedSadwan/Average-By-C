#include <stdio.h>
int main() {
int n, i;
float num[100], sum = 0.0, average;
printf("Enter number of elements: ");
scanf("%d", &n);
// Verify limit of elements within 100
while(n < 1 || n > 100){
    printf("Invalid number of elements. Try again: ");
    scanf("%d", &n);
}
// Determine number of loops to be executed
printf("Enter %d numbers:\n", n);
for (i=0; i < n; ++i){
    scanf("%f", &num[i]);
    sum += num[i];
}
average = sum/n;
printf("Average is: %f", average);

return 0;





}
