#pragma once

#include "./File.h"
#include "./FileOpenMode.h"
#include <streambuf>
#include <ios>
#include <string>


namespace Core {

class FileStdStreamBuf : std::basic_streambuf<char, std::char_traits<char>> {

public:
    virtual ~FileStdStreamBuf();

    void close();
    FileStdStreamBuf(unsigned long);
    void _Init();
    void open(Core::File &&, Core::FileOpenMode);
    bool isOpen()const;
    void sync();
    void underflow();
    void overflow(int);
    void _flushoutput();
//  void seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode); //TODO: incomplete function definition
//  void seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode); //TODO: incomplete function definition
};

}