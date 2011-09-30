//SimpleClass.cpp
//Nathaniel Way 2011

#include "../incl/SimpleClass.h"

//constructor
SimpleClass::SimpleClass()
{
	this->name( "UNDECLARED" );
	this->m( 0 ); 
}


//stringcreators
char* SimpleClass::wfname()
{
	char c[128];
	c = "//";
	strncat( c, this->name(), 64 );
	strncat( c, ".h\n\n", 16); 
}


char* SimpleClass::wifndefDef()
{
	char mname[16];
	for( int i =0; i < 8; i++ ){
		if( this->name()[i] > 140 && this->name()[i] < 173 ){
			mname[i] = this->name()[i]+40;
		}else{
			mname[i] = this->name()[i];
		}
	}
	mname[8] = "_H\n";
	char c[64] = "ifndef ";
	strncat( c, mname , 16 );
	strncat( c, "#define ", 16 );
	strncat( c, mname, 16 );
	strncat( c, "\n\n", 8 );
	return c;
	
}


char* SimpleClass::wClass()
{

}


char* SimpleClass::wpublic()
{

}


char* SimpleClass::wConstruct()
{

}


char* SimpleClass::wGets()
{

}


char* SimpleClass::wSets()
{

}


char* SimpleClass::wpriv()
{

}


char* SimpleClass::wMembers()
{

}


char* SimpleClass::wend()
{

}



//substring creators for list
char* SimpleClass::wget( Memberl* )
{

}


char* SimpleClass::wset( Memberl* )
{

}


//functions
void SimpleClass::addM( Memberl* )
{

}


void SimpleClass::remM( Memberl* )
{

}


//getters
char* SimpleClass::name()
{

}


Memberl* SimpleClass::m()
{

}


//setters
void SimpleClass::name( char* )
{

}


void SimpleClass::m( Memberl* )
{

}



