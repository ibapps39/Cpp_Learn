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
		virtual void add(int&)=0;
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
		PassedRef(){};
		~PassedRef(){
			std::printf("PassedRef destruct\n");
		}
};

class InitRef:PassRef

#include "Cpp_Learn.cpp"

#endif
