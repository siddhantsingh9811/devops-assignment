#include <stdio.h>
#include <stdlib.h>

void show_arr(int *arr, int l){
    printf("[");
    for(int i = 0; i<l; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void cycle_sort(int *a, int n){
    int start, element, pos, temp, i;    
     
    for (start = 0; start <= n - 2; start++) {    
        element = a[start];  
          
        pos = start;    
          
        for (i = start + 1; i < n; i++)    
            if (a[i] < element)    
                pos++;    
        if (pos == start)  
            continue;    
        while (element == a[pos])    
            pos += 1;    
        if (pos != start) 
        {      
            temp = element;    
            element = a[pos];    
            a[pos] = temp;      
        }    
        while (pos != start)   
        {    
            pos = start;    
            for (i = start + 1; i < n; i++)    
                if (a[i] < element)    
                    pos += 1;    
              
            while (element == a[pos])    
                pos += 1;    
              
            if (element != a[pos])   
            {    
                temp = element;    
                element = a[pos];    
                a[pos] = temp;      
            }    
        }    
    }    
}

void selection_sort(int *arr, int l){

}

void main(){
    int l;
    printf("Enter array length: ");
    scanf("%d",&l);
    int *arr = malloc(sizeof(int)*l);
    for(int i = 0; i<l; i++){
        printf("Enter no: ");
        scanf("%d",&arr[i]);
    }
    show_arr(arr,l);
    int choice = 0;
    printf("Enter 1 for cycle sort and 2 for selection sort: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        cycle_sort(arr,l);
        show_arr(arr,l);
        break;
    
    case 2:
        selection_sort(arr,l);
        break;

    default:
        break;
    }
}

