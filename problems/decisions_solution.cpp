#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* 
 *                     PART 1:
 *	
 * You are going to be making decisions based on
 * user inputted information. 
 *
 * ---------------------------------------------------
 *
 * You will wear a jacket if it is colder than 50 degrees
 * You will wear a tanktop if it is hotter than 80 degrees
 * You will wear a t-shirt otherwise
 *
 * You eat eggs for breakfast on the weekend
 * You eat cereal for breakfast on the weekdays
 *
 * All t-shirts you wear in October will be pink
 *
 * ---------------------------------------------------
 *
 * There are two variables that you will be changing.
 * clothing: What you are wearing today
 * food: What you are going to eat for breakfast
 *
 * examples: 
 * food = "eggs"
 * clothing = "jacket"
 * clothing = "t-shirt"
 * clothing = "pink t-shirt"
 *
 * Print out the variables in a coherent sentence
 * displaying the choices you made
 *
 *
 *
 *
 *                    PART 2:
 *
 * Randomize the temperature to be a value between 30-100
 * Print out what the temperature was that day
 *
 * Add a new variable, weather.
 * Randomly generate a number between 0-2
 * assign "sunny", "cloudy" and "raining" to
 * each of the numbers and store it in the 
 * weather variable
 *
 * If it is raining, wear a raincoat
 * If it is cloudy, have soup along with the rest of your food
 * 
 *
 * Add these new variables to your printed statement at the end
 *
 */

int main() {
	int temperature;
	string dayOfTheWeek, month;
	string clothing, food, weather; // added weather

	cout << "What day of the week is it?: ";
	cin >> dayOfTheWeek;

	cout << "What month is it?: ";
	cin >> month;

	/* START CODING HERE */
	
	srand(time(0)); // seed the randomness
	temperature = rand() % 71 + 30;

	int randomNumber = rand() % 3;

	if (randomNumber == 0) {
		weather = "sunny";

	} else if (randomNumber == 1) {
		weather = "cloudy";

	} else {
		weather = "raining";

	}


	if (weather == "raining") { // determine what to wear
		clothing = "rain coat";

	} else if (temperature < 50) { 
		clothing = "jacket";

	} else if (temperature > 80) {
		clothing = "tank-top";

	} else {
		clothing = "t-shirt";

	}

	if (clothing == "t-shirt" && month == "october") { // pink t-shirt
		clothing = "pink t-shirt";

	}


	if (dayOfTheWeek == "saturday", "sunday" ) { // what to eat
		food = "eggs";

	} else {
		food = "cereal";

	}

	if (weather == "cloudy") {
		food += " and soup";
	}


	// print out statement
	cout << "It is a " << dayOfTheWeek << " in " << month
		 << ". It is currently " << temperature 
		 << " degrees outside and "  
		 << weather
		 << ". I decided to wear a " 
		 << clothing << ". For breakfast I ate " 
		 << food << ".\n";

	/* STOP CODING HERE */

	return 0;
}
