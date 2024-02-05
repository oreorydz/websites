#include <iostream>
#include <stdio.h>
#include <stdlib.h>   
#include <time.h>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "polish");
	srand(time(NULL));
	string answers;
	string questions[25][6] = {
		{"W którym roku miała miejsce bitwa pod Grunwaldem?", "1410", "1492", "1453", "1385", "1"},
{"Która planeta jest znana jako 'Planeta Czerwona'?", "Mars", "Saturn", "Wenus", "Jowisz", "1"},
{"Która góra jest najwyższą na świecie?", "Mount Everest", "K2", "Kangchenjunga", "Lhotse", "1"},
{"Ile lat trwały wojny napoleońskie?", "10", "25", "12", "20", "3"},
{"Który kraj jest uważany za kolebkę renesansu?", "Francja", "Wenecja", "Hiszpania", "Włochy", "4"},
{"Która kobieta była pierwszą laureatką dwóch nagród Nobla w dwóch różnych dziedzinach?", "Maria Skłodowska-Curie", "Gerty Cori", "Dorothy Crowfoot Hodgkin", "Rosalind Franklin", "1"},
{"Kto był pierwszym władcą Imperium Rzymskiego?", "Lucjusz Korneliusz Sulla", "Scypion Afrykański", "Mark Antonius", "Juliusz Cezar", "4"},
{"Który artysta malował 'Nocną Straż'?", "Rembrandt", "Michelangelo", "Leonardo da Vinci", "Vincent van Gogh", "1"},
{"W którym roku miała miejsce Wielka Rewolucja Francuska?", "1789", "1801", "1799", "1905", "1"},
{"Który kraj był gospodarzem pierwszych nowożytnych letnich igrzysk olimpijskich?", "Grecja", "Francja", "Niemcy", "Włochy", "1"},
{"Która z rzek jest najdłuższa na świecie?", "Nil", "Jangcy", "Missisipi", "Amazonka", "1"},
{"W którym roku miała miejsce Rewolucja Październikowa w Rosji?", "1917", "1933", "1921", "1940-1941", "1"},
{"Które miasto jest stolicą Australii?", "Canberra", "Sydney", "Melbourne", "Brisbane", "1"},
{"Ile krajów graniczy z Polską?", "5", "8", "9", "7", "4"},
{"W którym roku miała miejsce bitwa pod Stalingradem?", "1942-1943", "1944-1945", "1939-1940", "1940-1941", "1"},
{"Która planeta jest najbliżej Słońca?", "Merkury", "Jowisz", "Mars", "Wenus", "1"},
{"Kto był pierwszym prezydentem Korei Południowej?", "Rhee Syng-man", "Roh Moo-hyun", "Kim Dae-jung", "Park Chung-hee", "1"},
{"Kto był architektem wieży Eiffla?", "Gustave Eiffel", "Frank Lloyd Wright", "Le Corbusier", "Antoni Gaudí", "1"},
{"Które państwo posiada najwięcej wysp na świecie?", "Indonezja", "Szwecja", "Filipiny", "Grecja", "2"},
{"Kto był pierwszym prezydentem Rzeczypospolitej Polskiej po 1989 roku?", "Lech Wałęsa", "Bronisław Komorowski", "Aleksander Kwaśniewski", "Andrzej Duda", "1"},
{"Która rzeka przepływa przez Bagdad?", "Tygrys", "Indus", "Eufrat", "Nil", "1"},
{"W którym roku odbyła się pierwsza podróż krążąca dookoła świata?", "1519-1522", "1670-1671", "1607-1610", "1492-1493", "1"},
{"W którym roku została podpisana Deklaracja Niepodległości Stanów Zjednoczonych?", "1776", "1789", "1801", "1792", "1"},
{"W którym roku miała miejsce bitwa pod Kannami?", "216 p.n.e.", "241 p.n.e.", "202 p.n.e.", "190 p.n.e.", "1"}
	};

	cout << "Aby odpowiedzieć na pytanie wpisz numerek dobrej odpowiedzi" << endl;
	int ques;
	int answ[12] = { 500,1000,2000,5000,10000,20000,40000,75000,125000,250000,500000,1000000 };
	int j;
	int i;
	for (i = 0; i < 12; i++) {
		do {
			ques = rand() % 25;
		} while (questions[ques][5] == "");
		for (j = 0; j < 5; j++) {
			if (j > 0) {
				cout << j << ". " << questions[ques][j] << endl;
			}
			else {
				cout << questions[ques][j] << endl;
			}
		}
		cin >> answers;
		if (answers == questions[ques][5]) {
			cout << "Wygrales " << answ[i] << "zł" << endl;
			Sleep(500);
			system("cls");
		}
		else {
			cout << "Przegrales" << endl;
			break;
		}
		questions[ques][5] = "";
	};
	return 0;
}