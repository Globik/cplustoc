//scrutator.me/post/2012/12/18/new-ctors-p2.aspx
//en.cppreference.com/w/cpp/language/try_catch
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <iostream>
class Rectangle
{
public:
Rectangle(size_t width,size_t height):m_Width(width),m_Height(height){
printf("Rectangle(size_t width,size_t height\n");	
}
Rectangle(size_t width):Rectangle(width,width){
printf("Rectangle(size_t width)\n");
throw std::string("suka");	
}
Rectangle(std::string):Rectangle(76){printf("Rectangle(std::string)\n");}
~Rectangle(){printf("~Rectangle()\n");}
private:
size_t m_Width;
size_t m_Height;
};

int main(){
try{
Rectangle square("uuuuuh");
}catch(std::string &s){printf("here must be error: %s\n", s.c_str());return 0;}
return 0;	
}
//make constrdeleg
