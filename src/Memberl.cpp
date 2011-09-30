//Memberl.cpp
//Nathaniel Way 2011

//Constructor
Memberl::Memberl( String n, String t, int d, int a )
{
	name( n );
	type( t );
	dref( d );
	array( a );
}


Memberl::Memberl( Memberl* m )
{
	name( m.name() );
	type( m.type() );
	dref( m.dref() );
	array( m.array() );
}




//Getters
String Memberl::name()
{
	return this->_name;
}


String Memberl::type()
{
	return this->_type;
}


int Memberl::dref()
{
	return this->_dref;
}


int Memberl::array()
{
	return this->_array;
}




//Setter
void Memberl::name( String n )
{
	this->_name = n;
}

void Memberl::type( String t )
{
	this->_type = t;
}


void Memberl::dref( int d )
{
	this->_dref = d;
}


void Memberl::array( int a )
{
	this->_array = a;
}

