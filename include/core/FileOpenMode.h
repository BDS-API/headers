#pragma once



using namespace Core;

class FileOpenMode {

public:

    FileOpenMode(void);
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
    FileOpenMode(std::_Ios_Openmode);
    FileOpenMode(char const*);
    void cMode();
    void cModeWide();
    bool isRead()const;
    bool isWrite()const;
    bool isTruncate()const;
    bool isCreate()const;
    bool isAppend()const;
    bool isBinary()const;
    bool isReadOnly()const;
};
