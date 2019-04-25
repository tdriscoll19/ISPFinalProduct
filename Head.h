#ifndef Head
#define Head
#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class players
{
protected:
	string name;
	string pos;
	float salary;
	float FDPG;
	float value;
	int valrank = 1;
	int secondrank = 0;
	double ptct;
	bool highestScorer = false;
	bool onteam = false;
	bool skip;

public:
	players(string n, float s, float fl, string p)
	{
		name = n; salary = s; FDPG = fl; pos = p;
	}
	float getVal();
	friend class teams;
	//void ppickteam(players pl2);
	bool operator>( players pl2);
	friend ostream &operator<< (ostream &out, const players &play);
	players operator()( players p);
	void getPtct();
	void setVal(float pval);
	void getVal2();
	string getName();
	void operator++();
	float getFDPG();
	bool getRank(int comp);
	bool getSkip();
	int getValRank();
	void setScore();
	bool getScore();
	void setTeam();
	bool getTeam();
	int getSalary();
	void setSecond();
	int getSecond();
	string getPosition();
	bool capApproval(int sal);
	void resetSecond();
};

class teams
{
protected:
	vector<players> team;
	
public:
	teams() {}
	virtual int getArraySize() = 0;
	virtual void sortteam() = 0;
	virtual void finSort() = 0;
	players getArrayVal(int x);
	virtual void pickteams() = 0;
	friend class players;
	friend class Value;
};



class Value : public teams
{
protected:
	int P;
	int CB;
	int SB;
	int SS;
	int TB;
	int OF;
	int UTIL;
	vector<players> valt;
	vector<players> order;
	int salary;
public:
	Value() : teams() {}
	friend ostream &operator<< (ostream &output, const Value &v);
	int getArraySize();
	//void fillteam(Value t1);
	void addplayers(players p1);
	void sortteam();
	//void pickteam();
	int checkSame(int comparison);
	//void skipComplex(int limit, int comp);
	//int rearrange(int lim, int comp);
	//void tellRanks(int limit, int exclude);
	void finSort();
	void sendBack(players pl);
	bool operator<(int lim);
	void pickteams();
	void pick5player();
	void pick9player();
	void findMVP();
	void findMid();
	void choosepitcher();
	void roundOne();
	bool checkPosition(players p);
	void roundTwo();
	void roundThree();
	void findLast();
	int findbest(string s, int sal);
	void placebest(string s, int sal);
	string getMp();
	friend bool players::capApproval(int sal);
	friend float players::getVal();
	friend class players;
	friend class teams;
};

#endif
