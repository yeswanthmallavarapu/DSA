//#include<iostream>
//using namespace std;
//int main()
//{
//	string name;
//	
//	cin >> name;
//	int i;
//	for(i=0;i<5;i++)
//	{
//		cout << name[i]  << endl;
//	}
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
////	string a;
////	string b;
//
//	int a;
//	int b;
//	int c;
//	
//	cin >> a >> b;
//	cout << "The strings which you have given as input are "<< a << b << endl;
////	string c;
//	c=a+b; // This is called string concentration // Or in simple terms string addition
//	cout << "The combined word is: " << c;
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//
//	int a;
//	int b;
//	int c;
//	
//	cin >> a >> b;
//	cout << "The strings which you have given as input are "<< a << b << endl;
//	c=a+b; // This is called string concentration // Or in simple terms string addition
//	cout << "The combined word is: " << c;
//	return 0;
//}



//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string a;
//    string b;
//    string c;
//	cin >> a >> b;
//	cout << "The strings which you have given as input are "<< a << b << endl;
//	c=a+b; // This is called string concentration // Or in simple terms string addition
//	cout << "The combined word is: " << c << endl;
//	cout << "The length of the combined name is " << c.length();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string a;
//    string b;
//    string c;
//	cin >> a;
//	cout << "Your full name is " << a << endl;
//	
//}


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    string b;
    string c;
	// Instead of using cin, you use something called a getline
	getline(cin,a);
	// getline is a function which is why you can see (), (cin, variable where you want to store the value of the line which is being taken as input)
	cout << "Your full name is " << a << endl;
	
}