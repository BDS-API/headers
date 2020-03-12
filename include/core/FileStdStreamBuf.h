#pragma once

#include <string>
#include <streambuf>
#include "FileOpenMode.h"
#include <ios>
#include "File.h"


namespace Core {

    class FileStdStreamBuf : std::basic_streambuf<char, std::char_traits<char>> {

    public:
        ~FileStdStreamBuf();
        bool isOpen()const;
        void close();
//      void seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode); //TODO: incomplete function definition
        FileStdStreamBuf(unsigned long);
        void underflow();
        void _flushoutput();
        void _Init();
        void overflow(int);
        void sync();
//      void seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode); //TODO: incomplete function definition
        void open(Core::File &&, Core::FileOpenMode);
    };
}
