#pragma once

using namespace Core;

class FileStdStreamBuf : std::basic_streambuf<char, std::char_traits<char>> {

public:
    virtual void Core::FileStdStreamBuf::~FileStdStreamBuf();

    void close(void);
    FileStdStreamBuf(unsigned long);
    void _Init(void);
    void open(Core::File &&, Core::FileOpenMode);
    bool isOpen(void)const;
    void sync(void);
    void underflow(void);
    void overflow(int);
    void _flushoutput(void);
    void seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode);
    void seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode);
};
