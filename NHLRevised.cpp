// NHLRevised.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Head.h"

using namespace std;

void teams::sortteam()
{

} 

void teams::pickteams()
{

}

/*void TBD::fillteam(teams t1)
{
	int x = t1.getArraySize();
	for (int count = 1; count < x; count++)
	{
		players play = t1.getArrayVal(count);
		this->valt.push_back(play);
	}
}*/

/*
void Value::pickteam()
{
	cout << "\n";
	int rankedsame = 0;
	int comparison = 1;
	int count = 0;
	int exclude;
	bool chekah;
	int arrsize = this->getArraySize();
	rankedsame = this->checkSame(comparison);
	int max = rankedsame - 1;
	cout << rankedsame << "\n";
	for (int cycle2 = 0; cycle2 <= max; cycle2++)
	{
		//cout << "Starting cycle " << cycle2 + 1 << "\n";
		this->skipComplex(arrsize, comparison);
		exclude = this->rearrange(arrsize, comparison);
		this->tellRanks(arrsize, exclude);
		//int pause;
		//cin >> pause;
		comparison++;
		rankedsame = 0;
	}
	cout << " Value rankings for each player: " << "\n";
	for (players x : valt)
	{
		cout << x;
	}
}
*/

/*void Value::skipComplex(int limit, int comp)
{
	for (int cycle = 0; cycle < limit; cycle++)
	{
		players transport = valt[cycle];
		valt[cycle] = valt[cycle](comp, valt[cycle]);
		//cout << " skip function completed \n";
	}
}*/
/*
void Value::tellRanks(int limit, int exclude)
{
	int t1 = 0;
	int t2 = 1;
	static int x = 0;
	bool chek;
	for (int count = 0; count < (limit - exclude); count++)
	{
	

		chek = (valt[t1] > valt[t2]);
		if (chek)
		{
			players temp = valt[t2];
			++temp;
			valt[t2] = temp;
			if ((count + 2) >= (limit - exclude))
			{
				count = limit;
			}
			else
			{
				t2 = (count + 2);
			}

		}
		
		else if (!chek)
		{
			players temp = valt[t1];
			++temp;
			valt[t1] = temp;
			t1 = t2;
			if ((count + 2) >= (limit - exclude))
			{
				count = limit;
			}
			else
			{
				t2 = count + 2;
			}

		}
	}
}

int Value::rearrange(int limit, int comp)
{
	static int x = 0;
	for (int count = 0; count < limit; count++)
	{
		if (valt[count].getSkip())
		{
			
			players temp = valt[count];
			//cout << "moving " << temp.getName() << " to the end of the array \n";
			players temp2 = valt[limit - (1 + x)];
			valt[limit - (1 + x)] = temp;
			valt[count] = temp2;
			x++;
			goto FIN;
		}
	}
FIN:
	return x;
}
*/
/*void players::ppickteam(players pl2)
{
	if (this->ptct < pl2.ptct)
	{
		this->valrank++;
	}
	else if (this->ptct < pl2.ptct)
	{
		pl2++;
	}
}*/

