//Memberl.h
//Nathaniel Way 2011

#ifndef MEMBERL_H
#define MEMBERL_H

#include <String>

Class Memberl
{
	public:
	//Constructor
	Memberl( char* n, char* t, int d, int a );
	Memberl( Memberl* );
	~Memberl();

	//Getters
	String name();
	String type();
	int dref();
	int array();

	//Setter
	void name( String );
	void type( String );
	void dref( int );
	void array( int );

	private:
	String _name[64];
	String _type[64];
	int _dref;
	int _array;
	Memberl* _next;
};

#endif
