#include <stdio.h>

int main() {
    int level;                           // ประกาศตัวแปรเก็บค่าระดับ (level) ที่ผู้ใช้กรอก

    printf("Enter level: ");  
    scanf("%d", &level);                 // รับค่าจากผู้ใช้แล้วเก็บในตัวแปร level

    // ตรวจสอบเงื่อนไข level ที่ไม่อนุญาตก่อน
    if (level <= 0) {
        printf("The level below 1 is not allowed\n"); 
        // ถ้า level <= 0 แสดงข้อความเตือน
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
        // ถ้า level > 4 แสดงข้อความเตือน
    } else {
        // ถ้าอยู่ในช่วง 1 - 4 จะเข้าสู่ switch case
        switch(level) {
            case 1:
                printf("Level 1: Beginner\n");
                break; // ออกจาก switch
            case 2:
                printf("Level 2: Intermediate\n");
                break;
            case 3:
                printf("Level 3: Advanced\n");
                break;
            case 4:
                printf("Level 4: Expert\n");
                break;
            default:
                printf("Invalid level\n");
                // default ใช้ในกรณีที่ไม่ตรงกับ case ไหนเลย
        }
    }

    return 0; // จบโปรแกรม
}
