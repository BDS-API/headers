#pragma once

#include <string>


class InMemoryFile {

public:
    ~InMemoryFile();
    bool isMarkedDirty()const;
    void rename(Core::Path const&);
//  void open(InMemoryAccessMode); //TODO: incomplete function definition
//  void close(InMemoryAccessMode); //TODO: incomplete function definition
    bool isMarkedForDelete()const;
//  void flushToDisk(leveldb::Env *); //TODO: incomplete function definition
    void markForDelete();
    bool isOpenForWrite()const;
    std::string getFilename()const;
//  void append(leveldb::Slice const&); //TODO: incomplete function definition
    bool isSafeToDelete()const;
    InMemoryFile(Core::Path const&);
//  void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const; //TODO: incomplete function definition
};
