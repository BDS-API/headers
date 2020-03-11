#pragma once

#include <istream>
#include "./Path.h"


namespace Core {

class FileStream : std::iostream {

public:
    virtual ~FileStream();

    void is_open()const;
    void close();
    FileStream();
    FileStream();
    FileStream(unsigned long);
    FileStream(unsigned long);
//  FileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//  void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//  FileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//  FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//  FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
    void setLoggingEnabled(bool);
};

}