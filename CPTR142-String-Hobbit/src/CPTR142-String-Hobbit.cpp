//============================================================================
// Name        : CPTR142-String-Hobbit.cpp
// Author      : Aaron C.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Framework for the Stringclass hands-on project

#include <iostream>
#include <string>

using namespace std;

const string Bilbo = "Bilbo Baggins, a hobbit from the shire, went on an extraordinary journey \
                         even though a hobbit normally prefers safety and comfort.  Bilbo was recruited to be \
	                     a burglar, since hobbits are known to be quiet and stealthy. He went with the dwarfs \
						 led by Thorin and guided by the wizard Gandalf, to regain the lonely mountain, their ancient home. \
                         Along the way, they encountered hungry trolls, nasty goblins, hideous orcs and other gross creatures of evil,\
                         the human lake village, and finally the dragon Smaug.  They received some help along the way from \
                         the wizard Gandalf and his friends, from the Elves, from the humans, even from the eagles. Bilbo \
	                     encounters the sad little creature, Gollum, early on and finds the ring allowing hime to become invisible. \
                         He became dependent on that ring, using it many times to escape. Throughout their many adventures  \
	                     on their mission the little hobbit, Bilbo, proved indispensible. By the way, Bilbo is also the name \
						 of my GoldenDoodle dog, as I got him on the day of the release of the first Hobbit movie!";
/**
* Prints the location of every occurance of "word" found in "story"
*      NOTE:  @ param is a standard comment describing a parameter passed into a method
* @param story	String containing story to search through
* @param word	String containing word to search for
*/

// HINT:  string::npos is useful for this function

void find_all_words(const string &story, const string &word)
{
     //size_t is an unsigned integral type
     size_t posFound=0, start=0;

	// Write the code for find_all_words
     for(int i; i < story.size; i++){
    	 int j = 0;
    	 if(story[i] == word[j]){

    	 }

     }
	// Display the position upon each location found
}

int main()
{
	string word = "dog";
	find_all_words(Bilbo, word);
	//  Call the find_all_words function passing in appropriate arguments, for instance, look for the word "hobbit".
        //         How many times does the word "hobbit" appear?

	// Experiment with some other string methods on the Bilbo story object
