#pragma once

#include <memory>


class InMemoryRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    ~InMemoryRandomAccessFile(); // _ZN24InMemoryRandomAccessFileD2Ev
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition // _ZNK24InMemoryRandomAccessFile4ReadEmmPN7leveldb5SliceEPc
    InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>); // _ZN24InMemoryRandomAccessFileC2ESt10shared_ptrI12InMemoryFileE
};
