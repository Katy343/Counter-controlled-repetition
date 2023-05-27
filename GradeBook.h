//Fig.4.8:GradeBook.h
//Definition of class GradeBook that determines a class average

#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    GradeBook(string); //constructor initializes course name
    void setCourseName(string); //function to set course name
    string getCourseName(); //function to retrieve course name
    void displayMessage(); //display a welcome message to the user
    void determineClassAverage(); //averages grades entered by the user
private:
    string courseName; //course name for this GradeBook
}; //end class GradeBook
