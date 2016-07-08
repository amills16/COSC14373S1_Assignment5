#include "digitString.h"

digitString::digitString()
{}

digitString::digitString(const digitString & LC) : WCS_String(LC)
{}

digitString::digitString(const WCS_String & Str) : WCS_String(Str)
{
	ToUpper();
}

digitString digitString::Concat(const digitString & LC)
{
	WCS_String::Concat(LC);
	return *this;
}

digitString digitString::Concat(const WCS_String & Str)
{
	WCS_String::Concat(Str);
	ToUpper();
	return *this;
}

digitString digitString::Copy(const digitString & LC)
{
	WCS_String::Copy(LC);
	return *this;
}

digitString digitString::Copy(const WCS_String & Str)
{
	WCS_String::Copy(Str);
	ToUpper();
	return *this;
}

digitString &digitString::operator = (const digitString & LC)
{
	Copy(LC);
	ToUpper();
	return *this;
}

digitString &digitString::operator = (const WCS_String & LC)
{
	Copy(LC);
	ToUpper();
	return *this;
}

digitString::~digitString()
{}