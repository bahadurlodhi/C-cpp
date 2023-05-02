#include<stdio.h>
#include<stdlib.h>

int main() {
    int queue[20], head, max, qsize, temp, sum = 0, traversed = 0, i, j, left, right;
    float avg;

    printf("Enter the maximum number of disk cylinders: ");
    scanf("%d", &max);
    printf("Enter the size of queue requests: ");
    scanf("%d", &qsize);
    printf("Enter the initial position of the disk head: ");
    scanf("%d", &head);
    printf("Enter the cylinder number for each request in the queue:\n");
    for (i = 0; i < qsize; i++) {
        scanf("%d", &queue[i]);
    }

   
    queue[qsize] = head;
    qsize++;

    for (i = 0; i < qsize; i++) {
        for (j = i + 1; j < qsize; j++) {
            if (queue[i] > queue[j]) {
                temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }

 
    for (i = 0; i < qsize; i++) {
        if (head == queue[i]) {
            break;
        }
    }

    left = i - 1;
    right = i + 1;
    while (left >= 0) {
        printf("%d --> ", queue[left]);
        sum += abs(queue[left] - head);
        head = queue[left];
        left--;
        traversed++;
    }
    while (right < qsize) {
        printf("%d --> ", queue[right]);
        sum += abs(queue[right] - head);
        head = queue[right];
        right++;
        traversed++;
    }

    avg = (float)sum / traversed;
    printf("\nTotal head movements: %d\n", sum);
    printf("Average head movement: %.2f\n", avg);

    return 0;
}
