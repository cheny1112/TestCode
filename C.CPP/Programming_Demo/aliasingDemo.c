/*
 * @Description: 
 * @Author: cheny
 * @Date: 2020-01-04 19:59:32
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-04 20:23:06
 * @FilePath: \C_code\TestCode\C.CPP\Programming_Demo\aliasingDemo.c
 */
#include <stdio.h>

int main(){
    int arr[2] = {1, 2};
    int i = 10;

    //! Write beyond the end of arr. 
    //! Undefined behaviour in standard C, 
    //! will write to i in some implementations.
    arr[2] = 20;

    for(int j = 0; j <=2; j++){
        printf("arr[%d]'s value : %d ", j, arr[j]);
    }

    // might also output 20, not 10, 
    // because of aliasing, 
    // but the compiler might have i stored in a register and print 10
    printf("\nThe i's value : %d", i);

    //? the arr length still be 2
    printf("\narray length : %d", sizeof(arr) / sizeof(int));
    
    return 0;
}