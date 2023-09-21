/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    
    Test case:
        Array1 element : 
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10

*/

#include <stdio.h>

int main() {
    int rows, cols ;

    // รับข้อมูลของ Array1
    printf( "Array1 element:\n" ) ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d" , &rows ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , &cols ) ;

    int array1[rows][cols] ;

    printf( "Input elements for Array1:\n" ) ;
    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            scanf( "%d", &array1[i][j] ) ;
        }
    }

    // รับข้อมูลของ Array2
    printf( "Array2 element:\n" ) ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &rows ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , &cols ) ;

    int array2[rows][cols] ;

    printf( "Input elements for Array2:\n" ) ;
    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            scanf( "%d" , &array2[i][j] ) ;
        }
    }

    // สร้างและคำนวณผลรวมใน Array3
    int array3[rows][cols] ;

    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            array3[i][j] = array1[i][j] + array2[i][j] ;
        }
    }

    // แสดงผลลัพธ์ของ Array3
    printf( "Array3 (Sum of Array1 and Array2):\n" ) ;
    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            printf( "%d " , array3[i][j] ) ;
        }
        printf( "\n" ) ;
    }

    return 0 ;
}
