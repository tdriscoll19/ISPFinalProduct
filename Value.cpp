#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Head.h"

using namespace std;


ostream &operator<<(ostream &output, const Value &v) // lists the players in the value team
{
	//cout << "The players in the value team include: \n";

	for (players x : v.valt)
	{
		//cout << x.getName() << "\n";
	}
	return output;
}


void Value::sortteam() //assigns value based on average points divided by salary
{
	int arrsize = this->getArraySize();
	/*for (int count = 0; count < arrsize; count++)
	{
	players temp(" ", 0, 0, 0, 0, 0, 0, 0, 0);
	temp = valt[count];
	val = temp.players::getVal();
	temp.setVal(val);
	valt[count] = temp;
	} */
	float val;
	int x;
	bool idk;
	for (players c : valt)
	{
		val = c.players::getVal(); //retrieves the points per salary value for the given player
		players temp(" ", 0, 0, " ");
		temp = c;
		temp.setVal(val);
		x = 0;
		while (x < arrsize)
		{
			idk = (c.getName() == valt[x].getName());
			if (idk)
			{
				//cout << c.getName() << " is number " << x << " in the array \n";
				valt[x] = temp;
				x = arrsize;
			}
			else if (!idk)
			{
				x++;
			}
		}
	}
	/*for (players l : valt)
	{
	l.players::getVal2();
	}*/

}

void Value::finSort() //outputs an ordered list of the players' value rankings
{
	int arrsize;
	arrsize = this->getArraySize();
	for (int count = 0; count < arrsize; count++)
	{
		for (players x : this->valt)
		{
			if (x > valt[count])
			{
				players temp = valt[count];
				++temp;
				valt[count] = temp;
			}
		}
	}
	int cot;
	int limit = 1;
	for (cot = 0; cot < arrsize; cot++)
	{
		//arrsize = this->getArraySize();
		for (int elem = 0; elem < arrsize; elem++)
		{
			if (valt[elem].getRank(cot + 1))
			{
				this->sendBack(valt[elem]);
			}
		}

		/*for (int ct = 0; ct < arrsize; ct++)
		{
		if (valt[ct].getRank(cot + 1))
		{
		players temp1 = valt[ct];
		cout << " trying to push " << valt[ct].getName() << " to the back \n";
		players temp2 = valt[arrsize - limit];
		valt[arrsize - limit] = temp1;
		valt[ct] = temp2;
		limit++;
		}
		}*/
	}
	cout << "\n";
	cout << "The ordered value rankings for the players are: \n";
	cout << "\n";
	for (players c : order)
	{
		cout << c;
	}
}


void Value::pickteams() //selects the specific players for each team, depending on the game format
{
	int arrsize;
	arrsize = this->getArraySize();
	if (*this < 30)
	{
		this->pick5player();
	}
	else if (!(*this < 30))
	{
		this->pick9player();
	}
	else
	{
		cout << " 'if' sequence not read \n";
	}
}



bool Value::operator< (int lim)
{
	if (valt.size() < lim)
	{
		return true;
	}
	else if (valt.size() >= lim)
	{
		return false;
	}
}


void Value::pick5player()
{
	salary = 35000;
	this->findMVP();
	this->findMid();
	this->findLast();
	cout << "The final roster is: \n";
	for (players p : valt)
	{
		if (p.getTeam())
		{
			cout << p.getName() << " at a ppg of " << p.getFDPG() << "\n";
		}
	}
}

void Value::findMVP()
{
	int arrsize = this->getArraySize();
	for (players p : valt)
	{
		int tally = 0;
		for (int count = 0; count < arrsize; count++)
		{
			if (p.getFDPG() >= valt[count].getFDPG())
			{
				tally++;
			}
		}
		if (tally >= arrsize)
		{
			//cout << p.getName() << " is the highest averaged based scoreing player \n";
			salary = salary - p.getSalary();
			int counter = 0;
			for (players c : valt)
			{
				if (p.getName() == c.getName())
				{
					players temp = p;
					temp.setScore();
					temp.setTeam();
					valt[counter] = temp;

				}
				counter++;
			}
		}
	}
}

