#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX_ACCOUNT 100
#define MAX_PASSWORD_LENGTH 100
#define FILENAME "password.bin"

//XOR encryption key 
#define ENCRYPTION_KEY 123

struct Account{
    char name[50];
    char username[50];
    char password[MAX_PASSWORD_LENGTH];

};

void encrypt_decrypt(char *data){
    for(int i=0; data[i] != '\0'; i++){
        data[i] ^= ENCRYPTION_KEY;
    }
}

void save_to_file(struct Account accounts[], int account_count){
    FILE *file = fopen(FILENAME, "wb");
    if(!file){
        printf("Unable to save data !!\n");
        return;
    }
    for(int i=0; i<account_count; i++){
        encrypt_decrypt(accounts[i].password); //encrypt password before saving
        fwrite(&accounts[i], sizeof(struct Account), 1, file);
        encrypt_decrypt(accounts[i].password); //decrypt password after saving
    }
    fclose(file);
}

int load_from_file(struct Account accounts[]){
    FILE *file = fopen(FILENAME, "rb");
    if(!file){
        // printf("No data file found !!\n");
        return 0;
    }
    int count = 0;
    while(fread(&accounts[count], sizeof(struct Account), 1, file)==1){
        encrypt_decrypt(accounts[count].password); //decrypt password after reading
        count++;
    }
    fclose(file);
    return count; // Return the total number of accounts loaded
}

void add_account(struct Account accounts[], int *account_count){
    if(*account_count>=MAX_ACCOUNT){
        printf("ERROR : Account limit reached !!\n");
        return;
    }

    printf("Enter name : ");
    fgets(accounts[*account_count].name, sizeof(accounts[*account_count].name), stdin);
    strtok(accounts[*account_count].name, "\n");

    printf("Enter username : ");
    fgets(accounts[*account_count].username, sizeof(accounts[*account_count].username), stdin);
    strtok(accounts[*account_count].username, "\n");

    printf("Enter password : ");
    fgets(accounts[*account_count].password, sizeof(accounts[*account_count].password), stdin);
    strtok(accounts[*account_count].password, "\n");

    (*account_count)++;
    save_to_file(accounts, *account_count);
    printf("\nAccount added successfully !!\n");
}

void display_account(struct Account accounts[], int account_count){
    if(account_count==0){
        printf("\nNo account to search !!\n");
        return;
    }
    for(int i=0; i<account_count; i++){
        printf("\nName : %s\n",accounts[i].name);
        printf("Username : %s\n",accounts[i].username);
        printf("Password : %s\n",accounts[i].password);
    }
}

void search_account(struct Account accounts[], int account_count){
    if(account_count==0){
        printf("\nNo account found !!\n");
        return;
    }

    char search[50];
    printf("Enter name to search : ");
    fgets(search, sizeof(search), stdin);
    strtok(search, "\n");

    int found = 0;
    for(int i=0; i<account_count; i++){
        if(strcmp(search, accounts[i].name)==0){
            printf("\nAccount found !!\n");
            printf("Username : %s\n",accounts[i].username);
            printf("Password : %s\n",accounts[i].password);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("\nAccount not found !!\n");
    }
}

void generate_password(){
    int length;
    printf("Enter length of the password : ");
    scanf("%d",&length);
    getchar();

    if(length<6 || length>MAX_PASSWORD_LENGTH){
        printf("\nPassword length must be in between 6 and %d\n",MAX_PASSWORD_LENGTH);
        return;
    }

    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    char password[MAX_PASSWORD_LENGTH];
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % (sizeof(characters) - 1)];
    }
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
}

int authenticate(){
    char master_password[20] = "admin1234";
    char input[20];
    printf("Enter master password : ");
    fgets(input, sizeof(input), stdin);
    strtok(input, "\n");

    if(strcmp(input, master_password) != 0){
        printf("Authentication failed !!\n");
        return 0;
    }
    return 1;
}

int main(){
    struct Account accounts[MAX_ACCOUNT];
    int account_count = load_from_file(accounts);

    if(!authenticate()){
        return 0;
    }

    int choice=0;
    printf("\n\n                  PASSWORD MANAGER                        ");
    do{
        printf("\n<---------------------------------------------------------->\n");
        printf("\n1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Generate password\n");
        printf("5. Exit\n");
        printf("Choose any one option -> ");
        scanf("%d",&choice);
        getchar();
        switch (choice){
            case 1:
                add_account(accounts, &account_count);
                break;
            case 2:
                display_account(accounts, account_count);
                break;
            case 3:
                search_account(accounts, account_count);
                break;
            case 4:
                generate_password();
                break;
            case 5:
                printf("Exiting Password Manager. Stay secure...!!\n");
                break;
            
            default:
                printf("Invalid option. Try again.\n");
        }
    }while(choice != 5);
    
    return 0;
}