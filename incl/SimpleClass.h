//SimpleClass.h
//Nathaniel Way 2011
//holds the data needed to make a simple class header and skeleton cpp

#ifndef SICLASS_H
#define SICLASS_H

#include Memberl.h
#include <stdio.h>

Class SimpleClass
{
	public:
	//constructor
	SimpleClass();
	
	//stringcreators
	char* wfname();
	char* wifndefDef();
	char* wClass();
	char* wpublic();
	char* wConstruct();
	char* wGets();
	char* wSets();
	char* wpriv();
	char* wMembers();
	char* wend();

	//substring creators for list
	char* wget( Memberl* );
	char* wset( Memberl* );
	//functions
	void addM( Memberl* );
	void remM( Memberl* );
	//getters
	char* name();
	Memberl* m();
	//setters
	void name( char* );
	void m( Memberl* ;)

	private:
	char _name[64];
	Memberl* _m;

};

#endif
