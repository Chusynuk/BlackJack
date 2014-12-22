
//#ifndef PlayerRobot_HXX
//#define PlayerRobot_HXX

#ifndef PlayerRobot_hpp
#define PlayerRobot_hpp


class PlayerRobot : public Player

{


	public:

	PlayerRobot();
	PlayerRobot(Card *c1, Card *c2);
	~PlayerRobot();



};


PlayerRobot::PlayerRobot(Card *c1, Card *c2)
{

	cards[0]= c1;
	cards[1]= c2;
	numberCards = 2;
	sumCards = c1->value() + c2->value();
}

PlayerRobot::PlayerRobot(){}
PlayerRobot::~PlayerRobot(){}








#endif PlayerRobot_hpp



