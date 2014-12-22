#include <iostream>
#include "MiniCppUnit.hxx"
#include "Card.hxx"
#include "Player.hxx"
#include "PlayerHuman.hxx"
#include "PlayerRobot.hxx"

class BlackJackTests : public TestFixture<BlackJackTests>
{
public:
	TEST_FIXTURE( BlackJackTests ){
			TEST_CASE( testValue_twoPlayersandTwoCards);
//			TEST_CASE( testComputeWinner_withtwoPlayersandTwoCards);
	}


	void testValue_twoPlayersandTwoCards(){
		
		Card *c1 = new Card("Hearts-4",4);
		Card *c2 = new Card("Hearts-5",5);
		Player* jugador = new PlayerHuman(c1,c2);

		Card *c3 = new Card("Diamonds-8", 8);
		Card *c4 = new Card("Diamonds-9", 9);
		Player* banca = new PlayerRobot(c3,c4);

		ASSERT_EQUALS(
			9,
			jugador->value()
		);

		ASSERT_EQUALS(
			17,
			banca->value()
		);

		delete c1;
		delete c2;		
		delete c3;		
		delete c4;	
		delete jugador;
		delete banca;
	}

/*	void testComputeWinner_withtwoPlayersandTwoCards(){
		Card *c1 = new Card("Hearts-4",4);
		Card *c2 = new Card("Hearts-5",5);
		Player* jugador = new PlayerHuman(c1,c2);

		Card *c3 = new Card("Diamonds-8", 8);
		Card *c4 = new Card("Diamonds-9", 9);
		Player* banca = new PlayerRobot(c3,c4);
	
		BlackJack bj;
		bj.addPlayer(jugador);
		bj.addPlayer(banca);

		ASSERT_EQUALS(
			"Banca",
			bj.computeWinner()
		);
		
		delete c1;
		delete c2;		
		delete c3;		
		delete c4;				
		delete jugador;
		delete banca;
	}
*/
};

REGISTER_FIXTURE(BlackJackTests)
