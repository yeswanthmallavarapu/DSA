//#include <iostream>
//using namespace std;
//
//// We achieve this using something called a "class"
//// A class is a used defined datatype which can be customized we want
//
//class student
//{
//	public:
//		
//		// There is also something called a private access specifies
//		
//		string name;
//		int mids;
//		float ends;
//		bool pre_abs;
//		
//		// I also want to find the marks of a student 
//		
//		void display_calculate_marks()// These are the parameters which must be passed while the function of this class is being called 
//		{
//			float total_marks;
//			total_marks = mids*0.5 + ends* 0.75;
//			cout << "The marks of "<<name<<" is "<<total_marks;
//		}
//};
//class vehicle
//{
//	public:
//		string car_name;
//		string tyre_name;
//		int number_of_tyres;
//		int Number_of_seats;
//};
//int main()
//{
//	// There are a class of 30 students and each has the following data associated with him :
//	
//	student a; // here a,b,c are of type of student
//	
////	int d,e,f // here d,e,f are types of int
//
////	vehicle hyundai, suzuki, ferrari
//	
//	// a,b,c over here are objects of the particulat class
//	
//	// First let us feed the data of student A
//	
//	a.name = "Bablu";
//	a.mids = 50;
//	a.ends = 99.5;
//	a.pre_abs = 1;
//	
//		a.display_calculate_marks();
//
//	
//	vehicle b;  // The instance of a class is called an object 
//	
//	
//	b.car_name = "endevour";
//	b.Number_of_seats = 2;
//	b.number_of_tyres = 4;
//	b.tyre_name = "appolo";
//}



#include <iostream>
using namespace std;

// We achieve this using something called a "class"
// A class is a used defined datatype which can be customized we want

class student
{
	public:
		
		// There is also something called a private access specifies
		
		string name;
		int mids;
		float ends;
		bool pre_abs;
		
		// I also want to find the marks of a student 
		
		void display_calculate_marks()// These are the parameters which must be passed while the function of this class is being called 
		{
			float total_marks;
			total_marks = mids*0.5 + ends* 0.75;
			cout << "The marks of "<<name<<" is "<<total_marks;
		}
		
		void totalmarksincludingproject(int project_marks)
		{
			cout <<mids+ends+project_marks;
		}
		
		void calculate_fail_probability()
		{
			if(ends<=10) cout <<"yes this student needs to attend the same class for one more year";
		}
};
class vehicle
{
	public:
		string car_name;
		string tyre_name;
		int number_of_tyres;
		int Number_of_seats;
		int number_of_miles_travelled;
		
		void distancetravelledbycar()
		{
			cout << number_of_miles_travelled;
		}
};
int main()
{
	// There are a class of 30 students and each has the following data associated with him :
	
	student a; // here a,b,c are of type of student
	
//	int d,e,f // here d,e,f are types of int

//	vehicle hyundai, suzuki, ferrari
	
	// a,b,c over here are objects of the particulat class
	
	// First let us feed the data of student A
	
	a.name = "Bablu";
	a.mids = 50;
	a.ends = 99.5;
	a.pre_abs = 1;
	
		a.display_calculate_marks();
		a.totalmarksincludingproject(10);

	
	vehicle b;  // The instance of a class is called an object 
	
	
	b.car_name = "endevour";
	b.Number_of_seats = 2;
	b.number_of_tyres = 4;
	b.tyre_name = "appolo";
}
