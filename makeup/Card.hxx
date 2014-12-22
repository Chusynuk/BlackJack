//#ifndef CARD_HXX
//#define CARD_HXX



class Card{

	public:

		Card(std::string name, int value);
		~Card();


		int value();

 	private:

 		int cardValue;
 		std::string name;

};


Card::Card(std::string name, int value){

	this->cardValue = value;
	this->name = name;

}

Card::~Card(){}

int Card::value()
{
	return cardValue;
}


//#endif CARD_HXX

