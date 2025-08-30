#include <stdio.h>

int main() {
    int level; // ตัวแปรเก็บระดับสมาชิก

    printf("Enter membership level (1-4): ");
    scanf("%d", &level); // รับค่าจากผู้ใช้

    // ตรวจสอบด้วย switch-case
    switch(level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: 20%% discount + Reward points + Birthday gift + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n"); 
            // ถ้าไม่ใช่ 1-4 แสดง error
    }

    return 0;        //จบการทำงานของโปรแกรม
}