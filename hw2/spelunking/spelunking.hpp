// spelunking.hpp
// Solomon Himelbloom
// 12 February 2021
// Spelunking in C++ (header file) example for CS 202.

#ifndef CAVE_SPELUNKING_HPP
#define CAVE_SPELUNKING_HPP

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::map;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::vector;

class Cave {
public:
    // What is the number of rooms in the cave?
    bool size() const;

    // Return current room number.
    int getCurrentRoom() const;

    // Go to room in the cave complex.
    void gotoRoom(int room);

    // Which radjacent room? 0, 1, or 2?
    void gotoAdjacentRoom(int roomIndex);

    // Connect two rooms together.
    void connect(int room1, int room2);

    // Print the short description of the room.
    void printShortDesc(int room) const;

    // Print the long description of the room.
    void printLongDesc(int room) const;

    // Save rooms to an output stream.
    void saveRooms(std::ostream& os) const;
    
    // Read rooms from an input stream.
    void readRooms(std::istream& is);
private:
    struct CaveNode {
        std::vector<std::shared_ptr<CaveNode>> adjacentRooms;
        std::string shortdesc; // A short description of this room.
        std::string longdesc; // A long description of this room.
    };

    using CaveNodePtr = std::shared_ptr<CaveNode>;
    
    std::vector<CaveNodePtr> caveRooms;
    int currentRoom;
};

#endif // CAVE_SPELUNKING_HPP