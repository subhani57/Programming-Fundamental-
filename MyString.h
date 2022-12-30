#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
public:
	int getStringLength(char * );
	void concatenate(char* destination, char* source);
	void copyString(char* destination, char* source);
	int convertToInteger(char* source);
	float convertToFloat(char* source);

};
#endif