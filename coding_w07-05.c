#include <stdio.h>

int main() {
    int age, level;
    float amount, discount = 0.0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter VIP level (1-5): ");
    scanf("%d", &level);
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // ตรวจสอบเงื่อนไขการให้ส่วนลด
    if (age > 60 || (level >= 3 && level <= 4)) {
        discount = 0.20; // 20%
    } else if (age >= 30 && age <= 40 && amount > 2000) {
        discount = 0.15; // 15%
    } else if (age >= 20 && age <= 25 && amount > 1500) {
        discount = 0.10; // 10%
    } else if (level == 5 && amount > 50000) {
        discount = 0.25; // 25%
    } else {
        discount = 0.0; // No discount
    }

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d\n", age);
    printf("VIP Level: %d\n", level);
    printf("Purchase Amount: %.2f THB\n", amount);

    if (discount > 0) {
        printf("Discount received: %.0f%%\n", discount * 100);
        printf("Final Price: %.2f THB\n", amount - (amount * discount));
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");

    return 0;
}