void Value::findMid()
{
	int cap = salary;
	bool playeradded = false;
	int coun = 1;
	for (int limit = 1; limit <= 3; limit++)
	{
	REDO:
		playeradded = false;
		for (players pl : valt)
		{
			if (pl.getValRank() == coun && !pl.getScore()) //adds player to team
			{
				if (pl.capApproval(cap))
				{
					//cout << pl.getName() << " has been added to the team \n";
					int counter = 0;
					for (players c : valt)
					{
						if ((pl.getName() == c.getName()))
						{
							players temp = pl;
							temp.setTeam();
							valt[counter] = temp;
							salary = salary - pl.getSalary();
							playeradded = true;
						}
						counter++;
					}
				}
			}
		}
		if (!playeradded)
		{
			coun++;
			goto REDO;
		}
		coun++;
	}
	cout << "Players on the team thus far: \n";
	for (players p : valt)
	{
		if (p.getTeam())
		{
			cout << p.getName() << " \n";
		}
	}
}

bool players::capApproval(int sal)
{
	if (.4*sal  < this->getSalary())
	{
		return false;
	}
	else
	{
		return true;
	}

}

void Value::findLast()
{
	int arrsize = this->getArraySize();
	//cout << " salary available for remaining player: " << salary << "\n";
	for (int count = 0; count < arrsize; count++)
	{
		if ((valt[count].getSalary() < salary) && (!valt[count].getTeam()))
		{

			for (players p : valt)
			{
				if (p.getFDPG() < valt[count].getFDPG())
				{
					players temp = valt[count];
					//cout << " increasing the second ranking for " << valt[count].getName() << "\n";
					temp.setSecond();
					valt[count] = temp;
				}
			}
			//cout << valt[count].getName() << " has a second ranking of: " << valt[count].getSecond() << "\n";
		}
	}
	for (int count = (arrsize); count > 0; count--)
	{
		for (int cont = 0; cont < arrsize; cont++)
		{
			if (valt[cont].getSecond() == count)
			{
				//cout << " the last player on the team is " << valt[cont].getName() << " " << valt[cont].getSecond() << "\n";
				players temp = valt[cont];
				temp.setTeam();
				valt[cont] = temp;
				count = -1;
			}
		}
	}
	
	
}

void Value::pick9player()
{
	P = 0;
	CB = 0;
	SB = 0;
	SS = 0;
	TB = 0;
	OF = 0;
	UTIL = 0;
	salary = 35000;
	cout << "\n";
	this->choosepitcher();
	cout << "\n";
	this->roundOne();
	cout << "\n";
	this->roundTwo();
	cout << "\n";
	this->roundThree();
	cout << "the players on the team are: \n";
	if (salary < 0)
	{
		cout << "team too expensive, revise program \n";
	}
	for (players p : valt)
	{
		if (p.getTeam())
		{
			cout << p.getName() << " " << p.getPosition() << "\n";
		}
	}
}

void Value::choosepitcher()
{
	int arrsize = this->getArraySize();
	cout << "The list of pitchers in order of their value ranking are: \n";
	for (int count = 1; count <= arrsize; count++)
	{
		for (players p : valt)
		{
			if ((!p.getPosition().compare("	P	")) && p.getValRank() == count)
			{
				cout << p.getValRank() << " " << p.getName() << " " << p.getSalary() << "\n";
			}
		}
	}
	cout << " Which pitcher are you selecting? (Enter their ranking) \n";
	int pitcher;
	cin >> pitcher;
	for (int ount = 0; ount < arrsize; ount++)
	{
		if (pitcher == valt[ount].getValRank())
		{
			valt[ount] = valt[ount](valt[ount]);
			salary = salary - valt[ount].getSalary();
			P++;
		}
	}
	cout << "The salary has been reduced to " << salary << "\n";

}

