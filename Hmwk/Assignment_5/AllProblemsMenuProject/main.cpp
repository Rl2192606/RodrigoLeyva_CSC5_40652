//System Libraries Here
#include <iostream>  
#include <cstdlib>   
#include <ctime>     
#include <iomanip> 
#include <cmath>     
#include <math.h>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double calculateRetail(double, double);
int getNumAccidents(string);
void findLowest(int, int, int, int, int);
double fallingDistance(int = 0);
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
const int account_ELEMENTS = 18;
bool searchArray(int, int[account_ELEMENTS]);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9thEd_Chap7_Prob01_LargestSmallestArrayValues"<<endl;
    cout<<"Problem 2 -> Gaddis_9thEd_Chap6_Prob01_Markup"<<endl;
    cout<<"Problem 3 -> Gaddis_9thEd_Chap6_Prob03_WinningDivision"<<endl;
    cout<<"Problem 4 -> Gaddis_9thEd_Chap6_Prob05_FallingDistance"<<endl;
    cout<<"Problem 5 -> Gaddis_9thEd_Chap7_Prob02_RainfallStatistics"<<endl;
    cout<<"Problem 6 -> Gaddis_9thEd_Chap7_Prob10_DriversLicenseExam"<<endl;
    cout<<"Problem 7 -> Gaddis_9thEd_Chap8_Prob01_ChargeAccountValidation"<<endl;
    
    cout<<"Type 1 to 7 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
            int numbers[10];
    int smallest = 0;
    int largest = 0;
    int temp = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter number " << i +1 << ": " << endl;
        cin >> numbers[i];
                
    }

    smallest = numbers[0];
    largest = numbers[0];
    
    for (int i = 1; i < 10; i++)
    {
        temp = numbers[i];
        if (temp < smallest)
            smallest = temp;
      if (temp > largest)
          largest = temp;
    }
    
    cout << "The largest number in your set is: " << largest << endl;
    cout << "The smallest number in your set is: " << smallest << endl;
        }   
        case 2: {
            double price= 0;
    double markup= 0;
    double totalPrice;
    cout << "Hello, please enter the wholesale price of the item, " << endl; 
    cout     <<   "followed by markup percentage. " << endl;
         cin >> price >> markup;
         while (price < 0|| markup < 0)
         {
             cout << "Error, please enter a non negative price wholesale price of the item, " <<  
            "followed by markup percentage. " << endl;
                      cin >> price >> markup;
         }
             
             
             // call{ function
         totalPrice = calculateRetail(price, markup);
         cout << "The total price is: $" << fixed << setprecision(2) << totalPrice;
           
        }
        case 3: {
             int accN, accS, accE, accW, accC;
    for (int i =0; i < 5; i++)
    {
        switch(i)
        {
                case 0:  accN = getNumAccidents("N"); break;
                case 1:  accS = getNumAccidents("S"); break;
                case 2:  accE = getNumAccidents("E"); break;
                case 3:  accW = getNumAccidents("W"); break;
                default: accC = getNumAccidents("C"); break;
    }

    
    
  }  
    
    findLowest (accN, accS, accE, accW, accC);
    
            
        }
        case 4: {
             int t= 0;
    double distance = 0;
    
    cout << "This program will calculate the distance an object will fall in ten seconds:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        distance = fallingDistance(i);
        cout << i << " seconds: " << distance << " meters" << endl;
                
    }
    
            
        }
        case 5: {
            double rainFall[12];
    double total = 0;
    double avg = 0;
    double maxRain = 0;
    double minRain = 0;
    double tempRain = 0;
    
    for (int i = 0; i <12; i++)
    {
        cout << "Please enter the amount of rainfall for month: " << i+1 << ": " << endl;
        cin >> rainFall[i];
        
        if (rainFall < 0)
        {
            cout << "Please enter a number greater than 0: ";
            cin >> rainFall[i];
                    
        }
        total += rainFall[i];
        } 
    
    avg = total/12;
    maxRain = rainFall[0];
    minRain = rainFall[0];
     
    for (int i = 0; i < 12; i++)
    {
        tempRain = rainFall[i];
        if (tempRain < minRain)
            minRain = tempRain;
        if (tempRain > maxRain)
            maxRain = tempRain;
    }

    cout << "Total rainfall was: " << setprecision (2) << fixed << showpoint << total << endl;
   cout << "Average rainfall was: " << setprecision (2) << fixed << avg << endl;
   cout << "Lowest amount of rainfall was: " << setprecision (2) << fixed << showpoint << minRain << endl;
   cout << "Max amount of rain rainfall was: " << setprecision (2) << fixed << showpoint << maxRain << endl;
    
            
        }
        case 6:
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
        case 7:
        {
        int account[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 
3852085, 7576651, 7881200, 4581002 };


int accNumber = 0;
	bool found = true;

	cout << "Please enter the account number: ";
	cin >> accNumber;

	if (found == searchArray(accNumber, account))
		cout << "Account number: " << accNumber << " is a valid number" << endl;
	else
		cout << "Account number: " << accNumber << " is not a valid number" << endl;

	return 0;            
        }
    }
    
    return 0;
}

double calculateRetail(double price, double percent)
{
    int accN, accS, accE, accW, accC;
    for (int i =0; i < 5; i++)
    {
        switch(i)
        {
                case 0:  accN = getNumAccidents("N"); break;
                case 1:  accS = getNumAccidents("S"); break;
                case 2:  accE = getNumAccidents("E"); break;
                case 3:  accW = getNumAccidents("W"); break;
                default: accC = getNumAccidents("C"); break;
    }

    
    
  }  
    
    findLowest (accN, accS, accE, accW, accC);
    
    
    return 0;
    
    
}

int getNumAccidents(string region)
{
    int accidents = 0;
    cout << "Enter the number of accidents for region: " << region << " ";
    cin >> accidents;
     while (accidents < 0)
     {
         cout << "Please enter a positive number: "; 
         cin >> accidents;
     }
    return accidents;
}


void findLowest(int r1, int r2, int r3, int r4, int r5)
{
 
        int lowest = 0;
        string region = "";
        
        if (r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5)
        {
            lowest = r1;
            region = "North";
        }
        else if (r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5)
        {
            lowest = r2;
            region = "South";
        }
        else if (r3 < r1 && r3 < r2 && r3 < r4 && r3 < r5)
        {
            lowest = r3;
            region = "East";
        }
        else if (r4 < r2 && r4 < r3 && r4 < r1 && r4 < r5)
        {
            lowest = r4;
            region = "North";
        }
        else
        {
            lowest = r5;
            region = "Central";
        }
        
        cout << "The region with the lowest amount of accidents is " << region << ". Total number of accidents there are: " << lowest;
                
   
}

double fallingDistance(int t)
{
    double distance = 0;
    const double g = 9.8;
    distance = (0.5 * g) * (pow(t, 2));
    return distance;
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

bool searchArray(int enteredValue, int lookUpArray[account_ELEMENTS] )
{
	for (int i = 0; i < account_ELEMENTS; i++)
	{
		if (enteredValue == lookUpArray[i])
			return true;
	}

	return false;
}