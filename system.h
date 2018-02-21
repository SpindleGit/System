
#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <iostream>
#include <stack>
#include <vector>

#include "additionalStructsAClasses.h"

// Класс отражает содержание и соотношение размещенных на Доске объектов
// Содержит перечень указателей на объекты
class desk{
	std::vector<Node*> nodes;
public:
// Добавляет новый объект с некоторым Element'ом внутри
bool add_node(Element* elm);
// Изменяет элемент внутри объекта под номером n по средствам строки data
bool modificate_node(size_t n, std::string data);
// Связывает два объекта между собой (второй будет следовать за первым)
bool link_nodes(size_t first, size_t second);
};


#endif /* SYSTEM_H_ */
