#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int a = 0x7fffffff;

class profiles {
private:
	string name;
	int age;
	string motto;
	string school;
public:
	void init(string name, int age, string motto, string school) {
		this->name = name;
		this->age = age;
		this->motto = motto;
		this->school = school;
	}

	void show() {
		cout << "Hello?\nMy name is : " << name << "\n";
		cout << "my age is " << age << '\n';
		cout << "my motto is " << motto << '\n';
		cout << "my school is " << school << '\n';
	}
};

profiles profile;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	profile.init("������", 17, "�¿��", "�뱸����Ʈ����̽��Ͱ���б�");
	profile.show();

	return 0;
}