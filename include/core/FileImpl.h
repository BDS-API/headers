#pragma once

#include <string>
#include "./FileOpenMode.h"
#include "./Result.h"
#include "./FileSystemImpl.h"


namespace Core {

class FileImpl {

public:
    virtual ~FileImpl();

    void getNumFiles();
    FileImpl(Core::FileSystemImpl *, Core::FileOpenMode);
    void setLoggingEnabled(bool);
    void getLoggingEnabled()const;
    void getTransaction();
    std::string getPath()const;
    void getBlockSize()const;
    bool isOpen();
    void getOpenMode()const;
    void close();
//  void read(void *, unsigned long, unsigned long *); //TODO: incomplete function definition
    void _readOperation(Core::Result &&, unsigned long);
//  void readExactly(void *, unsigned long); //TODO: incomplete function definition
    void skip(unsigned long);
//  void readAtPosition(unsigned long, void *, unsigned long, unsigned long *); //TODO: incomplete function definition
    void getPosition(unsigned long *);
    void setPosition(unsigned long);
//  void write(void const*, unsigned long); //TODO: incomplete function definition
    void _writeOperation(Core::Result &&, unsigned long);
    void flush();
    void getSize(unsigned long *);
    void getRemainingSize(unsigned long *);
    void notifyChangeInFileSize(long, long);
};

}