#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    
    printf("\nMenu:\n");
    printf("1. Input integers using malloc\n");
    printf("2. Input integers using calloc\n");
    printf("3. Input integers using realloc\n");
    printf("4. Input characters using calloc\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            int nb;
            printf("Enter how many elements you want: ");
            scanf("%d", &nb);
        
            int *ptr = (int *)malloc(nb * sizeof(int));
        
            if (ptr != NULL) {
                printf("Memory allocated at: [%p]\n",ptr);
            } else {
                printf("Memory is not allocated\n");
            }
        
        
        for(int i = 0; i<nb;i++) {
            scanf("%d",(ptr+i));
        }
        
        for(int i = 0; i<nb;i++) {
            printf("%d",(*ptr+i));
        }
        free(ptr);
            break;
        
        case 2:
            int nu;
            printf("Enter how many elements you want: ");
            scanf("%d", &nu);

          
        
            int *pt = (int *)calloc(nu, sizeof(int)); 
        
            if (pt != NULL) {
                printf("Memory allocated at: [%p]\n", pt);
            } else {
                printf("Memory is not allocated\n");
            }
            printf("enter elements:");
            for(int i = 0;i<nu;i++) {
                scanf("%d",(pt+i));
            }

            printf("display elements:");
            for(int i = 0;i<nu;i++) {
                printf("%d",*(pt+i));
            }
            free(pt);
            break;
        
        case 3:
            int nr, new_n;
        
            printf("Enter how many elements you want: ");
            scanf("%d", &nr);
        
            int *p = (int *)malloc(nr * sizeof(int));
        
            if (p != NULL) {
                printf("Memory allocated at: [%p]\n", p);
            } else {
                printf("Memory is not allocated\n");
                return 1;
            }

            printf("enter elements:");
            for(int i = 0;i<nr;i++) {
                scanf("%d",(p+i));
            }

            printf("display elements:");
            for(int i = 0;i<nr;i++) {
                printf("%d",*(p+i));
            }
        
            printf("Enter the new size: ");
            scanf("%d", &new_n);
        
            int *new_ptr = (int *)realloc(ptr, new_n * sizeof(int));
        
            if (new_ptr != NULL) {
                printf("Memory reallocated at: [%p]\n", new_ptr);
                ptr = new_ptr; 
            } else {
                printf("Reallocation failed\n");
                return 1;
            }

            printf("enter elements:");
            for(int i = 0;i<new_n;i++) {
                scanf("%d",(new_ptr+i));
            }

            printf("display elements:");
            for(int i = 0;i<new_n;i++) {
                printf("%d",*(new_ptr+i));
            }
            free(p);
            break;
        
        case 4:
            int nm;
            printf("Enter how many characters you want: ");
            scanf("%d", &nm);
            getchar(); 
        
            char *pr = (char *)malloc(nm * sizeof(char));
        
            if (pr != NULL) {
                printf("Memory allocated at: [%p]\n", pr);
            } else {
                printf("Memory is not allocated\n");
                return 1;
            }
        
            printf("Enter  characters:");
            for (int i = 0; i < nm; i++) {
                scanf("%c", (pr + i));
                getchar(); 
            }
        
            printf("You entered: ");
            for (int i = 0; i < nm; i++) {
                printf("%c", *(pr + i));
            }
        
            free(pr); 
        
            break;
        
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
