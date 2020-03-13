#pragma once

#include <memory>


class InMemorySequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    ~InMemorySequentialFile(); // _ZN22InMemorySequentialFileD2Ev
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition // _ZN22InMemorySequentialFile4ReadEmPN7leveldb5SliceEPc
    virtual void Skip(unsigned long); // _ZN22InMemorySequentialFile4SkipEm
    InMemorySequentialFile(std::shared_ptr<InMemoryFile>); // _ZN22InMemorySequentialFileC2ESt10shared_ptrI12InMemoryFileE
};
