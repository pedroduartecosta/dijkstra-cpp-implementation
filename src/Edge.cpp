/*
 * Edge.cpp
 *
 *  Created on: 18/04/2016
 *      Author: Bernardo
 */

#include "Edge.h"



Edge::Edge(Vertex *s, Vertex *d, Road* road, double distance) :
	src(s), dest(d), road(road), distance(distance) {}

Vertex* Edge::getSrc() const{
	return src;
}

Vertex* Edge::getDest() const{
	return dest;
}

string Edge::getRoadName() const{
	return road->getName();
}

Road* Edge::getRoad() const{
	return road;
}

void Edge::setEdgeID(int id){
	edgeID=id;
}
int Edge::getEdgeID() const{
	return edgeID;
}
