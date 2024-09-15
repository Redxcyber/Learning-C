#include<stdio.h>
int main(){
    
    //array declaration
    int arr1[5];

    //      formula to calculate address of any element of array 
    //------------------------------------------------------------------------
    // address of element arr[k] = BA(arr) + w(k - lower_bound)
    // k = element's index whose address we want to calculate
    // BA = base address of array arr. that is address of first element of array
    // w = word size i.e size of element ex- int 4 byte, float 6 byte
    // lower_bound = index of first element in the array
    


    //array initialisation at the time of declaration
    int arr2[5] = {1,2,3,4,5};

    //array initialisation by taking values from user using loop
    int arr3[5];
    for(int i=0; i<5; i++){
        printf("Enter element number %d = ",i+1);
        scanf("%d", &arr3[i]);
    }

    //array initialisation by assigning value to individual element
    int arr4[3];
    arr4[0] = 34;
    arr4[1] = 25;
    arr4[2] = 45;

    //printing or accessing all elements of the array
    for(int i=0; i<5; i++){
        printf("%d ",arr3[i]);
    }

    //we cant assign an array to another array, even if they are of same type and have same size, but we can copy an array to another array 
    int arr5[5], arr6[5];

    printf("\nwe are taking element from user for copying array\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr5[i]);
    }

    for(int i=0; i<5; i++){
        arr6[i] = arr5[i];
    }

    printf("\nwe are printing array5 : ");
    for(int i=0; i<5; i++){
        printf("%d ",arr5[i]);
    }

    printf("\nwe are printing array6 : ");
    for(int i=0; i<5; i++){
        printf("%d ",arr6[i]);
    }
    printf("\n\n");


    //            OPERATIONS ON ARRAYS
    //------------------------------------------------
    // 1 Traversing an array
    // 2. Inserting an element in an array
    // 3. Deleting an element from an array
    // 4. Merging two arrays
    // 5. Searching an element in an array
    // 6. Sorting an array in ascending and descending order



    
    // TRAVERSING AN ARRAY - it means accessing each every element of the array for a specific purpose
    //--------------------------------------------------------------------------------------------------------

    //QUES = take marks of 10 students and find total no of students who have secured 80 or more marks , find the roll number(indices) and marks of all students who have got below 60 marks

    int marks[10];
    int above80=0, below60=0;

    for(int i=0; i<10; i++){
        printf("Enter marks of student %d = ",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i=0; i<10; i++){
        if(marks[i]>=80){
            above80++;
        }
    }
    printf("\nstudents have 80 or more marks = %d",above80);

    for(int i=0; i<10; i++){
        if(marks[i]<=60){
            printf("\nRoll number = %d , Marks = %d",i+1,marks[i]);
        }
    }


    // More programs of traversing
    // 12 , 










    return 0;
}