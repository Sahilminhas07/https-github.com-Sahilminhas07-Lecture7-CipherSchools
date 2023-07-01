
#include<iostream>
using namespace std;

class student{
	string passcode;
	public:
		string name;
		int id;

		void into(){
			cout<<"My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode;

		}
			void setPass(string s){
				passcode = s;
			}
			friend class bestfriend;
};

class bestfriend{
	public:
		void sharingSecret(student s){
			cout<<s.passcode<<endl;
		}
};
int main(){
	student s1;
	s1.setPass("0001");

	bestfriend bff;
	bff.sharingSecret(s1);
	return 0;
}
