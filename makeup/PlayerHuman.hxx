
#ifndef PlayerHuman_hpp
#define PlayerHuman_hpp


class PlayerHuman : public Player

{

public:


	PlayerHuman();
	PlayerHuman(Card *c1, Card *c2);
	~PlayerHuman();


	


};


PlayerHuman::PlayerHuman(Card *c1, Card *c2)
{

	cards[0]= c1;
	cards[1]= c2;
	numberCards = 2;
	sumCards = c1->value() + c2->value();
}

PlayerHuman::PlayerHuman(){}
PlayerHuman::~PlayerHuman(){}









#endif PlayerHuman_hpp

