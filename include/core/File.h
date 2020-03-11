#pragma once

#include "./File.h"
#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include <vector>
#include "./FileSystemImpl.h"
#include "./Path.h"


namespace Core {

class File {

public:

    File();
//  void write(void const*, unsigned long); //TODO: incomplete function definition
    ~File();
    bool isOpen()const;
    File(Core::File &&);
//  void readAtPosition(unsigned long, void *, unsigned long, unsigned long *); //TODO: incomplete function definition
//  void read(void *, unsigned long, unsigned long *); //TODO: incomplete function definition
    void skip(unsigned long);
    void flush();
    void getSize(unsigned long *);
//  void readExactly(void *, unsigned long); //TODO: incomplete function definition
    void getRemainingSize(unsigned long *);
    void getPosition(unsigned long *);
    void setPosition(unsigned long);
//  void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
    void setLoggingEnabled(bool);
    void close();
    bool isNearTransactionLimit(unsigned long)const;
    void cleanPath(Core::Path);
    void cleanPathSeparators(Core::Path);
    void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
    void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, unsigned char const*);
    void getBlockSize()const;
    File(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &&, std::unique_ptr<Core::FileSystemImpl, std::default_delete<std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &&>> &&);
};

}