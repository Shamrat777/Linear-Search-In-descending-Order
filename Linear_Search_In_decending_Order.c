#include<stdio.h>
int main(){
int i, j, a, element,search, array[100];
printf("how much element you want to input in array\n");
scanf("%d",&element);
if(element!=0){
printf("Enter the %d integer number\n",element);
for(i=0; i<element ; i++){
    scanf("%d",&array[i]);
    }


for (i = 0; i < element; i++)
{
for (j = i + 1; j < element; j++)
{
if (array[i] < array[j])
 {
a =  array[i];
array[i] = array[j];
array[j] = a;
}
}
 }
printf("The numbers arranged in ascending order are given below \n");
for (i = 0; i < element; ++i){
printf("%d\n", array[i]);
}//end of ascending order code

printf("Enter the number you want to search\n");
scanf("%d",&search);
 for(i=0;i<element;i++){
    if(array[i]== search){
        printf("your searched value %d is at index number : [%d]",search,i);
        break;
    }

 }
    if(i==element){
    printf("your searched element %d is not exist in array\n",search);
    }
}
if(element==0){
    printf("You entered null value");

}
}


