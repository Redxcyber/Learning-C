#include<stdio.h>
#include<string.h>
#define MAX_CONTACT 100
struct contact{
    char name[50];
    char phone[15];
    char email[50];
};
void add_contact(struct contact contacts[], int *contactCount){
    printf("Enter name : ");
    fgets(contacts[*contactCount].name, sizeof(contacts[*contactCount].name), stdin);
    strtok(contacts[*contactCount].name, "\n");
    printf("Enter phone number : ");
    fgets(contacts[*contactCount].phone, sizeof(contacts[*contactCount].phone), stdin);
    strtok(contacts[*contactCount].phone, "\n");
    printf("Enter email : ");
    fgets(contacts[*contactCount].email, sizeof(contacts[*contactCount].email), stdin);
    strtok(contacts[*contactCount].email, "\n");
    (*contactCount)++;
}
void display_contact(struct contact contacts[], int contactCount){
    if (contactCount == 0) {
        printf("\nNo contact to display...!\n");
        return;
    }
    for(int i=0; i<contactCount; i++){
        printf("\nName : %s\n",contacts[i].name);
        printf("Phone : %s\n",contacts[i].phone);
        printf("Email : %s\n",contacts[i].email);
    }
}
void search_contact(struct contact contacts[], int contactCount){
    char search_name[50];
    if (contactCount == 0) {
        printf("\nNo contact to search...!\n");
        return;
    }
    printf("Enter name to search : ");
    fgets(search_name, sizeof(search_name), stdin);
    strtok(search_name, "\n");
    int flag=0;
    for(int i=0; i<contactCount; i++){
        if(strcmp(contacts[i].name, search_name)==0){
            flag++;
            printf("\nContact found....!!\n");
            printf("\nName : %s\n",contacts[i].name);
            printf("Phone : %s\n",contacts[i].phone);
            printf("Email : %s\n",contacts[i].email);
            break;
        }
    }
    if(flag==0){
        printf("\nContact not found....!\n");
    }
    return;
}
void delete_contact(struct contact contacts[], int *contactCount){
    char delete_name[50];
    if (*contactCount == 0) {
        printf("\nNo contact to delete...!\n");
        return;
    }
    printf("Enter name to delete : ");
    fgets(delete_name, sizeof(delete_name), stdin);
    strtok(delete_name, "\n");
    int flag=0;
    for(int i=0; i<*contactCount; i++){
        if(strcmp(contacts[i].name, delete_name)==0){
            flag++;
            for(int j=i; j<*contactCount-1; j++){
                contacts[j] = contacts[j+1];
            }
            (*contactCount)--;
            printf("\nContact deleted successfully......!\n");
            break;
        }
    }
    if(flag==0){
        printf("\nContact not found....!\n");
    }
    return;
}
void edit_contact(struct contact contacts[], int contactCount){
    char edit_name[50];
    if (contactCount == 0) {
        printf("\nNo contact to edit...!\n");
        return;
    }
    printf("Enter name whose info you wanna edit : ");
    fgets(edit_name, sizeof(edit_name), stdin);
    strtok(edit_name, "\n");
    int flag=0;
    for(int i=0; i<contactCount; i++){
        if(strcmp(contacts[i].name, edit_name)==0){
            flag++;
            char new_phone[50];
            char new_email[50];
            printf("Enter new phone number : ");
            fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
            strtok(contacts[i].phone, "\n");
            printf("Enter new email : ");
            fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
            strtok(contacts[i].email, "\n");
            printf("\nContact edited successfully......!\n");
            break;
        }
    }
    if(flag==0){
        printf("\nContact not found....!\n");
    }
    return;
}
int main(){
    struct contact contacts[MAX_CONTACT];
    int contactCount=0;
    int choice;
    do{
        printf("\n-------------------------------------------\n");
        printf("1. Add contact\n");
        printf("2. Display contacts\n");
        printf("3. Search contact\n");
        printf("4. Delete contact\n");
        printf("5. Edit contact\n");
        printf("6. Exit\n");
        printf("Choose an option  : ");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
                add_contact(contacts, &contactCount);
                break;
            case 2:
                display_contact(contacts, contactCount);
                break;
            case 3:
                search_contact(contacts, contactCount);
                break;
            case 4:
                delete_contact(contacts, &contactCount);
                break;
            case 5:
                edit_contact(contacts, contactCount);
                break;
            case 6:
                printf("\nExiting............BYE BYE !!\n");
                break;
            default :
                printf("\ninvalid option, choose correct option\n");
        }
    }while(choice != 6);

    return 0;
}