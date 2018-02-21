/*
 * additionalStructsAClasses.h
 *
 *  Created on: 20.02.2018
 *      Author: temeypy
 */

#ifndef ADDITIONALSTRUCTSACLASSES_H_
#define ADDITIONALSTRUCTSACLASSES_H_

#include <set>
#include <utility>
#include "elements.h"


// Каждый элемент, размещенный на доске,
// будет порождать экземпляр типа Node
// и заноситься в массив подобных в классе desk
// Содержит в себе:
//          1. Указатель на объект класса Elemnt
//          2. Мно-во указателей на предыудщие элементы типа Node
//          3. Мно-во указателей на последущие эелементы типа Node
class Node{
	Element* elem;
	std::set<Node*> prevs;
	std::set<Node*> nexts;
public:
	// Указатель для работы с множествами предыдущих и последующих элементов
	typedef std::set<Node*>::iterator link_it;
	// Создает node с переданным в него Element'ом
	Node(Element* elm);
	// Пустой конструктор
	Node();
	// Модифицирует Element по средставм переданной строчки data
	bool modificate(std::string data);
	// Связывает элемент с предыдущим
	void add_prev(Node* ePtr);
	// Связывает элемент с полсдеующим
	void add_next(Node* ePtr);
	// Возвращает все предыдущие первого порядка (прямая связь) в виде указателей
	std::pair<link_it, link_it> get_prevs();
	// Возвращает все последующие первого порядка (прямая связь) в виде указателей
	std::pair<link_it, link_it> get_nexts();
};

#endif /* ADDITIONALSTRUCTSACLASSES_H_ */
