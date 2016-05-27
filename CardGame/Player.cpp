#include "stdafx.h"
#include "Player.h"


void Player::round()
{
	// prendre une carte de ça main
	// On appelle le trigger
	// La jouer à son board
	
	//Selectionne carte 1
	//handEvent.removeElement(carte1);
	//playingEvent.Addelenet(CArte1);

	//notify triggerAdverse j'ailedroitdejouer?(carte1)

	//notify est-ce que j'ai le droit de joeur ça ?
	//si oui playCard 
	//si non playingEvent.remove(carte1)
	//handEvent.addElement(carte1)
	
	playCard->notifyListener(hand->getCard());
}

void Player::playCard() 
{

}

void Player::draw() 
{
	// Ajoute les listenner 
}

Player::Player(int pNbCardDeck, Match* pCurrentMatch)
{

	deck = new Pool(pNbCardDeck);
	graveGuard = new Pool();
	hand = new Pool();
	playCard = new TriggerSimple(TypeEvent::playingEvent);

	currentMatch = pCurrentMatch;
	//Creation main
	//handCard->addlistener(carteMain[1]*->)
}


Player::~Player()
{
}
