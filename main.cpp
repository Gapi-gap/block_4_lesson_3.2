#include<iostream>
#include<cctype>
#include<string>

class Counter
{
public:
	Counter(int number)
	{
		count = number;
	}
	Counter() = default;

	void Print()
	{
		std::cout << count << std::endl;
	}

	void Inc()
	{
		count++;
	}
	void Dec()
	{
		count--;
	}

private:
	int count = 1;
};

int main()
{
	setlocale(LC_ALL, "ru");
	int number = 0;
	std::cout << "Вы хотите изменить начальное значение счетчика? Введите yes для продолжения ";
	std::string YesNo;
	std::cin >> YesNo;
	std::string help = "Введите начальную команду ('+', '-', '=', 'x'): ";
	if (YesNo == "yes")
	{
		std::cout << "Введите начальное значение счетчика ";
		std::cin >> number;
	}

	char BreakPoint = ' ';
	Counter MyCounet(number);
	do
	{
		std::cout << help;
		std::cin >> BreakPoint;
		if (BreakPoint == '=')
			MyCounet.Print();
		else if (BreakPoint == '-')
			MyCounet.Dec();
		else if (BreakPoint == '+')
			MyCounet.Inc();

	} while (BreakPoint != 'x');

	std::cout << "Прощай" << std::endl;
	return EXIT_SUCCESS;
}