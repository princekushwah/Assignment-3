#include <stdio.h>

int main()
  {
    int costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price\n");
    scanf("%d %d", &costPrice, &sellingPrice);

    if(sellingPrice > costPrice)
    {
     printf("Profit = %d\n", sellingPrice - costPrice);
    }
    else if(costPrice > sellingPrice)
    {
     printf("Loss = %d\n", costPrice - sellingPrice);
    }
     else
    {
        printf("No Profit and No Loss\n");
    }
    getch();
    return 0;
}
