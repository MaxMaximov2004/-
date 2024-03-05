#include <iostream>
#include <string>

//1) +
//2) -
//3) *
//4) /
long double sum(std::string first, std::string second);
long double raz(std::string first, std::string second);
long double del(std::string first, std::string second);
long double proiz(std::string first, std::string second);
long double func(std::string str);
std::string funct_store[4] = { "+","-","*","/" };


class member {
public:
	std::string main_str;
	std::string next_first_str;
	std::string next_second_str;
	int comma; //знак по которому иожно строку разделить на 2 отдельных операнда функции
	int funct_id = -1;

	member(std::string input) {

		for (int i = 0; i < 4; i++) {
			comma = main_str.find(funct_store[i]);
			if (comma != std::string::npos) { funct_id = i; }
		}

		next_first_str = main_str.substr(0, comma);
		next_second_str = main_str.substr(comma + 1, main_str.length());

	}
};

long double sum(std::string first, std::string second) {

	member first_str(first);
	member second_str(second);
	long double a, b;

	if (first_str.funct_id == -1) { a = stod(first_str.main_str); }
	else {
		switch (first_str.funct_id)
		{
		case (1): {a = sum(first_str.next_first_str, first_str.next_second_str); break; }
		case (2): {a = raz(first_str.next_first_str, first_str.next_second_str); break; }
		case (3): {a = del(first_str.next_first_str, first_str.next_second_str); break; }
		case (4): {a = proiz(first_str.next_first_str, first_str.next_second_str); break; }
		default:
			break;
		}
	}

	if (second_str.funct_id == -1) { a = stod(second_str.main_str); }
	else {
		switch (second_str.funct_id)
		{
		case (1): {b = sum(second_str.next_first_str, second_str.next_second_str); break; }
		case (2): {b = raz(second_str.next_first_str, second_str.next_second_str); break; }
		case (3): {b = del(second_str.next_first_str, second_str.next_second_str); break; }
		case (4): {b = proiz(second_str.next_first_str, second_str.next_second_str); break; }
		default:
			break;
		}
	}

	return(a + b);
}

long double raz(std::string first, std::string second) {

	member first_str = first;
	member second_str = second;
	long double a, b;
	return (2);
}

long double del(std::string first, std::string second) {

	member first_str = first;
	member second_str = second;
	long double a, b;
	return (3);
}

long double proiz(std::string first, std::string second) {

	member first_str = first;
	member second_str = second;
	long double a, b;
	return (4);
}

long double function(std::string str) {

	member main_str(str);

	std::cout << main_str.funct_id <<"   "<<main_str.next_first_str<<"   "<<main_str.next_second_str<< "\n\n";

	switch (main_str.funct_id)
	{
	case (1): {return(sum(main_str.next_first_str, main_str.next_second_str)); break; }
	case (2): {return(raz(main_str.next_first_str, main_str.next_second_str)); break; }
	case (3): {return(del(main_str.next_first_str, main_str.next_second_str)); break; }
	case (4): {return(proiz(main_str.next_first_str, main_str.next_second_str)); break; }
	default: {return(-1); }
		
	}
}


