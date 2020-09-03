
using namespace std;
#include <iostream>

int main()
{
	cout << "Hello and welcome to HUNT THE WUMPUS\n";
	cout << "The Wumpus is in one of the many rooms in this building\n";

	// Topology of a dodecahedron--each room connects to 3 other rooms
	int rooms[20][3] = {
		{2,5,8},   //1
		{1,3,10},  //2
		{2,4,12},  //3
		{3,5,14},  //4
		{1,4,6},   //5
		{5,7,15},  //6
		{6,8,17},  //7
		{1,7,9},   //8
		{8,10,18}, //9
		{2,9,11},  //10
		{10,12,19},//11
		{3,11,13}, //12
		{12,14,20},//13
		{4,13,15}, //14
		{6,14,16}, //15
		{15,17,20},//16
		{7,16,18}, //17
		{9,17,19}, //18
		{11,18,20},//19
		{13,16,19} //20
	};

	return 0;
}



