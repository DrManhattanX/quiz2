//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************
/**
* @file college.h
* @brief College.h file for project
* @author Mathew Aberegg
*/
#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H


class College{
	public:
	/**
	* @param s takes in string s and sets it equal to name
	* @return returns nothing
	*/
	College(std::string s);
	~College();
	/**
	* @param other takes in college other and adds a new node to it.
	* @return does not return anything but will end when new node is added
	*/
	College(const College& other);
	College& operator =(const College& other);
	void add(course& c);
	void remove(std::string coursename);
	void display(std::ostream& outs);
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
