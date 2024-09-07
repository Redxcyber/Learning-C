// given an array of marks of students, if the marks of any student is less than 35 print its roll no (roll no means index no)

#include<stdio.h>
int main(){
    int marks[10] = {23,87,65,33,82,98,77,27,67,45};
    int length = sizeof(marks)/sizeof(marks[0]);
    for(int i=0; i<length; i++){
        if(marks[i]<35){
            printf("roll no = %d\n",i);
        }
    }
    return 0;
}