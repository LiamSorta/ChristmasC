#include <iostream>
#include <string>

#define JINGLE cout
#define ADVENT 25
#define ROCKING_AROUND_THE_CHRISTMAS_TREE JINGLE << "ChristmasC Version 25.12.15 initiated\n\n"; for(int snow = 0; snow <= ADVENT; snow++)
#define SILVER_BELLS " Days until Christmas\n" 
#define WHITE_CHRISTMAS using namespace std;
#define HARK_THE_HERALD int main()
#define THE_GRINCH cin.get();

#define BASE "On the " << snow << "th day of Christmas my true love sent to me: \n"
#define ONE "A partridge in a Pear Tree\n"
#define TWO "2 Turtle Doves\n"
#define THREE "3 French Hens\n"
#define FOUR "4 Calling Birds\n"
#define FIVE "5 Golden Rings\n"
#define SIX "6 Geese a Laying\n"
#define SEVEN "7 Swans a Swimming\n"
#define EIGHT "8 Maids a Milking\n"
#define NINE "9 Ladies Dancing\n"
#define TEN "10 Lords a Leaping\n"
#define ELEVEN "11 Pipers Piping\n"
#define TWELVE "12 Drummers Drumming\n"


#define TWELVE_DAYS MerryChristmas

WHITE_CHRISTMAS

void MerryChristmas(int snow){
	switch (snow){
	case 1:
		JINGLE << BASE << ONE;
		break;

	case 2:
		JINGLE << BASE << ONE << TWO;
		break;

	case 3:
		JINGLE << BASE << ONE << TWO << THREE;
		break;

	case 4:
		JINGLE << BASE << ONE << TWO << THREE << FOUR;
		break;

	case 5:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE;
		break;

	case 6:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX;
		break;

	case 7:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN;
		break;

	case 8:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN << EIGHT;
		break;

	case 9:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN << EIGHT << NINE;
		break;

	case 10:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN << EIGHT << NINE << TEN;
		break;

	case 11:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN << EIGHT << NINE << TEN << ELEVEN;
		break;

	case 12:
		JINGLE << BASE << ONE << TWO << THREE << FOUR << FIVE << SIX << SEVEN << EIGHT << NINE << TEN << ELEVEN << TWELVE;
		break;
	}
}