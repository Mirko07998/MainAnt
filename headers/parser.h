#ifndef PARSER_H
#define PARSER_H
#include <QString>
#include <string>
#include <fstream>
class parser{
public:
    parser();

    void setInput(QString text);
    QString getInput();
    void compileProgramm();
    void runProgramm();
    void parseGraph();


private:
    std::string text;
    QString input;
};



#endif // PARSER_H
