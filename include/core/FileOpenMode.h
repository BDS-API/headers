#pragma once

#include "./FileOpenMode.h"


namespace Core {

class FileOpenMode {

public:

    FileOpenMode();
    void readExisting();
    void writeCreateOrTruncate();
    void writeCreateOrAppend();
    void binary();
    void read();
    void write();
    void create();
    void truncate();
    void append();
    void wb();
    void rb();
    void wPlus();
    void rbPlus();
    void wbPlus();
//  FileOpenMode(std::_Ios_Openmode); //TODO: incomplete function definition
    FileOpenMode(char const*);
    void cMode();
    void cModeWide();
    void operator==(Core::FileOpenMode const&)const;
    bool isRead()const;
    bool isWrite()const;
    bool isTruncate()const;
    bool isCreate()const;
    bool isAppend()const;
    bool isBinary()const;
    bool isReadOnly()const;
};

}