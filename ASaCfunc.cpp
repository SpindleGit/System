#include "additionalStructsAClasses.h"

Node::Node(Element* elm): elem(elm), prevs(), nexts(){}

Node::Node(): elem(0), prevs(), nexts(){
}

bool Node::modificate(std::string data){
	return Node::elem->change(data);
}

void Node::add_prev(Node* ePtr){
	Node::prevs.insert(ePtr);
}

void Node::add_next(Node* ePtr){
	Node::nexts.insert(ePtr);
}

std::pair<Node::link_it, Node::link_it> Node::get_prevs(){
	return std::make_pair(Node::prevs.begin(), Node::prevs.end());
}

std::pair<Node::link_it, Node::link_it> Node::get_nexts(){
		return std::make_pair(Node::nexts.begin(), Node::nexts.end());
}
