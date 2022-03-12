/**
 * Copyright 2019 University of Michigan EECS183
 *
 * test.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * Project 4: Battleship
 *
 * Contains functions for testing classes in the project. 
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Position.h"
#include "Ship.h"
#include "Player.h"
#include "Game.h"
#include "utility.h"

using namespace std;


void test_position();
void test_ship();
void test_player();
void test_game();

void startTests() {
    test_position();
    test_ship();
    test_player();
    
    return;
}

void test_position() {
   
    // test of default constructor
    Position p1;
    // test of the other constructor
    Position p2(3, 9);
    // test of member function: set_row(int row_in)
    p1.set_row(5);
    // test of member function: set_col(int col_in)
    p1.set_col(3);
    // test of member functions get_row() and get_col()
    cout << "( " << p1.get_row()
         << ", " << p1.get_col()
         << " )" << endl;
    // you can also do cin >> p1;
    p1.read(cin);
    cout << p1 << endl;
    return;
}

void test_ship() {
    // Write your tests here
    return;
}

void test_player() {
    // Write your tests here
    return;
}

