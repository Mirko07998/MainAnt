#include "../headers/parser.h"

parser::parser():text(""),input(""){};

void parser::parseGraph(){};
void parser::setInput(QString text)
{
    this->input = text;
}

QString parser::getInput()
{
    return this->input;
}

void parser::compileProgramm(){
   text = std::string("#include <iostream>\n") +
          std::string("int main(){\n") +
           std::string("std::cout<< \"") +
           input.toUtf8().constData() +
           std::string("\"<<std::endl;\n")+
           std::string("return 0;\n}");

   std::ofstream fdata;
   fdata.open("../MainAnt/GeneratedCode/code.cpp");
   fdata << text;
   fdata.close();
};
void parser::runProgramm(){
    system("g++ ../MainAnt/GeneratedCode/code.cpp");
    system("../MainAnt/GeneratedCode/a.out");
};
