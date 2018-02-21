#include "constsAvalues.h"
#include "elements.h"

bool logical_operation::change(std::string data){
	return true;
}

bool math_operation::change(std::string data){
	return true;
}

bool container_manipulation::change(std::string data){
	return true;
}

value_type::value_type(): type(None), value(Empty){}

// Парсер изменяющий строки data класса value_type
bool value_type::change(std::string data){

	size_t first_marker = data.find(MarkerT) - 1 - first_len;
	std::string _type = data.substr(first_len, first_marker);

	size_t second_marker = data.find(MarkerV) + 1;
	size_t second_len = data.size() - second_marker;
	std::string _value = data.substr(second_marker, second_len);

	value_type::type = _type;

	if (type == Str)
		value_type::value = _value;
	else if (type == Int){

		for (int i = 0; i < _value.size(); ++i)
			if (not isdigit(_value[i]))
				if (isspace(_value[i])){
					_value.erase(i, 1);
					--i;
				} else
					return false;

		value_type::value = _value;

	} else if (type == Dble){
		bool flag = true;

		for (int i = 0; i < _value.size(); ++i)
			if (not isdigit(_value[i]))
				if (isspace(_value[i])){
					_value.erase(i, 1);
					--i;
				} else if (flag && (_value[i] == '.')){
					flag = false;
				} else return false;

		value_type::value = _value;

	} else if (type == Object){
		value_type::value = Empty;

	} else if (type == None){
		value_type::value = Empty;

	} else return false;

	return true;
}
