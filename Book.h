/* \file Book.h */
#pragma once
#include <iostream>

/* \class Book 
*  \brief Stores information about a book. Constructor is an initializer list and so can be used to create 
*/
class Book 
{

private:

	std::string title;//title of the book
	int year;//year the book was published
	long price;//price of the book

public:

	/* \fn Book 
	*  \brief Initializes the book with the title, publishing year and price. 
	*  @param title the title of the book 
	*  @param year the book's publishing year
	*  @param price the book's price
	*/
	Book(std::string title, int year, int price) :
		title(title), 
		year(year), 
		price(price)
	{}

	/* \fn GetTitle 
	*  \brief Returns the title of the book
	*/
	std::string GetTitle() { return title; }

	/* \fn GetYear
	*  \brief Returns the book's publishing year
	*/
	int GetYear() { return year; }

	/* \fn GetPrice
	*  \brief Returns the book's price 
	*/
	int GetPrice() { return price; }

};
