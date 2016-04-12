/*
 * Vertex.h
 *
 *  Created on: 10/04/2016
 *      Author: mariajoaomirapaulo
 */

#ifndef SRC_VERTEX_H_
#define SRC_VERTEX_H_

#include <vector>
#include "Graph.h"

using namespace std;

template<class T> class Edge;
template<class T> class Graph;

template<class T>
class Vertex {
	T info;
	vector<Edge<T> > adj;
	bool visited;
public:
	Vertex(T in);
	friend class Graph<T> ;
};

template<class T>
Vertex<T>::Vertex(T in) :
		info(in), visited(false) {
}





#endif /* SRC_VERTEX_H_ */