#include<iostream>
#include<vector>

struct Student 
{
	std::string last_name = "no name";
	int age = 0;
	double midGrade = 0;
};

void object(std::vector<Student>& books) 
{
	int size;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		Student student;
		std::cin >> student.last_name;
		std::cin >> student.age;
		std::cin >> student.midGrade;
		books.push_back(student);
	}
}

void print(std::vector<Student>& books) 
{
	for (int i = 0; i < books.size(); ++i)
	{
		std::cout << "Last name: " << books[i].last_name << std::endl;
		std::cout << "Age: " << books[i].age << std::endl;
		std::cout << "Sred ball: " << books[i].midGrade << "\n" << std::endl;
	}
}


int main() 
{
	std::vector<Student> info;
	object(info);
	print(info);
}