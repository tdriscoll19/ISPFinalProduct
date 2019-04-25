#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Head.h"

using namespace std;

void Value::addplayers(players p1)
{
	this->valt.push_back(p1);
	//cout << "added " << p1.getName() << " to the team\n";
}

string players::getName()
{
	return name;
}

int teams::getArraySize()
{
	return team.size();
}

players teams::getArrayVal(int x)
{
	return team[x - 1];
}

float players::getVal()
{
	//cout << this->FDPG << "\n";
	//cout << this->salary << "\n";
	ptct = (this->FDPG / this->salary);
	//cout << this->name << " has a points weighted value of " << ptct << "\n";
	return ptct;
}

void players::getVal2()
{
	//cout << this->name << " has a points weighted value of " << this->ptct << "\n";
}

void players::setVal(float pval)
{
	ptct = pval;
}

int Value::getArraySize()
{
	//cout << valt.size();
	return valt.size();
}

void players::getPtct()
{
	cout << name << " " << ptct << "\n";
	//int x;
	//cin >> x;

}

bool players::getRank(int comp)
{

	if (valrank == comp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool players::getSkip()
{
	if (skip)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Value::checkSame(int comparison)
{
	int finVal = valt.size() - 1;
	int sameRank = 0;
	for (players x : valt)
	{
		if (x.getRank(comparison))
		{
			sameRank++;
			if (x.getName() == valt[finVal].getName())
			{
				return sameRank;
			}
		}
		
	}
}

ostream &operator<< (ostream &out, const players &play)
{

	cout << play.valrank << " for " << play.name << " (" << play.salary << ") " << play.pos << "\n";
	return out;
}


bool players::operator>(players pl2)
{
	if (this->ptct > pl2.ptct)
	{
		//cout << name << " is better than " << pl2.name << "\n";
		return true;
	}
	else if (this->ptct < pl2.ptct)
	{

		//cout << name << " is worse than " << pl2.name << "\n";
		return false;
	}
	else
	{
		//cout << "players equal in value \n";
		return false;
	}
}


int players::getValRank()
{
	return valrank;
}

void Value::sendBack(players pl)
{
	this->order.push_back(pl);
}

float players::getFDPG()
{
	return FDPG;
}

void players::setScore()
{
	highestScorer = true;
}

void players::operator++ ()
{
	valrank++;
}

players players::operator()(players p)
{
	players temp = p;
	temp.onteam = true;
	return temp;
}


bool players::getScore()
{
	return highestScorer;
}

void players::setTeam()
{
	onteam = true;
}

bool players::getTeam()
{
	return onteam;
}

int players::getSalary()
{
	return salary;
}

void players::setSecond()
{
	secondrank++;
}

int players::getSecond()
{
	return secondrank;
}

string players::getPosition()
{
	return pos;
}

string Value::getMp()
{
	if (P < 1)
	{
		P++;
		return "	P	";
	}
	else if (CB < 1)
	{
		CB++;
		return "	1B	";
	}
	else if (SB < 1)
	{
		SB++;
		return "	2B	";
	}
	else if (SS < 1)
	{
		SS++;
		return "	SS	";
	}
	else if (TB < 1)
	{
		TB++;
		return "	3B	";
	}
	else if (OF < 3)
	{
		OF++;
		return "	OF	";
	}
	else if (UTIL < 1)
	{
		UTIL++;
		return "UTIL";
	}
	return "null";

}

void players::resetSecond()
{
	secondrank = 0;
}

