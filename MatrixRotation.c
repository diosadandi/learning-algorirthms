#include<stdio.h>


int main(){
    /* Variable declarations */
    int i,j;
    int matrix[20][20];
    int steps;
    char choice;
    int choiceNum = 1, temp;
    int r,c;
    
    /* Take inputs from user */
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter \'r\' for row rotation and \'c\' for column rotation. Also enter the preferred row/col number (starting 1): ");
    scanf("%c",&choice);/* Shit load of edits required. I'll probably do it tomorrow. */
    scanf("%d",&choiceNum);
    printf("Enter no. of rotations to be applied: ");
    scanf("%d",&steps);
    printf("Enter matrix elements: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    /* Output before applying rotation */
    printf("\nBefore rotation:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    /* Rotation logics */
    printf("\nAfter rotation:\n");
    choiceNum -= 1;
    // choiceNum %= n;
    switch(choice){
        case 'r':
            choiceNum %= r;
            temp = matrix[choiceNum][0];
            for(i=1;i<r;i++){
                matrix[choiceNum][i-1] = matrix[choiceNum][i];
            }
            matrix[choiceNum][r-1] = temp;
            break;
        case 'c':
            choiceNum %= c;
            temp = matrix[0][choiceNum];
            for(i=1;i<c;i++){
                matrix[i-1][choiceNum] = matrix[i][choiceNum];
            }
            matrix[c-1][choiceNum] = temp;
            break;
        default: 
            printf("\nInvalid choice. 0 rotations.");
            break;
    }

    /* Display of output */
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}