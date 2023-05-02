#include<stdio.h>

#include<stdlib.h>

int main() {

  int queue[20]={ 122,47,14,98,72,132,149,158};
  int noOfCylinders, headPos, n;
  int direction;
  int arrayDiv;
  int seekTime = 0;

  //printf("How many Processes : ");
  //scanf("%d", &n);

  // for (int i = 0; i < n; i++) {
  //   scanf("%d", &queue[i]);
  // }

  // printf("Enter current position of head : ");
   //  scanf("%d", &headPos);

  //  printf("Enter number of cylinders : ");
  // scanf("%d", &noOfCylinders);

  // printf("Enter the direction : ");
  //  scanf("%d", &direction);
  // queue[]= { 122,47,14,98,72,132,149,158};

  noOfCylinders=200;
  direction=1;
  headPos=53;
  n=8;

  for (int i = 0; i < n; i++) {

    for (int j = i + 1; j < n; j++) {

      if (queue[i] > queue[j]) {
        int temp = queue[i];
        queue[i] = queue[j];
        queue[j] = temp;
      }
    }

  }

  //for divided array

  for (int i = 0; i < n; i++) {

    if (headPos < queue[i]) {
      arrayDiv = i;
      break;
    }

  }

  

  if (direction == 0) {
    
    printf("Seek Sequence is  : ");

    for (int i = arrayDiv - 1; i >= 0; i--) {

     
      seekTime += abs(headPos - queue[i]);
      printf("%d ",queue[i]);
      headPos = queue[i];

         

    }

    headPos = 0;
    printf("%d ",0);
    seekTime+=abs(queue[0]);

    for (int i = arrayDiv; i < n; i++) {

      seekTime += abs(headPos - queue[i]);
      printf("%d ",queue[i]);
      headPos = queue[i];

    }

  } else {
   
   printf("Seek Sequence is : ");
    for (int i = arrayDiv; i < n; i++) {

      seekTime += abs(headPos - queue[i]);
      printf("%d ",  queue[i]);
      headPos = queue[i];

    }

    headPos = noOfCylinders - 1;
    seekTime += abs(headPos - queue[n - 1]);
    printf("%d ", (noOfCylinders-1));

    for (int i = arrayDiv - 1; i >= 0; i--) {

      

      seekTime += abs(headPos - queue[i]);
      printf("%d ",queue[i]);
      headPos = queue[i];

           

    }

  }

  printf("\nTotal Seek time is : %d ", seekTime);


return 0;
}