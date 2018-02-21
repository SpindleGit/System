#include "system.h"

bool desk::add_node(Element* elm){
	desk::nodes.push_back(new Node(elm));
	return true;
}

bool desk::modificate_node(size_t n, std::string data){
	return nodes[n]->modificate(data);
}

bool desk::link_nodes(size_t first, size_t second){
		nodes[first]->add_next(nodes[second]);
		nodes[second]->add_prev(nodes[first]);
		return true;
}



