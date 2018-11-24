#pragma once
class Students
{
public:
	Students();
	~Students();
	Students(int, int);
	
	int getAge() {
		return age;
	}

	void setAge(int age_set)
	{
		age = age_set;
	}
private:
	int age, year;

};

