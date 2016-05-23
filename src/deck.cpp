/*
======================
Uno in c++
======================
*/

/*
========================
Implementation of deck.h
========================
*/

#include "deck.h"

//constructor
Deck::Deck(){
						
	std::vector<Card> temp (108); //temp vector that takes in a Card, allocated to 108 the size of the deck
	
	m_card = temp; //m_card copies the temp

	
	//Populate deck	
	
	for(Card::Color color = Card::RED; color <= Card::BLUE; color = Card::Color(color+1))
	{
		for (Card::Value value = Card::ZERO; value <= Card::WILD_DRAW_FOUR; value = Card::Value(value+1))
		{

			m_card.push_back(Card(value,color)); //push_back function is used to at a new element to the vector
		}
	}
}

//print deck
Deck::printDeck() const{
	for (int i = 0	
		
}











