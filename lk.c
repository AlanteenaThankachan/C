#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
} *head = NULL, *ptr, *ptr1, *ptr2, *temp;
void insertion() {
    temp = (struct node *) malloc (sizeof(struct node));
    if (temp == NULL)
        printf("Overflow Error \n");
    else if (head == NULL) {
        printf("Enter the element to be inserted: ");
        scanf("%d", &temp->data);
        temp->link = NULL;
        head = temp;
    }
    else {
        int pos;
        printf("Choose where to insert new element: \n 1. Insert at Front \n 2. Insert at End \n 3. Insert at Random Position -\n ");
        scanf("%d",&pos);
        if (pos == 1) {
            printf("Enter the element to be inserted: ");
            scanf("%d", &temp->data);
            temp->link = head;
            head = temp;
        }
        else if (pos == 2) {
            ptr = head;
            while (ptr->link != NULL) 
                ptr = ptr->link;
            ptr->link = temp;
            printf("Enter the element to be inserted: ");
            scanf("%d", &temp->data);
            temp->link = NULL;
        }
        else if (pos == 3) {
            int key;
            printf("Enter the element after which new node is to be inserted: ");
            scanf("%d", &key);
            ptr1 = head;
            ptr2 = ptr1->link;
            while ((ptr1->data != key) && (ptr2->link != NULL)) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            if (ptr1->data == key) {
                printf("Enter the element to be inserted: ");
                scanf("%d", &temp->data);
                temp->link = ptr2;
                ptr1->link = temp;
            }
            else
                printf("Element not found in linked list! \n");
        }
        else
            printf("Invalid Input! \n");
} }
void deletion() {
    if (head == NULL)
        printf("Underflow Error! \n");
    else if (head->link == NULL) {
        ptr = head;
        printf("Deleted element is %d \n", ptr->data);
        head = NULL;
        free(ptr);
    }
    else {
        int pos;
        printf("Choose from where to delete element: \n 1. Delete from Front \n 2. Delete from End \n 3. Delete from Random Position - \n");
        scanf("%d",&pos);
        if (pos == 1) {
            ptr = head;
            printf("Deleted element is %d \n", ptr->data);
            head = ptr->link;
            free(ptr);
        }
        else if (pos == 2) {
            ptr1 = head;
            ptr2 = ptr1->link;
            while (ptr2->link != NULL) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            printf("Deleted element is %d \n", ptr2->data);
            ptr1->link = NULL;
            free(ptr2);
        }
        else if (pos == 3) {
            int key;
            printf("Enter the element whose node is to be deleted: ");
            scanf("%d", &key);
            ptr1 = head;
            ptr2 = ptr1->link;
            while ((ptr2->data != key) && (ptr2->link != NULL)) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            if (ptr2->data == key) {
                printf("Deleted element is %d \n", ptr2->data);
                ptr1->link = ptr2->link;
                free(ptr2);
            }
            else
                printf("Element not found in linked list! \n");
        }
        else
            printf("Invalid Input! \n");
} }
void display() {
    if (head == NULL)
        printf("Linked List Empty! \n");
    else {
        printf("Given linked list is: \n");
        ptr = head;
        while (ptr != NULL) {
            printf("%d \t",ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
} }
void main() {
    int choice;
    while (choice != 4) {
        printf("\nEnter Operation to Perform on Linked List:  \n 1.Insertion \n 2. Deletion  \n3. Display  \n4.Exit - \n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Successfully exited from the program");
                break;
            default:
                printf("Invalid Input! \n");
                break;
} } }
	

