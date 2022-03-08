/* \file Price.h */
#pragma once
#include <iostream>
#include <vector>
#include "Book.h"

/* \class Price 
*  \brief Provides functionality for the calculation of the book's cost
*/
class Price
{
public:

    /* \fn PrintAsString
    *  \brief Prints the price as in GBP format
    *  @param price the price of the book (in pence)
    */
    static void PrintAsString(int price);

	/* \fn Discount
    *  \brief Discounts the book by a specified percentage
    *  @param originalCost the cost of the book pre discount
    *  @param percentage the percentage by which the book is to be discounted
    */
    static int Discount(int originalPrice, int percentage);

    /* \fn NewPrice
    *  \brief Checks for discounts, returns the price
    *  @param b the book that will be checked for any qualifying discounts
    */
    static int NewPrice(Book b);

    /* \fn OrderCost
    *  \brief Finds the total owed for the order
    *  @param order the vector of Book objects that make up the order
    */
    static int OrderCost(std::vector<Book> order);

};