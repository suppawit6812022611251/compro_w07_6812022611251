#include <stdio.h>

int main() {
    int x, y;                       // ตัวแปรเก็บค่าตัวเลขจากผู้ใช้
    int result;                     // ตัวแปรสำหรับเก็บผลการเปรียบเทียบ

    // ─────────────────────────────
    // Input: รับค่าตัวเลข 2 ตัวจากผู้ใช้
    // ─────────────────────────────
    printf("Enter first number (x): ");
    scanf("%d", &x);

    printf("Enter second number (y): ");
    scanf("%d", &y);

    // ─────────────────────────────
    // Process: เปรียบเทียบค่าแล้วกำหนด result
    // ─────────────────────────────
    if (x > y) {
        result = 1;         // x มากกว่า y
    } else if (x < y) {
        result = 2;         // x น้อยกว่า y
    } else {
        result = 0;        // x เท่ากับ y
    }

    // ─────────────────────────────
    // Decision & Output: ใช้ switch-case
    // ─────────────────────────────
    switch (result) {
        case 1:
            printf("x (%d) is greater than y (%d)\n", x, y);
            break;
        case 2:
            printf("x (%d) is less than y (%d)\n", x, y);
            break;
        case 0:
            printf("x (%d) is equal to y (%d)\n", x, y);
            break;
        default:
            printf("Error in comparison\n");
    }

    // ─────────────────────────────
    // End message
    // ─────────────────────────────
    printf("End of evaluation\n");

    return 0;     // จบการทำงานโปรแกรม
}
