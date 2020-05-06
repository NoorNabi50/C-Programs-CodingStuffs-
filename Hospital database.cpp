#include <iostream>
using namespace std;
class Hospital_Database
{
 protected :
 string Patient_Name;
 string Date_of_Admission;
 string Disease;
 string Date_of_Discharge;
 public :
 void GetData()
 {
 cout << "Enter Details Of Patient : " << endl << endl;
 cout <<"Enter Patient Name : " << endl;
 getline (cin ,Patient_Name);
 cout <<"Enter Date of Admission : " << endl;
 getline(cin ,Date_of_Admission);
 cout <<"Enter Disease of Patient : " << endl;
 getline (cin ,Disease );
 cout <<"Enter Date of Discharge : " << endl;
 getline(cin ,Date_of_Discharge); 
 }

 void display ()
{
cout << "Patient Name : " << Patient_Name << endl;
cout<<"Date of Admission : "<< Date_of_Admission << endl;
cout <<"Patient Disease : "<< Disease << endl;
cout <<"Date of Discharge :"<<Date_of_Discharge << endl; }
};
class GetAGE : public Hospital_Database
{
 private :
 int age;
 public :

 void Get_Age()
 {

 cout << "Enter Age of Patient : " << endl;
 cin >> age; 
 }

 void display_Age()
 {
 cout <<"Patient Age : " << age << endl;
 }
};
int main()
{
 GetAGE p1;
 p1.GetData();
 p1.Get_Age();
 cout <<"Display Information of Patient : " << endl << endl;
 p1.display_Age();
 p1.display();

}
