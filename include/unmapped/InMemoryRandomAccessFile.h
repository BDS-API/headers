#pragma once

#include <memory>


class InMemoryRandomAccessFile /*public leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    virtual ~InMemoryRandomAccessFile(); // _ZN24InMemoryRandomAccessFileD2Ev
    virtual void __fake_function0(); // fake
    virtual void Read__incomplete0(unsigned long, unsigned long, long *, char *)const; //TODO: incomplete function definition // _ZNK24InMemoryRandomAccessFile4ReadEmmPN7leveldb5SliceEPc
    InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>); // _ZN24InMemoryRandomAccessFileC2ESt10shared_ptrI12InMemoryFileE
};