void Value::roundOne()//spending on the most expensive players
{
	//cout << "Salary available for round one: " << .48 * salary << "\n";
	int localSal = .6*salary;
	int arrsize = this->getArraySize();
	for (int value = 1; value < 11; value++)
	{
		for (int count = 0; count < arrsize; count++)
		{
			if ((valt[count].getSalary() >= 4000) && (!valt[count].getTeam()) && (valt[count].getValRank() == value) && (checkPosition(valt[count])))
			{
			//	cout << "adding " << valt[count].getName() << "\n";
				valt[count] = valt[count](valt[count]);
				localSal = localSal - valt[count].getSalary();
			}
			if (localSal < 4000)
			{
			//	cout << " Salary has been maxed \n";
				count = arrsize;
				value = 12;
			}
		}
	}
	cout << " players on the team following the first round of spending are: \n";
	for (players p : valt)
	{
		if (p.getTeam())
		{
			cout << p.getName() << " " << p.getPosition() << "\n";
		}
	}
	salary = .4*salary + localSal;
	//cout << "salary remaining after round one: " << salary << "\n";
}

void Value::roundTwo()
{
	//cout << "Salary available for round two: " << salary - 5000 << "\n";
	int flex = 3500;
	int localSal = salary - 5000;
	int arrsize = this->getArraySize();
	int added = 0;
	for (int value = 1; value < 20; value++)
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (valt[count].getSalary() >= 3500 && valt[count].getSalary() <= 4000 && !valt[count].getTeam() && valt[count].getValRank() == value && checkPosition(valt[count]))
			{
				//cout << "adding " << valt[count].getName() << "\n";
				valt[count] = valt[count](valt[count]);
				localSal = localSal - valt[count].getSalary();
				added++;
			}
			if (localSal < 3500)
			{
				//cout << " Salary has been maxed \n";
				count = arrsize;
				goto SKIP;
			}
			if (added > 1)
			{
				//cout << "Max players added, decreasing price range\n";
				goto SKIP;
			}
		}
	}
SKIP:
	for (int value = 1; value < 30; value++)
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (valt[count].getSalary() >= 2800 && valt[count].getSalary() < flex && !valt[count].getTeam() && valt[count].getValRank() == value && checkPosition(valt[count]))
			{
				//cout << "adding " << valt[count].getName() << "\n";
				valt[count] = valt[count](valt[count]);
				localSal = localSal - valt[count].getSalary();
				added++;
			}
			if (localSal < 2800)
			{
				//cout << " Salary has been maxed \n";
				count = arrsize;
				goto SKIP2;
			}
		}//going forward, insitute a limit that can be toggled when not enough money is left for remaining players
	}
SKIP2:
	cout << " players on the team following the second round of spending are: \n";
	for (players p : valt)
	{
		if (p.getTeam())
		{
			cout << p.getName() << " " << p.getPosition() << "\n";
		}
	}
	salary =  5000 + localSal;
	cout << "salary remaining after round two: " << salary << "\n";
}


void Value::roundThree()
{
	string p1 = getMp();
	//cout << p1 << "\n";
	string p2 = getMp();
	//cout << p2 << "\n";
	string p3 = getMp();
	//cout << p3 << "\n";;
	int initial; 
	int localSal;
	int rosterleft = 9;
	for (players p : valt)
	{
		if (p.getTeam())
		{
			rosterleft--;
		}
	}
	//cout << " Roster spots remaining: " << rosterleft << "\n";
	if (rosterleft > 3)
	{
		cout << " Don't bet this game \n";
	}
	else if (rosterleft == 3)
	{
		initial = salary - 5000;
		if (findbest(p1, initial) > findbest(p2, initial) && findbest(p1, initial) > findbest(p3, initial))
		{
			cout << "Taking path one \n";
			placebest(p1, initial);
			placebest(p2, salary / 2);
			placebest(p3, salary);
		}
		else if (findbest(p2, initial) > findbest(p1, initial) && findbest(p2, initial) > findbest(p3, initial))
		{
			cout << "Taking path two \n";
			placebest(p2, initial);
			placebest(p1, salary / 2);
			placebest(p3, salary);
		}
		else if (findbest(p3, initial) > findbest(p1, initial) && findbest(p3, initial) > findbest(p2, initial))
		{
			cout << "Taking path three \n";
			cout << "salary for first player " << initial << "\n";
			placebest(p3, initial);
			cout << "salary for second player " << salary / 2 << "\n";
			placebest(p2, salary / 2);
			cout << "salary for third player " << salary << "\n";
			placebest(p1, salary);
			
		}
		cout << "ignored \n";
	}
	else if (rosterleft == 2)
	{
		initial = salary - 2500;
		if (findbest(p1, initial) > findbest(p2, initial))
		{
			cout << "Taking path one \n";
			placebest(p1, initial);
			placebest(p2, salary);

		}
		else if (findbest(p2, initial) > findbest(p1, initial))
		{
			cout << "Taking path two \n";
			placebest(p2, initial);
			placebest(p1, salary);
		}
	}
	else if (rosterleft == 1)
	{
		initial = salary;
		placebest(p1, initial);
	}
}

