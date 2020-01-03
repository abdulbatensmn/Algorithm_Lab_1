#include <stdio.h>
#define max 10
void selectionSortAscMin(int A[]);
void selectionSortDescMin(int A[]);
void selectionSortAscMax(int A[]);
void selectionSortDescMax(int A[]);
void display(int A[]);

void main(){
    int A[max] = {61,24,13,50,31,14,55,89,66,78};

    printf("\nUnsorted Array\n");
    display(A);
    selectionSortAscMin(A);
    printf("\nSorted Array In Ascending Order Using Minimum\n");
    display(A);

    int B[max] = {61,24,13,50,31,14,55,89,66,78};
    selectionSortDescMin(B);
    printf("\nSorted Array In Descending Order Using Minimum\n");
    display(B);

    int C[max] = {61,24,13,50,31,14,55,89,66,78};
    selectionSortAscMax(C);
    printf("\nSorted Array In Ascending Order Using Maximum\n");
    display(C);

    int D[max] = {61,24,13,50,31,14,55,89,66,78};
    selectionSortDescMax(D);
    printf("\nSorted Array In Descending Order Using Maximum\n");
    display(D);
}

void selectionSortAscMin(int A[]){
    int i,j,min_index,temp;
    for(i=0;i<max-1;i++){
        min_index = i;
        for(j=i+1;j<max;j++){
            if(A[j]<A[min_index])
                min_index=j;
        }
        if(i!=min_index){
            temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }
}
void selectionSortDescMin(int A[]){
    int i,j,min_index,temp;
    for(i=max-1;i>0;i--){
        min_index = i;
        for(j=i-1;j>=0;j--){
            if(A[j]<A[min_index])
                min_index=j;
        }
        if(i!=min_index){
            temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }
}

void selectionSortAscMax(int A[]){
    int i,j,max_index,temp;
    for(i=max-1;i>0;i--){
        max_index = i;
        for(j=i-1;j>=0;j--){
            if(A[j]>A[max_index])
                max_index=j;
        }
        if(i!=max_index){
            temp = A[i];
            A[i] = A[max_index];
            A[max_index] = temp;
        }
    }
}

void selectionSortDescMax(int A[]){
    int i,j,max_index,temp;
    for(i=0;i<max-1;i++){
        max_index = i;
        for(j=i+1;j<max;j++){
            if(A[j]>A[max_index])
                max_index=j;
        }
        if(i!=max_index){
            temp = A[i];
            A[i] = A[max_index];
            A[max_index] = temp;
        }
    }
}

void display(int A[]){
    int i;
    for(i=0;i<max;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
