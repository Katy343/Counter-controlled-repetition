//Fig/4.9:GradeBook.cpp
//Member function definition for class GradeBook that solves the class average problem with counter-controlled repetition

#include<iostream>
#include "GradeBook.h" //include definition of class gradeBook
using namespace std;

//constructor initializes course name with string supplied as argument
GradeBook::GradeBook (string name)
{
    setCourseName(name); //validate and store courseName
} //end GradeBook constructor

//function to set the course name
//ensures that the course name has at most 25 characters
void GradeBook::setCourseName(string name)
{
    if (name.length()<=25)//if name has 25 or fewer characters
        courseName=name; //store the course name in the object
    else //if name is longer than 25 characters
    { //set courseName to first 25 characters of parameter name
        courseName =name.substr(0,25); // select first 25 characters
        cout<<"Name\""<<name<<"\"exceeds maximum length (25).\n"
        <<"Limiting courseName to first 25 characters.\n"<<endl;
    } //end if...else
} //end function setCourseName

//function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;
} //end function getCourseName

//display a welcome message
void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
} //end function displayMessage

//determine class average based on 10 grades entered by the user
void GradeBook::determineClassAverage()
{
    int total; //sum of grades entered by the user
    int gradeCounter; //number of the grade to be entered next
    int grade; //grade value entered by the user
    int average; //average of grades


    //initialization phase
    total=0; //initialize total
    gradeCounter = 1; //initialize gradeCounter

    //processing phase
    while (gradeCounter<=10) //loop 10 times
    {
        cout<<"Enter grade: "; //prompt for input
        cin>>grade; //input next grade
        total = total + grade; //add grade to total
        gradeCounter = gradeCounter + 1; //increment counter by 1
    } //end while

    //termination phase
    average= total/10; //integer division yields integer results

    //display total and average of grades
    cout<<"\nTotal of all 10 grades is "<<average<<endl;
} //end function determineClassAverage


