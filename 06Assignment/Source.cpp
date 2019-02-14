#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze; 
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i) // This for loop will be checking the characteristics of the text inputted.
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			
			++vowels; // Found a bug. Decrementing instead of incrementing.
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants; //Found a bug. The code was a comment instead of actual code.
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits; // This will add to the digits, which is the numbers inside the text.
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces; // This will add to the spaces variable.
		}
		else
		{
			++unknownCharacters; // Anything that isn't a vowel, consanant, a digit, or a blank space will be added here.
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // This will check the length of the text inputted.
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; // This will add together all of the characteristics found in the text,
																		  // which will be checked later.

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis) // This for loop will see if the number of characteristics matches the length of the text.
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}