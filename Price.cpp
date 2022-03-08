/* \file Price.cpp */
#include "Price.h"
#include <string>

void Price::PrintAsString(int price)
{
    std::string GBP = "£" + std::to_string((price / 100)) + "." + std::to_string((price / 10) % 10) + std::to_string((price / 1) % 10);
    std::cout << GBP;
}

int Price::Discount(int originalPrice, int percentage)
{
    int newPrice = originalPrice * 100;//extended the price by two places, to allow for precise rounding
    newPrice = newPrice - ((newPrice * percentage) / 100);//discount formula 

    if (((newPrice / 10) % 10) >= 5)//if the second to last digit is greater than or equal to 5, round up
    {
        newPrice = newPrice / 100;
        newPrice += 1;
    }
    else//if the second to last digit is less than 5, round down
    {
        newPrice = newPrice / 100;
    }

    return newPrice;
}

int Price::NewPrice(Book b)
{
    int newPrice = b.GetPrice();

    if (b.GetYear() >= 2000)
    {
        newPrice = Discount(b.GetPrice(), 10);
        return newPrice;
    }

    return newPrice;
}

int Price::OrderCost(std::vector<Book> order)
{
    int orderTotal = 0;

    for (int i = 0; i < order.size(); i++)
    {
        long bookCost = NewPrice(order[i]);
        orderTotal += bookCost;
    }

    if (orderTotal > 3000)
    {
        orderTotal = Discount(orderTotal, 5);
    }

    PrintAsString(orderTotal);
    return orderTotal;
}


