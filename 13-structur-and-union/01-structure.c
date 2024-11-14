#include<stdio.h>

//structure declaration M-01
struct student{
    char name[50];
    int roll;
    float age;
};

//structure declaration M-02
struct teacher{
    char name[50];
    float age;
}t1;

//structure declaration M-03
typedef struct labour{
    char name[50];
    float age;
}labour;


int main(){
    //variable declaration of M-01
    struct student s1, s2;
    
    //variable declaration of M-03
    labour l1, l2;

    //structure initialisation
    labour l3 = {"rahul", 65.4};
    printf("%s\n",l3.name);

    //copying value from one varibale to another of same type
    l2 = l3;
    printf("%s\n",l2.name);

    //comparing two structure is not allowed in c, individual members of structure can be compared
    printf("%d\n",l2.age == l3.age);
    printf("%d\n",l2.age > l3.age);



    return 0;
}