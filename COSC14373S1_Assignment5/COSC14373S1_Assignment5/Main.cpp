#include <iostream>
#include "lowerCaseString.h"
#include "upperCaseString.h"

using namespace std;

void main()
{
	WCS_String str1("ABCdef");
	lowerCaseString LC1;
	lowerCaseString LC2(str1);
	lowerCaseString LC3(LC2);


}