/* \file GamesysTechnicalTask.cpp */
#include <iostream>
#include <vector>
#include "Book.h"
#include "Price.h"

#pragma region Book objects
Book mobyDick("Moby Dick", 1851, 1520);
Book theTerriblePrivacyOfMaxwellSim("The Terrible Privacy of Maxwell Sim", 2010, 1314);
Book stillLifeWithWoodpecker("Still Life With Woodpecker", 1980, 1105);
Book sleepingMurder("Sleeping Murder", 1976, 1024);
Book threeMenInABoat("Three Men in a Boat", 1889, 1287);
Book theTimeMachine("The Time Machine", 1895, 1043);
Book theCavesOfSteel("The Caves of Steel", 1954, 812);
Book idleThoughtsOfAnIdleFellow("Idle Thoughts of an Idle Fellow", 1886, 732);
Book aChristmasCarol("A Christmas Carol", 1843, 423);
Book aTaleOfTwoCities("A Tale of Two Cities", 1859, 632);
Book greatExpectations("Great Expectations", 1861, 1321);
#pragma endregion

int main()
{
    std::vector<Book> order;

	order.push_back(stillLifeWithWoodpecker);
	order.push_back(threeMenInABoat);
	order.push_back(greatExpectations);

    Price::OrderCost(order);
}

