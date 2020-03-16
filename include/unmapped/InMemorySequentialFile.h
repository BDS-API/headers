#pragma once

#include <memory>


class InMemorySequentialFile /*public leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    virtual ~InMemorySequentialFile(); // _ZN22InMemorySequentialFileD2Ev
    virtual void __fake_function0(); // fake
    virtual void Read__incomplete0(unsigned long, long *, char *); //TODO: incomplete function definition // _ZN22InMemorySequentialFile4ReadEmPN7leveldb5SliceEPc
    virtual void Skip(unsigned long); // _ZN22InMemorySequentialFile4SkipEm
    InMemorySequentialFile(std::shared_ptr<InMemoryFile>); // _ZN22InMemorySequentialFileC2ESt10shared_ptrI12InMemoryFileE
};
