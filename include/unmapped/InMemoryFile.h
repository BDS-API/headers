#pragma once

#include "../core/Path.h"
#include <string>


class InMemoryFile {

public:

    InMemoryFile(Core::Path const&);
    ~InMemoryFile();
    std::string getFilename()const;
    void rename(Core::Path const&);
//  void open(InMemoryAccessMode); //TODO: incomplete function definition
//  void close(InMemoryAccessMode); //TODO: incomplete function definition
//  void append(leveldb::Slice const&); //TODO: incomplete function definition
//  void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const; //TODO: incomplete function definition
//  void flushToDisk(leveldb::Env *); //TODO: incomplete function definition
    void markForDelete();
    bool isSafeToDelete()const;
    bool isOpenForWrite()const;
    bool isMarkedForDelete()const;
    bool isMarkedDirty()const;
};
