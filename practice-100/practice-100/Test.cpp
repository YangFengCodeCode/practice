using namespace std;
#include<iostream>

//int main()
//{
//	char buffer[1024];
//	char* s = fgets(buffer, sizeof(buffer), stdin);
//	cout << s << endl;
//	
//
//	return 0;
//}

//
//class Person
//{
//public:
//	Person(const char* name = "", int age = 0)
//		:_name(name)
//		, _age(age)
//	{}
//	Person(const Person& p)
//		:_name(p._name)
//		, _age(p._age)
//	{}
//	Person(Person&& p) = default;
//private:
//	bit::string _name;
//	int _age;
//};
//
//
//int main()
//{
//	Person s1;
//	Person s2 = s1;
//	Person s3 = std::move(s1);
//	return 0;
//}




//class Person
//{
//public:
//	Person(const char* name = "", int age = 0)
//		:_name(name)
//		, _age(age)
//	{}
//	Person(const Person& p) = delete;
//private:
//	bit::string _name;
//	int _age;
//};
//
//int main()
//{
//	Person s1;
//	Person s2 = s1;
//	Person s3 = std::move(s1);
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 0, 1, 2, 3 };
//	for (auto i : arr)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}



#include<iostream>
#include<string>
using namespace std;


void Usage(const string& proc)
{
    cout << "Usage: " << proc << "subprocess-num" << endl;
}

// ./processpool 5
int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        Usage(argv[0]);
        return 1;
    }

    int sub_process_num = std::stoi(argv[1]);
    if (sub_process_num <= 0) return 1;

    return 0;

}