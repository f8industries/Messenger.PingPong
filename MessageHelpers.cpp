#include "MessageHelpers.h"



//MessageHelpers::MessageHelpers()
//{
//}


//MessageHelpers::~MessageHelpers()
//{
//}

void MessageHelpers::fillUp(const int size, TAO::String_Manager &text)
{
	std::string str(size, 'o');
	text = str.c_str();
}
