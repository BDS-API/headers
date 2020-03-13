#pragma once

#include <string>


class InMemoryFile {

public:
    InMemoryFile(Core::Path const&); // _ZN12InMemoryFileC2ERKN4Core4PathE
    ~InMemoryFile(); // _ZN12InMemoryFileD2Ev
    std::string getFilename()const; // _ZNK12InMemoryFile11getFilenameB5cxx11Ev
    void rename(Core::Path const&); // _ZN12InMemoryFile6renameERKN4Core4PathE
//  void open(InMemoryAccessMode); //TODO: incomplete function definition // _ZN12InMemoryFile4openE18InMemoryAccessMode
//  void close(InMemoryAccessMode); //TODO: incomplete function definition // _ZN12InMemoryFile5closeE18InMemoryAccessMode
//  void append(leveldb::Slice const&); //TODO: incomplete function definition // _ZN12InMemoryFile6appendERKN7leveldb5SliceE
//  void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const; //TODO: incomplete function definition // _ZNK12InMemoryFile4readEmmPN7leveldb5SliceEPcRm
//  void flushToDisk(leveldb::Env *); //TODO: incomplete function definition // _ZN12InMemoryFile11flushToDiskEPN7leveldb3EnvE
    void markForDelete(); // _ZN12InMemoryFile13markForDeleteEv
    bool isSafeToDelete()const; // _ZNK12InMemoryFile14isSafeToDeleteEv
    bool isOpenForWrite()const; // _ZNK12InMemoryFile14isOpenForWriteEv
    bool isMarkedForDelete()const; // _ZNK12InMemoryFile17isMarkedForDeleteEv
    bool isMarkedDirty()const; // _ZNK12InMemoryFile13isMarkedDirtyEv
};
