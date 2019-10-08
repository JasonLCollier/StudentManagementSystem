class Student
{
public:
	int studentID;
	int grades[10];

	void setStudentID(int inID);
	int getStudentID();
	void setGrade(int gradeNumber, int gradeIn);
	int* getGrades();
	int getGrade(int gradeNumber);
	void printGrades();
	void sortGrades();
	int getMin();
	int getMax();
	float getAverageGrade();
};

class Course
{
public:
	Student students[6];
	int courseMinGrade;
	int courseMaxGrade;
	float courseAvgGrade;
	int grades[60];

	void addStudents(Student* studentIn);
	int* getAllGrades();
	int* sortAllGrades();
	int getMinGrade();
	int getMaxGrade();
	float getAvgGrade();
	void printAllGrades();
};

