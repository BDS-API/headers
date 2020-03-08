#pragma once



using namespace Core;

class FileStream : std::iostream {

public:
    virtual void Core::FileStream::~FileStream();

    void is_open(void)const;
    void close(void);
    FileStream(void);
    FileStream(void);
    FileStream(unsigned long);
    FileStream(unsigned long);
    FileStream(Core::Path const&, std::_Ios_Openmode);
    void open(Core::Path const&, std::_Ios_Openmode);
    FileStream(Core::Path const&, std::_Ios_Openmode);
    FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode);
    FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode);
    void setLoggingEnabled(bool);
};
