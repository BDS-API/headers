#pragma once



using namespace Core;

class FileStream : std::iostream {

public:
    virtual Core::FileStream::~FileStream()

    void is_open()const;
    void close();
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
