#include <stdio.h>

int main() {
    int start, stop;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start < stop) 
        printf("Start number is %d and stop number is %d\n", start, stop);
        for (int i = start; i <= stop; i++) {
        printf("%d ", i);
        }
        printf("\nThank you\n");
    return 0;
 }
// การทำงานของโปรเเกรมนี้ คือ รับค่าตัวเลข 2 ค่า เเล้วเเสดงค่าตัวเลขตั้งเเต่ค่าตัวเเรกจนถึงค่าตัวที่สอง
// โดยค่าตัวเเรกต้องน้อยกว่าค่าตัวที่สอง
// หากค่าตัวเเรกน้อยกว่าค่าตัวที่สอง จะเเสดงค่าตัวเลขตั้งเเต่ค่าตัวเเรกจนถึงค่าตัวที่สอง เเละ ข้อความ Thank you
// หากค่าตัวเเรกไม่ได้น้อยกว่าค่าตัวที่สอง จะไม่เเสดงผลลัพธ์ใดๆ