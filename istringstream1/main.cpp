#include<sstream>
#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

struct PersonInfo{
	string name;
	vector<string> phoneNumber;
};
int main(){
	ifstream in("testfile1.txt");
	string line;
	vector<PersonInfo> pinfo;
	while (getline(in, line)){
		PersonInfo info;
		istringstream in(line);
		in >> info.name;
		string phone;
		while (in >> phone){
			info.phoneNumber.push_back(phone);
		}
		pinfo.push_back(info);
	}
	return 0;
}