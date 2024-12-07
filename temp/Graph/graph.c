#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "graph.h"

static void waypush(list** ways, nodeP dest) {	//포인터에 대한 포인터-> 함수 내에서 포인터 수정
	list* newway = (list*)malloc(sizeof(list));
	newway->next = NULL;
	newway->way = dest;

	List workor = *ways;
	
	if (workor == NULL) {
		*ways = newway;
		return;
	}
	else {
		do {
			workor = workor->next;
		} while (workor->next != NULL);
	}
	workor->next = newway;
	
	return;
}

static void linkingNode(nodeP nodeA, nodeP nodeB) {
	waypush(&nodeA->ways, nodeB);
	waypush(&nodeB->ways, nodeA);
}

static void nodepush(Graph* theGraph, int initial) {
	nodeP newnode = (nodeP)malloc(sizeof(node));
	newnode->num = initial;
	newnode->ways = NULL;
	newnode->next = NULL;

	nodeP workor = *theGraph;

	if (workor == NULL) {
		*theGraph = newnode;
	}
	else {
		do {
			workor = workor->next;
		} while (workor->next != NULL);
	}
	workor->next = newnode;

	return;
}

void makeGraph(Graph* theGraph, int node_count, int link_count) {
	int i;

	for (i = 1; i <= node_count - 1; i += 2) {
		nodepush(theGraph, i);
		nodepush(theGraph, i + 1);
	}
	if (node_count % 2 == 1) {
		nodepush(theGraph, node_count);
	}



	우왕!
}