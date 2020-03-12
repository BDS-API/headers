#pragma once

#include "../core/Path.h"


class InMemoryFile {

public:
    void markForDelete();
    ~InMemoryFile();
    bool isSafeToDelete()const;
//  void open(InMemoryAccessMode); //TODO: incomplete function definition
//  void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const; //TODO: incomplete function definition
    InMemoryFile(Core::Path const&);
//  void flushToDisk(leveldb::Env *); //TODO: incomplete function definition
//  void close(InMemoryAccessMode); //TODO: incomplete function definition
    bool isOpenForWrite()const;
    bool isMarkedForDelete()const;
    void rename(Core::Path const&);
    bool isMarkedDirty()const;
    std::string getFilename()const;
//  void append(leveldb::Slice const&); //TODO: incomplete function definition
};
