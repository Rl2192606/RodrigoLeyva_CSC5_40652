
#include <iostream>

using namespace std;

bool validateInput(char);
int checkAnswers();
void getIncorrectlyAnsweredQuestions();
void getOutput(int);

const int numberQuestions = 20;
const int neededScore = 15;
char correctAnswers[] {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D',
						'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
int wrongAnswers[numberQuestions];
char userAnswers[numberQuestions];

int main()
{
	int correctAnswersAmount = 0;

	for (int i = 0; i < numberQuestions; i++)
	{
		//get input and validate it
		do
		{
			cout << "Please enter your answer for question #" << i + 1 << " ";
			cin >> userAnswers[i];
		} while (!validateInput(userAnswers[i]));
	}

	correctAnswersAmount = checkAnswers();
	if (correctAnswersAmount < numberQuestions)
	{
		getIncorrectlyAnsweredQuestions();
	}

	getOutput(correctAnswersAmount);

	return 0;
}

void getOutput(int counter)
{
	cout << "\nYou have " << (counter >= neededScore ? "PASSED" : "FAILED") << " the test" << endl;
	cout << "You have answered " << counter << " correctly and " << (numberQuestions - counter) << " incorrectly" << endl;

	//if some answers were wrong, output what answer was wrong, what was the correct answer, and what was the user answer
	if (counter < numberQuestions)
	{
		cout << "The following questions were answered incorrectly: \n";
		for (int i = 0; i < numberQuestions - counter; i++)
		{
			cout << "Question #" << (wrongAnswers[i] + 1) << ". Correct answer was " <<
				correctAnswers[wrongAnswers[i]] << ". You answer was " << userAnswers[wrongAnswers[i]] << endl;
		}
	}
}

void getIncorrectlyAnsweredQuestions()
{
	int counter = 0; //index of the incorrectlyAnsweredQuestions array
	for (int i = 0; i < numberQuestions; i++)
	{
		if (correctAnswers[i] != toupper(userAnswers[i]))
		{
			wrongAnswers[counter] = i;
			counter++;
		}
	}
}

int checkAnswers()
{
	int counter = 0;
	for (int i = 0; i < numberQuestions; i++)
	{
		if (toupper(userAnswers[i]) == correctAnswers[i])
			counter++;
	}

	return counter;
}

bool validateInput(char answer)
{
	//only A, B, C, D is valid input
	if (toupper(answer) != 'A' && toupper(answer) != 'B' && toupper(answer) != 'C' && toupper(answer) != 'D')
	{
		cout << "\nInvalid input! ";
		return false;
	}

	return true;
}

