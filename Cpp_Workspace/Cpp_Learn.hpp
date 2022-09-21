#pragma once

#ifndef Cpp_Learn_hpp
#define Cpp_Learn_hpp

#include <cstdio>
#include <cstdlib>
#include <iostream> // cout

template <typename T>
inline void templateFunc(T& input);

template <typename T>
class TemplateClass {
	private:
		T privateProp;
	public:
		T publicProp;
		TemplateClass();
		//~TemplateClass();
};

template <typename T>
class Shape {
	private:
		T distance;
		T angle;
	public:
		virtual T getArea();
		Shape(const Shape& s):distance(s.distance),angle(s.angle){}
		~Shape();
		Shape& operator=(const Shape& s){
			distance = s.distance;
			angle = s.angle;
			return *this;
		}
};

//pass by ref

class PassRef{
	public: 
		virtual void add(int&)=0; // A single pure function mean that the class cant be instantiated
		virtual void sub(int&)=0;
		virtual ~PassRef()=0;
};

PassRef::~PassRef(){};

class PassedRef:PassRef {
	public:
		void add(int &a) {
			a++;
		}
		void sub(int &b) {
			b++;
		}
		PassedRef(){}
		~PassedRef(){
			std::printf("PassedRef destruct\n");
		}
};

class InitRef:PassRef {
	private:
		int x;
		int y;
	public:
		void add(int &a){}
		void sub(int &b){}
		InitRef(int uX, int uY): x(uX), y(uY){ //Initialize =/= Assignment 
			std::printf("Sicko Mode Activated!\n");
		}
		~InitRef(){}
};

class PersistanceDataViaCopying{
	private:
		std::string name;
		int age;
	public:
	    //Constructor
	    PersistanceDataViaCopying(std::string uName, int uAge): name(uName), age(uAge){}
		~PersistanceDataViaCopying(){}
		//Copy constructor
		PersistanceDataViaCopying(const PersistanceDataViaCopying &copy): name(copy.name), age(copy.age){}

		PersistanceDataViaCopying& operator=(const PersistanceDataViaCopying &copy){
			name = copy.name;
			age = copy.age;
			return *this;
		}

};

class derviedCopy:PersistanceDataViaCopying {
	private:
        double distance;
	public:
	    derviedCopy(const derviedCopy &d):PersistanceDataViaCopying(d), distance(d.distance){}
		~derviedCopy(){}
        
		derviedCopy& operator=(const derviedCopy &d){
			PersistanceDataViaCopying::operator=(d);
			distance = d.distance;
			return *this;
		}
		
};


#include "Cpp_Learn.cpp" //Needed for template classes 

#endif
