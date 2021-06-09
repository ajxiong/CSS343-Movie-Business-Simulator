// ------------------------------------------------ drama.cpp -------------------------------------------------------
// Programmer Name Course Section Number 
// Phuong Phan CSS343 section B
// Creation Date 
// 6/7/21
// Date of Last Modification 
// 6/8/21
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function 
// purpose of drama.cpp file is to contain the implementation of the Drama class's methods.  
// -------------------------------------------------------------------------------------------------------------------- 
// Notes on specifications, special algorithms, and assumptions. 
// makeNode is a method that is derived from the Movie base class. 
// default constructor and default destructor are included as a pre-cautionary measure. 
// --------------------------------------------------------------------------------------------------------------------
#include "drama.h"

// ------------------------------------ Drama --------------------------------------------------------
// Pre-conditions: none
// Post-conditions: none
// Description: default constructor included as a pre-cautionary measure
// --------------------------------------------------------------------------------------------------- 
Drama::Drama() { }

// ------------------------------------ ~Drama --------------------------------------------------------
// Pre-conditions: none
// Post-conditions: none
// Description: default destructor included as a pre-cautionary measure
// --------------------------------------------------------------------------------------------------- 
Drama::~Drama() { }

// ------------------------------------makeNode--------------------------------------------------------
// Pre-conditions: Movie trees must be read from .txt files first 
// Post-conditions: make a Node from stored data in movie class
// Description: This class helps to build a classic tree.
// --------------------------------------------------------------------------------------------------- 
NodeData* Drama::makeNode() {
    return new NodeData(director + " " + this->title, this->stock);;
}
