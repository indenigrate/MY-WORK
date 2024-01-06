#include <stdio.h>

int main(){
    //Initialise array
    int array[]={1,5,7,62,67,86,95,99,295,634,855};
    //finding length of array
    int size=sizeof(array)/sizeof(int);
    //number to be searched for
    int find=67;
    printf("Size is %d\n",size);
    //initiate upper lower and middle index in array
    int u=size-1,l=0,mid=(l+u)/2;
    while(l<=u){
        //if middle index has the term we are looking for exit the loop
        if (array[mid]==find){
            printf("Found at index %d \n",mid+1);
            break;
        }
        //if the find term is greater look in the upper half
        if(find>array[mid]){
            l=mid+1;
        }
        //else look in the lower half
        else{
            u=mid-1;
        }
        mid=(l+u)/2;
    }
}