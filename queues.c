#include<stdio.h>
#define max 6
int q[max];int front=-1;int rear=-1;
void enqueue(int x)
{
  if(rear==max-1){
    printf("queue overflow");
  }
  else{

    if(front==-1)
    front=0;
  }
  rear++;
  q[rear]=x;
}

void dequeue(){
 if(front==-1){
  printf("queue underflow");
 }
 else{
  printf("deleted%d",q[front]);

 if(front==rear)
  front=rear=-1;
 else
  front++;
 }
}
 void display(){
 int i;
 if(front==-1){
  printf("queue empty");
 }
 else {
  for(i=front;i<=rear;i++)
    printf("%d",q[i]);
 }
 }
 int main(){
 int choice, value;
  while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

