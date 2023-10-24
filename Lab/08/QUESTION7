#include <stdio.h>

int calculate_discount (int total_purchase_amount, int visit_no_shop_in_last_month){
    int after_discount_price;
    if (visit_no_shop_in_last_month > 10 && total_purchase_amount >= 50){
        after_discount_price = 0.85 * total_purchase_amount;
    }
    else if (visit_no_shop_in_last_month > 5 && total_purchase_amount >= 30){
        after_discount_price = 0.90 * total_purchase_amount;
    }
    else {
        after_discount_price = total_purchase_amount;
    }
return after_discount_price;
}

int main (){
    int total_purchase_amount, visit_no_shop_in_last_month;
    printf ("Enter the total purchase amount");
    scanf ("%d", &total_purchase_amount);
    printf ("Enter the number of times you have visited the shop last month");
    scanf ("%d", &visit_no_shop_in_last_month);
    printf ("The discounted price is %d",calculate_discount (total_purchase_amount, visit_no_shop_in_last_month));
return 0;
}
