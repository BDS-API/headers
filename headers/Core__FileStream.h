#pragma once

class Core::FileStream {

public:
    virtual ~FileStream();

    void is_open(void)const;
    void close(void);
    void FileStream(void);
    void FileStream(void);
    void FileStream(unsigned long);
    void FileStream(unsigned long);
    void FileStream(Core::Path const&, std::_Ios_Openmode);
    void open(Core::Path const&, std::_Ios_Openmode);
    void FileStream(Core::Path const&, std::_Ios_Openmode);
    void FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode);
    void FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode);
    void setLoggingEnabled(bool);
};
