#pragma once
#include "Game.h"
#include "GameStorage.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#define MAX_ITEMS 100


struct NodeType
{
	game data;
	NodeType* next;
};

class GameList
{
private:
	int length;
	NodeType *listData;

	

public:
	GameList();
	GameList(const GameList& otherList);
	~GameList();

	void print() const;
	void Add(const game e);
	void Clear();
	GameList& operator=(GameList& rhs);
	
	friend ostream& operator<<(ostream& os, GameList& rhs);
	friend istream& operator>>(istream& is, GameList& rhs);

	void Delete(std::string title);
	
	int Length()const;

	bool FindGame(std::string title, game& result) const;

	void Add(const GameList& otherList);

	

};