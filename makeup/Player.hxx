

#ifndef Player_hpp
#define Player_hpp


class Player

{


protected:

	Card* cards[5];
	int numberCards;
	int sumCards;




public:

	Player();
	~Player(){}

	int value();

};

Player::Player(){}

int Player::value()
{

	//for(int i = 0; i < numberCards;)

	return sumCards;
}





#endif Player_hpp



