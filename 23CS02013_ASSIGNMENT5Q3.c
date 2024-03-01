#include <stdio.h>
int main()
{
int a;
int num[4]; 
printf("Enter a four digit number: ");
scanf("%d", &a);
for(int i = 3; i >= 0; i--)
{
num[i] = a % 10;
a = a / 10;
}
 for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 4; j++)
{
for (int k = 0; k < 4; k++)                
{
for (int l = 0; l < 4; l++)
 {
 if ((num[i] != num[j] && num[i] != num[k] && num[i] != num[l] && num[j] != num[k] && num[j] != num[l] && num[k] != num[l]))
printf("%d%d%d%d\n", num[i], num[k], num[l], num[j]);
 }}}}
return 0;
}
   
   