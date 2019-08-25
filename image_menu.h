#ifndef _IMAGE_MENU_H_ //if not defined
#define _IMAGE_MENU_H_

#include <iostream> //std::istream and std::ostream
#include <string> //std::string

std::string getString( std::istream& is, std::ostream& os, const std::string& prompt );
int getInteger( std::istream& is, std::ostream& os, const std::string& prompt );
double getDouble( std::istream& is, std::ostream& os, const std::string& prompt );
int assignment1( std::istream& is, std::ostream& os );

#endif /* _IMAGE_MENU_H_*/