int Value::findbest(string s, int sal)
{
	int arrsize = this->getArraySize();
	
	if (!s.compare("	1B	"))
	{
		for (int count = 0; count < arrsize; count++)
		{
			if ((valt[count].getPosition() == s || !valt[count].getPosition().compare("	C	"))&& !valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition() == s && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	else if (!s.compare("UTIL"))
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (!valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition() == s && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	else
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (valt[count].getPosition() == s && !valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition() == s && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	for (int count = arrsize; count > 0; count--)
	{
		for (players p : valt)
		{
			if (p.getSecond() == count)
			{
				//cout << " The best player who plays " << s << " and fits the constraints is " << p.getName() << "\n";
				for (int cont = 0; cont < arrsize; cont++)
				{
					players temp = valt[cont];
					temp.resetSecond();
					valt[cont] = temp;
				}
				//cout << p.getFDPG() << "\n";
				return p.getFDPG();
			}
		}
	}
}

void Value::placebest(string s, int sal)
{
	START:
	int arrsize = this->getArraySize();

	if (!s.compare("	1B	"))
	{
		for (int count = 0; count < arrsize; count++)
		{
			if ((valt[count].getPosition() == s || !valt[count].getPosition().compare("	C	")) && !valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition() == s && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	else if (!s.compare("UTIL"))
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (!valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition().compare("	P	") && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	else
	{
		for (int count = 0; count < arrsize; count++)
		{
			if (valt[count].getPosition() == s && !valt[count].getTeam() && valt[count].getSalary() < sal)
			{
				for (players p : valt)
				{
					if (p.getPosition() == s && !p.getTeam() && p.getSalary() < sal && valt[count].getFDPG() > p.getFDPG())
					{
						players temp = valt[count];
						temp.setSecond();
						valt[count] = temp;
					}
				}
			}
		}
	}
	bool playeradded = false;
	for (int count = arrsize; count > 0; count--)
	{
		for (int cnt = 0; cnt < arrsize; cnt++)
		{
			if (valt[cnt].getSecond() == count)
			{
				cout << "adding " << valt[cnt].getName() << "\n";
				playeradded = true;
				salary = salary - valt[cnt].getSalary();
				players temp = valt[cnt];
				temp.setTeam();
				valt[cnt] = temp;
				for (int cont = 0; cont < arrsize; cont++)
				{
					players temp = valt[cont];
					temp.resetSecond();
					valt[cont] = temp;
				}
			}
		}
	}
	if (!playeradded)
	{
		cout << "Restarting, with more money \n";
		sal = sal + .1*salary;
		goto START;
	}
}

bool Value::checkPosition(players p)
{
	if (!p.getPosition().compare("	P	") && P < 1)
	{
		P++;
		return true;
	}
	else if (!p.getPosition().compare("	1B	") && CB < 1)
	{
		CB++;
		return true;
	}
	else if (!p.getPosition().compare("	C	") && CB < 1)
	{
		CB++;
		return true;
	}
	else if (!p.getPosition().compare("	2B	") && SB < 1)
	{
		SB++;
		return true;
	}
	else if (!p.getPosition().compare("	SS	") && SS < 1)
	{
		SS++;
		return true;
	}
	else if (!p.getPosition().compare("	3B	") && TB < 1)
	{
		TB++;
		return true;
	}
	else if (!p.getPosition().compare("	OF	") && OF < 3)
	{
		OF++;
		return true;
	}
	else if (UTIL < 1 && p.getPosition().compare("	P	"))
	{
		UTIL++;
		return true;
	}
		cout << p.getName() << "'s position was filled, he will not be added \n";
		return false;
}

