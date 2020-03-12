#pragma once

#include <ios>
#include <streambuf>
#include "FileOpenMode.h"


namespace Core {

    class FileStdStreamBuf : std::basic_streambuf<char, std::char_traits<char>> {

    public:
        ~FileStdStreamBuf();
        bool isOpen()const;
        void close();
        FileStdStreamBuf(unsigned long);
        void open(Core::File &&, Core::FileOpenMode);
//      void seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode); //TODO: incomplete function definition
        void underflow();
        void sync();
        void _Init();
//      void seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode); //TODO: incomplete function definition
        void _flushoutput();
        void overflow(int);
    };
}
