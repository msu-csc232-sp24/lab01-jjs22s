/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.2023.07.27
 * @date    07/27/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef MSU_CSC232_H_
#define MSU_CSC232_H_

#define FALSE 0
#define TRUE 1

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

const int ROSTER_SIZE{5};

const int NUM_COURSES{3}; 

double grades[ROSTER_SIZE];

double gradeBook[NUM_COURSES][ROSTER_SIZE];

double maxGrade(int numElements, double gradeList[]);

int indexOfMaxGrade(int numRows, int numCols, double gradeArray[NUM_COURSES][ROSTER_SIZE]);

double maxGrade(int numElements, double gradeList[ROSTER_SIZE]){

    double highGrade = 0;

    for (int counter = 0; counter < numElements; counter++){
         if (gradeList[counter] > highGrade){
            highGrade = gradeList[counter];
            
        }
    }
    return highGrade;
}

int indexOfMaxGrade( int numRows, int numCols, double gradeArray[NUM_COURSES][ROSTER_SIZE]){

    int highGrade = 0; 
    int highCourse = 0; 

    for (int countRow = 0; countRow < numRows; countRow++){
        for (int countCol = 0; countCol < numCols; countCol++){
            if (gradeArray[countRow][countCol] > highGrade){
                highGrade = gradeArray[countRow][countCol];
                highCourse = countRow;
                
            }
        }
    }
    return highCourse;
}

#endif // MSU_CSC232_H_
