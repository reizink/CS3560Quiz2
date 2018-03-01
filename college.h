//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

/**
@file college.h
@author Reilly Zink
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
	College(std::string s);
	~College();
	College(const College& other);
	/**
	@brief overloads equals operator
	*/
	College& operator =(const College& other);
	/**
	@brief adds a course to your schedule
	*/
	void add(course& c);
	/**
	@brief removes a course from your schedule
	*/
	void remove(std::string coursename);
	void display(std::ostream& outs);
	/**
	@brief counts your total hours for the semester
	*/
	double hours();
	/**
	@brief averages your grade points
	*/
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