int main()
{
	{
		Value t1;
		/*cout << " How many players do you want to compare? \n";
		int playerCount;
		cin >> playerCount;
		bool ignore = true;
		for (int count = 0; count <= playerCount; count++)
		{	
			if (count == playerCount)
			{
				players player("null", 0, 0, " ");
				t1.addplayers(player);
				goto FORWARD;
			}
			RETRY:
			string name;
			cout << "Enter the name of the player: \n";
			if (ignore)
			{
				cin.ignore(120, '\n');
			}
			getline(cin, name);
			float salary;
			//figure out how to implement checking function without interferring with data inputs.
			cout << "Enter the salary of the player (in thousands) \n";
			cin >> salary;
			cout << "Enter the Fan Duel Points Per Game \n";
			float FDPG;
			cin >> FDPG;
			cout << "Enter the position of the player.\n";
			string position;
			cin.ignore(120, '\n');
			getline(cin, position);
			string check;
			cout << "Ok to enter player?\n";
			cin.ignore(120, '\n');
			getline(cin, check);
			if (!check.compare("no") || !check.compare("No") || !check.compare("NO"))
			{
				ignore = false;
				goto RETRY;
			}
			ignore = false;
			players player(name, salary, FDPG, position);
			//cout << player;
			t1.addplayers(player);
		}
		FORWARD: */
		{
			players	p1("	Bauer	", 11200, 43.33333333, "	P	");
			players	p2("	Kershaw	", 10800, 34.66666667, "	P	");
			players	p3("	Syndergaard	", 9900, 32.33333333, "	P	");
			players	p4("	Nola	", 9300, 20.66666667, "	P	");
			players	p5("	Castillo	", 8800, 47.33333333, "	P	");
			players	p6("	Shoemaker	", 8300, 45.33333333, "	P	");
			players	p7("	Lucchesi	", 8200, 28.33333333, "	P	");
			players	p8("	Peralta	", 7800, 25.66666667, "	P	");
			players	p9("	Cahill	", 7700, 31.66666667, "	P	");
			players	p10("	Richards	", 7300, 36, "	P	");
			players	p11("	Darvish	", 7100, 12, "	P	");
			players	p12("	Hudson	", 6600, 16.66666667, "	P	");
			players	p13("	Perez	", 6400, 15.33333333, "	P	");
			players	p14("	Hoffman	", 6300, 2.333333333, "	P	");
			players	p15("	Miller	", 6200, 4, "	P	");
			players	p16("	Santana	", 5600, -7, "	P	");
			players	p17("	Bellinger	", 5100, 22.08235258, "	OF	");
			players	p18("	Trout	", 5000, 17.63333384, "	OF	");
			players	p19("	Yelich	", 4800, 16.58124924, "	OF	");
			players	p20("	Alonso	", 4600, 17.47857121, "	1B	");
			players	p21("	Hoskins	", 4500, 17.04285758, "	1B	");
			players	p22("	Conforto	", 4400, 15.07857186, "	OF	");
			players	p23("	Merrifield	", 4300, 14.2200002, "	OF	");
			players	p24("	Mondesi	", 4300, 14.28666687, "	SS	");
			players	p25("	Baez	", 4200, 13.41428593, "	SS	");
			players	p26("	Vogelbach	", 4200, 16.60833359, "	1B	");
			players	p27("	Machado	", 4200, 10.875, "	3B	");
			players	p28("	Harper	", 4200, 13.93571472, "	OF	");
			players	p29("	Santana	", 4100, 11.65333354, "	1B	");
			players	p30("	McCutchen	", 4100, 13.75714329, "	OF	");
			players	p31("	Polanco	", 4100, 12.01666641, "	SS	");
			players	p32("	Gallo	", 4100, 13.10833359, "	OF	");
			players	p33("	Pederson	", 4100, 13.03750038, "	OF	");
			players	p34("	Heyward	", 4100, 16.61666616, "	OF	");
			players	p35("	Cain	", 4000, 10.15625, "	OF	");
			players	p36("	Encarnacion	", 4000, 13.87142835, "	1B	");
			players	p37("	Haniger	", 4000, 15.28333367, "	OF	");
			players	p38("	Wong	", 4000, 14.05333354, "	2B	");
			players	p39("	Lindor	", 4000, 13.5936712, "	SS	");
			players	p40("	DeJong	", 4000, 13.85333354, "	SS	");
			players	p41("	Rizzo	", 4000, 12.09999956, "	1B	");
			players	p42("	Bryant	", 4000, 10.27692355, "	3B	");
			players	p43("	Grandal	", 4000, 13.08571407, "	C	");
			players	p44("	Gordon	", 3900, 15.22142901, "	OF	");
			players	p45("	Moustakas	", 3900, 10.70625019, "	2B	");
			players	p46("	Cruz	", 3900, 11.69999981, "	OF	");
			players	p47("	Muncy	", 3900, 10.38749981, "	1B	");
			players	p48("	Andrus	", 3800, 15.11428615, "	SS	");
			players	p49("	Anderson	", 3800, 16.06666692, "	SS	");
			players	p50("	Kepler	", 3800, 11.18333308, "	OF	");
			players	p51("	Contreras	", 3800, 13.42307692, "	C	");
			players	p52("	Hernandez	", 3800, 12.6799998, "	2B	");
			players	p53("	Seager	", 3800, 9.105882532, "	SS	");
			players	p54("	Tatis Jr.	", 3800, 12.08125019, "	SS	");
			players	p55("	Goldschmidt	", 3800, 12.8799998, "	1B	");
			players	p56("	Santana	", 3800, 15.76111179, "	OF	");
			players	p57("	Dozier	", 3800, 10.29999953, "	3B	");
			players	p58("	Upton	", 3700, 10.78965517, "	OF	");
			players	p59("	Moncada	", 3700, 14.79285758, "	3B	");
			players	p60("	Rosario	", 3700, 12.32499949, "	OF	");
			players	p61("	Buxton	", 3700, 11.2636365, "	OF	");
			players	p62("	Arenado	", 3700, 9.368749619, "	3B	");
			players	p63("	Ozuna	", 3700, 13.94615408, "	OF	");
			players	p64("	Nimmo	", 3700, 10.2642855, "	OF	");
			players	p65("	Franco	", 3700, 12.54285758, "	3B	");
			players	p66("	Beckham	", 3600, 14.03750038, "	SS	");
			players	p67("	Choo	", 3600, 9.976922842, "	OF	");
			players	p68("	Turner	", 3600, 8.600000381, "	3B	");
			players	p69("	McNeil	", 3600, 10.37692261, "	OF	");
			players	p70("	Renfroe	", 3600, 9.52666626, "	OF	");
			players	p71("	Suarez	", 3500, 9.700000218, "	3B	");
			players	p72("	Mazara	", 3500, 10.47499975, "	OF	");
			players	p73("	Schoop	", 3500, 10.50909077, "	2B	");
			players	p74("	Dahl	", 3500, 10.88000031, "	OF	");
			players	p75("	Story	", 3500, 10.73750019, "	SS	");
			players	p76("	Rosario	", 3500, 10.09999956, "	SS	");
			players	p77("	Pence	", 3400, 7.611111111, "	OF	");
			players	p78("	Martin	", 3400, 10.74285671, "	OF	");
			players	p79("	Reyes	", 3400, 6.782353121, "	OF	");
			players	p80("	Ohtani	", 3400, 9.923684639, "	OF	");
			players	p81("	Soler	", 3400, 11.52666626, "	OF	");
			players	p82("	Garver	", 3400, 16.44285692, "	C	");
			players	p83("	Bruce	", 3400, 12.93124962, "	OF	");
			players	p84("	Carpenter	", 3400, 9.440000407, "	3B	");
			players	p85("	O'Hearn	", 3300, 8.42142868, "	1B	");
			players	p86("	Braun	", 3300, 9.769230769, "	OF	");
			players	p87("	Votto	", 3300, 8.114285605, "	1B	");
			players	p88("	Descalso	", 3300, 9.09166654, "	2B	");
			players	p89("	Herrera	", 3300, 8.907142639, "	OF	");
			players	p90("	Astudillo	", 3300, 12.05714308, "	C	");
			players	p91("	Galvis	", 3300, 12.25625038, "	SS	");
			players	p92("	La Stella	", 3300, 8.492857252, "	2B	");
			players	p93("	Smith	", 3300, 12.34999956, "	OF	");
			players	p94("	Smoak	", 3200, 10.90833282, "	1B	");
			players	p95("	Schwarber	", 3200, 8.457142966, "	OF	");
			players	p96("	Freese	", 3200, 7.541666667, "	3B	");
			players	p97("	Segura	", 3200, 12.06428528, "	SS	");
			players	p98("	Blackmon	", 3200, 7.61333313, "	OF	");
			players	p99("	Goodwin	", 3200, 8.138461773, "	OF	");
			players	p100("	Pujols	", 3100, 7.879999797, "	1B	");
			players	p101("	Ramirez	", 3100, 5.746666463, "	3B	");
			players	p102("	Rojas	", 3100, 6.928571429, "	SS	");
			players	p103("	Abreu	", 3100, 11.41428593, "	1B	");
			players	p104("	Gordon	", 3100, 11.55882353, "	2B	");
			players	p105("	Pollock	", 3100, 8.694117827, "	OF	");
			players	p106("	Winker	", 3100, 8.957142966, "	OF	");
			players	p107("	Walker	", 3000, 6.71875, "	1B	");
			players	p108("	Jimenez	", 3000, 8.200000218, "	OF	");
			players	p109("	Cano	", 3000, 8.169230534, "	2B	");
			players	p110("	Dietrich	", 3000, 10.20769207, "	OF	");
			players	p111("	Guzman	", 3000, 8.977778117, "	1B	");
			players	p112("	Cespedes	", 3000, 11.46052632, "	OF	");
			players	p113("	Simmons	", 3000, 6.914285932, "	SS	");
			players	p114("	Kipnis	", 3000, 9.057823129, "	2B	");
			players	p115("	Shaw	", 3000, 6.864285605, "	3B	");
			players	p116("	Realmuto	", 3000, 7.82857132, "	C	");
			players	p117("	Healy	", 3000, 11.14444478, "	3B	");
			players	p118("	Lowrie	", 3000, 10.44649666, "	2B	");
			players	p119("	Caratini	", 3000, 13.55000051, "	C	");
			players	p120("	Murphy	", 3000, 3.099999905, "	1B	");
			players	p121("	Gennett	", 3000, 10.50129838, "	2B	");
			players	p122("	Arcia	", 2900, 7.926666768, "	SS	");
			players	p123("	Zobrist	", 2900, 7.75, "	OF	");
			players	p124("	Myers	", 2900, 9.111764347, "	OF	");
			players	p125("	Bour	", 2900, 8.275000254, "	1B	");
			players	p126("	Davis	", 2900, 9.581818321, "	3B	");
			players	p127("	Anderson	", 2900, 7.739999898, "	3B	");
			players	p128("	Gonzalez	", 2900, 6.199999809, "	OF	");
			players	p129("	Garcia	", 2800, 11.04166667, "	OF	");
			players	p130("	Cabrera	", 2800, 10.39230816, "	3B	");
			players	p131("	Aguilar	", 2800, 6.253846389, "	1B	");
			players	p132	("	Margot	", 2800, 8.052940817, "	OF	");
			players	p133	("	Martin	", 2800, 12.40000025, "	C	");
			players	p134	("	Bauers	", 2800, 7.564285823, "	OF	");
			players	p135	("	Barnes	", 2800, 9.084615267, "	C	");
			players	p136	("	Ramos	", 2800, 8.476922842, "	C	");
			players	p137	("	Granderson	", 2800, 6.414285932, "	OF	");
			players	p138	("	Molina	", 2700, 7.607142857, "	C	");
			players	p139	("	Prado	", 2700, 6.145454407, "	1B	");
			players	p140	("	Fletcher	", 2700, 6.392857143, "	OF	");
			players	p141	("	Verdugo	", 2700, 7.65625, "	OF	");
			players	p142	("	Bader	", 2700, 8.361538227, "	OF	");
			players	p143	("	Gurriel Jr.	", 2700, 6.300000117, "	2B	");
			players	p144	("	DeShields	", 2700, 9.514285496, "	OF	");
			players	p145	("	Hosmer	", 2700, 7.650000095, "	1B	");
			players	p146	("	Hernandez	", 2600, 9.107692425, "	2B	");
			players	p147	("	Gore	", 2600, 8.757142748, "	OF	");
			players	p148	("	Odor	", 2600, 5.916666667, "	2B	");
			players	p149	("	Alonso	", 2600, 8.514285496, "	1B	");
			players	p150	("	Urias	", 2600, 3.53333346, "	2B	");
			players	p151	("	Alfaro	", 2600, 9.083333333, "	C	");
			players	p152	("	Narvaez	", 2600, 8.942856925, "	C	");
			players	p153	("	Sano	", 2600, 9.25211302, "	3B	");
			players	p154	("	Grichuk	", 2600, 8.9375, "	OF	");
			players	p155	("	Smith	", 2600, 5.157142639, "	1B	");
			players	p156	("	Ramirez	", 2500, 7.676923312, "	1B	");
			players	p157	("	Bote	", 2500, 5.753846389, "	2B	");
			players	p158	("	Schebler	", 2500, 6.450000218, "	OF	");
			players	p159	("	Hernandez	", 2500, 7.279999797, "	OF	");
			players	p160	("	Reynolds	", 2500, 5.100000109, "	1B	");
			players	p161	("	Frazier	", 2500, 9.376522164, "	3B	");
			players	p162	("	Cordero	", 2500, 5.10000017, "	OF	");
			players	p163	("	Calhoun	", 2500, 7.121428353, "	OF	");
			players	p164	("	Miller	", 2500, 6.907692542, "	2B	");
			players	p165	("	Castro	", 2500, 6.775000095, "	2B	");
			players	p166	("	McMahon	", 2500, 6.585714068, "	1B	");
			players	p167	("	Rondon	", 2500, 7.387499809, "	2B	");
			players	p168	("	Martinez	", 2400, 4.019999949, "	OF	");
			players	p169	("	Owings	", 2400, 7.307143075, "	2B	");
			players	p170	("	Almora Jr.	", 2400, 5.342857361, "	OF	");
			players	p171	("	Tellez	", 2400, 7.357142857, "	1B	");
			players	p172	("	Taylor	", 2400, 4.717646879, "	OF	");
			players	p173	("	Thames	", 2400, 4.460000102, "	1B	");
			players	p174	("	Brinson	", 2400, 4.849999905, "	OF	");
			players	p175	("	Fowler	", 2400, 5.892857143, "	OF	");
			players	p176	("	Kiner-Falefa	", 2300, 7.514285496, "	C	");
			players	p177	("	Hamilton	", 2300, 5.625, "	OF	");
			players	p178	("	Hedges	", 2300, 6.854545593, "	C	");
			players	p179	("	Puig	", 2300, 6.266666412, "	OF	");
			players	p180	("	Desmond	", 2300, 3.966666667, "	OF	");
			players	p181	("	Naquin	", 2300, 6.430769113, "	OF	");
			players	p182	("	Lagares	", 2300, 5.792857034, "	OF	");
			players	p183	("	Hampson	", 2300, 3.719999949, "	2B	");
			players	p184	("	Perez	", 2300, 6.240000153, "	C	");
			players	p185	("	Jay	", 2300, 7.711888453, "	OF	");
			players	p186	("	Gamel	", 2300, 4.85833327, "	OF	");
			players	p187	("	Dean	", 2300, 18.19999949, "	OF	");
			players	p188	("	Zagunis	", 2300, 4.720000076, "	OF	");
			players	p189	("	Herrera	", 2300, 3.837500095, "	OF	");
			players	p190	("	Murphy	", 2300, 9.975000381, "	C	");
			players	p191	("	Lucroy	", 2300, 6.049999782, "	C	");
			players	p192	("	Iannetta	", 2300, 5.840000153, "	C	");
			players	p193	("	Cron	", 2200, 6.527273005, "	1B	");
			players	p194	("	Castro	", 2200, 4.149999936, "	C	");
			players	p195	("	Gale	", 2200, 0, "	C	");
			players	p196	("	Wieters	", 2200, 11.25, "	C	");
			players	p197	("	Castillo	", 2200, 4.444444444, "	C	");
			players	p198	("	Kingery	", 2200, 5.711111281, "	SS	");
			players	p199	("	Moore	", 2200, 4.633333206, "	SS	");
			players	p200	("	Kinsler	", 2200, 5.7, "	2B	");
			players	p201	("	Jackson	", 2200, 1, "	OF	");
			players	p202	("	Urena	", 2200, 4.900000095, "	3B	");
			players	p203	("	O'Brien	", 2200, 4.133333418, "	OF	");
			players	p204	("	Perez	", 2200, 7.2, "	3B	");
			players	p205	("	Gyorko	", 2200, 3.174999952, "	2B	");
			players	p206	("	Farmer	", 2200, 5.322222392, "	C	");
			players	p207	("	McKinney	", 2200, 7.592307458, "	OF	");
			players	p208	("	Forsythe	", 2200, 9.362500191, "	1B	");
			players	p209	("	McCann	", 2200, 8.728571211, "	C	");
			players	p210	("	d'Arnaud	", 2200, 6.46666654, "	C	");
			players	p211	("	Pina	", 2200, 4.340000153, "	C	");
			players	p212	("	Ervin	", 2200, 6.099999905, "	OF	");
			players	p213	("	Maldonado	", 2200, 4.549999873, "	C	");
			players	p214	("	Fuentes	", 2100, 1.771428517, "	1B	");
			players	p215	("	Allen	", 2100, 2.14166673, "	OF	");
			players	p216	("	Broxton	", 2100, 5.608333588, "	OF	");
			players	p217	("	Peraza	", 2100, 4.607142857, "	2B	");
			players	p218	("	Ward	", 2100, 2, "	3B	");
			players	p219	("	Hanson	", 2100, 3.487499952, "	2B	");
			players	p220	("	O'Neill	", 2100, 5.292307927, "	OF	");
			players	p221	("	Plawecki	", 2100, 4.41428566, "	C	");
			players	p222	("	Barnhart	", 2100, 6.083333333, "	C	");
			players	p223	("	Davis	", 2000, 2.6, "	C	");
			players	p224	("	Cozart	", 2000, 2.228571483, "	3B	");
			players	p225	("	Nido	", 2000, 0, "	C	");
			players	p226	("	Valaika	", 2000, 2.760000038, "	2B	");
			players	p227	("	Cooper	", 2000, 0, "	OF	");
			players	p228	("	Mathis	", 2000, 4.871428353, "	C	");
			players	p229	("	Kemp	", 2000, 3.623076806, "	OF	");
			players	p230	("	Bourjos	", 2000, 1.223076894, "	OF	");
			players	p231	("	Zimmer	", 2000, 6.744117737, "	OF	");
			players	p232	("	Tapia	", 2000, 2.213333384, "	OF	");
			players	p233	("	Cave	", 2000, 3.600000109, "	OF	");
			players	p234	("	Adrianza	", 2000, 3.58571434, "	SS	");
			players	p235	("	Duda	", 2000, 6.070000076, "	1B	");
			players	p236	("	Stamets	", 2000, 2.91428566, "	SS	");
			players	p237	("	Wolters	", 2000, 3.336363706, "	C	");
			players	p238	("	Russell	", 2000, 6.756923265, "	SS	");
			players	p239	("	Daza	", 2000, 1, "	OF	");
			players	p240	("	Suzuki	", 2000, 1.5, "	OF	");
			players	p241	("	Schwindel	", 2000, 0.5, "	OF	");
			players	p242	("	Mejia	", 2000, 3.462500095, "	C	");
			players	p243	("	Wisdom	", 2000, 2.299999952, "	1B	");
			players	p244	("	Brito	", 2000, 1.533333302, "	OF	");
			players	p245	("	Riddle	", 2000, 3.792857034, "	SS	");
			players	p246	("	Palka	", 2000, 1.9, "	OF	");
			


		t1.addplayers(p1);
		t1.addplayers(p2);
		t1.addplayers(p3);
		t1.addplayers(p4);
		t1.addplayers(p5);
		t1.addplayers(p6);
		t1.addplayers(p7);
		t1.addplayers(p8);
		t1.addplayers(p9);
		t1.addplayers(p10);
		t1.addplayers(p11);
		t1.addplayers(p12);
		t1.addplayers(p13);
		t1.addplayers(p14);
		t1.addplayers(p15);
		t1.addplayers(p16);
		t1.addplayers(p17);
		t1.addplayers(p18);
		t1.addplayers(p19);
		t1.addplayers(p20);
		t1.addplayers(p21);
		t1.addplayers(p22);
		t1.addplayers(p23);
		t1.addplayers(p24);
		t1.addplayers(p25);
		t1.addplayers(p26);
		t1.addplayers(p27);
		t1.addplayers(p28);
		t1.addplayers(p29);
		t1.addplayers(p30);
		t1.addplayers(p31);
		t1.addplayers(p32);
		t1.addplayers(p33);
		t1.addplayers(p34);
		t1.addplayers(p35);
		t1.addplayers(p36);
		t1.addplayers(p37);
		t1.addplayers(p38);
		t1.addplayers(p39);
		t1.addplayers(p40);
		t1.addplayers(p41);
		t1.addplayers(p42);
		t1.addplayers(p43);
		t1.addplayers(p44);
		t1.addplayers(p45);
		t1.addplayers(p46);
		t1.addplayers(p47);
		t1.addplayers(p48);
		t1.addplayers(p49);
		t1.addplayers(p50);
		t1.addplayers(p51);
		t1.addplayers(p52);
		t1.addplayers(p53);
		t1.addplayers(p54);
		t1.addplayers(p55);
		t1.addplayers(p56);
		t1.addplayers(p57);
		t1.addplayers(p58);
		t1.addplayers(p59);
		t1.addplayers(p60);
		t1.addplayers(p61);
		t1.addplayers(p62);
		t1.addplayers(p63);
		t1.addplayers(p64);
		t1.addplayers(p65);
		t1.addplayers(p66);
		t1.addplayers(p67);
		t1.addplayers(p68);
		t1.addplayers(p69);
		t1.addplayers(p70);
		t1.addplayers(p71);
		t1.addplayers(p72);
		t1.addplayers(p73);
		t1.addplayers(p74);
		t1.addplayers(p75);
		t1.addplayers(p76);
		t1.addplayers(p77);
		t1.addplayers(p78);
		t1.addplayers(p79);
		t1.addplayers(p80);
		t1.addplayers(p81);
		t1.addplayers(p82);
		t1.addplayers(p83);
		t1.addplayers(p84);
		t1.addplayers(p85);
		t1.addplayers(p86);
		t1.addplayers(p87);
		t1.addplayers(p88);
		t1.addplayers(p89);
		t1.addplayers(p90);
		t1.addplayers(p91);
		t1.addplayers(p92);
		t1.addplayers(p93);
		t1.addplayers(p94);
		t1.addplayers(p95);
		t1.addplayers(p96);
		t1.addplayers(p97);
		t1.addplayers(p98);
		t1.addplayers(p99);
		t1.addplayers(p100);
		t1.addplayers(p101);
		t1.addplayers(p102);
		t1.addplayers(p103);
		t1.addplayers(p104);
		t1.addplayers(p105);
		t1.addplayers(p106);
		t1.addplayers(p107);
		t1.addplayers(p108);
		t1.addplayers(p109);
		t1.addplayers(p110);
		t1.addplayers(p111);
		t1.addplayers(p112);
		t1.addplayers(p113);
		t1.addplayers(p114);
		t1.addplayers(p115);
		t1.addplayers(p116);
		t1.addplayers(p117);
		t1.addplayers(p118);
		t1.addplayers(p119);
		t1.addplayers(p120);
		t1.addplayers(p121);
		t1.addplayers(p122);
		t1.addplayers(p123);
		t1.addplayers(p124);
		t1.addplayers(p125);
		t1.addplayers(p126);
		t1.addplayers(p127);
		t1.addplayers(p128);
		t1.addplayers(p129);
		t1.addplayers(p130);
		t1.addplayers(p131);
		t1.addplayers(p132);
		t1.addplayers(p133);
		t1.addplayers(p134);
		t1.addplayers(p135);
		t1.addplayers(p136);
		t1.addplayers(p137);
		t1.addplayers(p138);
		t1.addplayers(p139);
		t1.addplayers(p140);
		t1.addplayers(p141);
		t1.addplayers(p142);
		t1.addplayers(p143);
		t1.addplayers(p144);
		t1.addplayers(p145);
		t1.addplayers(p146);
		t1.addplayers(p147);
		t1.addplayers(p148);
		t1.addplayers(p149);
		t1.addplayers(p150);
		t1.addplayers(p151);
		t1.addplayers(p152);
		t1.addplayers(p153);
		t1.addplayers(p154);
		t1.addplayers(p155);
		t1.addplayers(p156);
		t1.addplayers(p157);
		t1.addplayers(p158);
		t1.addplayers(p159);
		t1.addplayers(p160);
		t1.addplayers(p161);
		t1.addplayers(p162);
		t1.addplayers(p163);
		t1.addplayers(p164);
		t1.addplayers(p165);
		t1.addplayers(p166);
		t1.addplayers(p167);
		t1.addplayers(p168);
		t1.addplayers(p169);
		t1.addplayers(p170);
		t1.addplayers(p171);
		t1.addplayers(p172);
		t1.addplayers(p173);
		t1.addplayers(p174);
		t1.addplayers(p175);
		t1.addplayers(p176);
		t1.addplayers(p177);
		t1.addplayers(p178);
		t1.addplayers(p179);
		t1.addplayers(p180);
		t1.addplayers(p181);
		t1.addplayers(p182);
		t1.addplayers(p183);
		t1.addplayers(p184);
		t1.addplayers(p185);
		t1.addplayers(p186);
		t1.addplayers(p187);
		t1.addplayers(p188);
		t1.addplayers(p189);
		t1.addplayers(p190);
		t1.addplayers(p191);
		t1.addplayers(p192);
		t1.addplayers(p193);
		t1.addplayers(p194);
		t1.addplayers(p195);
		t1.addplayers(p196);
		t1.addplayers(p197);
		t1.addplayers(p198);
		t1.addplayers(p199);
		t1.addplayers(p200);
		t1.addplayers(p201);
		t1.addplayers(p202);
		t1.addplayers(p203);
		t1.addplayers(p204);
		t1.addplayers(p205);
		t1.addplayers(p206);
		t1.addplayers(p207);
		t1.addplayers(p208);
		t1.addplayers(p209);
		t1.addplayers(p210);
		t1.addplayers(p211);
		t1.addplayers(p212);
		t1.addplayers(p213);
		t1.addplayers(p214);
		t1.addplayers(p215);
		t1.addplayers(p216);
		t1.addplayers(p217);
		t1.addplayers(p218);
		t1.addplayers(p219);
		t1.addplayers(p220);
		t1.addplayers(p221);
		t1.addplayers(p222);
		t1.addplayers(p223);
		t1.addplayers(p224);
		t1.addplayers(p225);
		t1.addplayers(p226);
		t1.addplayers(p227);
		t1.addplayers(p228);
		t1.addplayers(p229);
		t1.addplayers(p230);
		t1.addplayers(p231);
		t1.addplayers(p232);
		t1.addplayers(p233);
		t1.addplayers(p234);
		t1.addplayers(p235);
		t1.addplayers(p236);
		t1.addplayers(p237);
		t1.addplayers(p238);
		t1.addplayers(p239);
		t1.addplayers(p240);
		t1.addplayers(p241);
		t1.addplayers(p242);
		t1.addplayers(p243);
		t1.addplayers(p244);
		t1.addplayers(p245);
		t1.addplayers(p246);
	/*	t1.addplayers(p247);
		t1.addplayers(p248);
		t1.addplayers(p249);
		t1.addplayers(p250);
		t1.addplayers(p251);
		t1.addplayers(p252);
		t1.addplayers(p253);
		t1.addplayers(p254);
		t1.addplayers(p255);
		t1.addplayers(p256);
		t1.addplayers(p257);
		t1.addplayers(p258);
		t1.addplayers(p259);
		t1.addplayers(p260);
		t1.addplayers(p261);
		t1.addplayers(p262);
		t1.addplayers(p263);
		t1.addplayers(p264);
		t1.addplayers(p265);
		t1.addplayers(p266);
		t1.addplayers(p267);
		t1.addplayers(p268);
		t1.addplayers(p269);
		t1.addplayers(p270);
		t1.addplayers(p271);
		t1.addplayers(p272);
		t1.addplayers(p273);
		t1.addplayers(p274);
		t1.addplayers(p275);
		t1.addplayers(p276);
		t1.addplayers(p277);
		t1.addplayers(p278);
		t1.addplayers(p279);
		t1.addplayers(p280);
		t1.addplayers(p290);
		t1.addplayers(p291);
		t1.addplayers(p292);
		t1.addplayers(p293);
		t1.addplayers(p294);
	/*	t1.addplayers(p295);
		t1.addplayers(p296);
		t1.addplayers(p297);
		t1.addplayers(p298);
		t1.addplayers(p299); 
		t1.addplayers(p300);
		t1.addplayers(p301);
		t1.addplayers(p302);
		t1.addplayers(p303);
		t1.addplayers(p304);
		t1.addplayers(p305);
		t1.addplayers(p306);
		t1.addplayers(p307);
		t1.addplayers(p308);
		t1.addplayers(p309);
		t1.addplayers(p310);
		t1.addplayers(p311);
		*/
		}
		teams *team;
		team = &t1;
		//cout << t1;
		team->sortteam();
		t1.finSort();
		team->pickteams();
	}
    return 0;
}

