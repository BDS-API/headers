#pragma once

class InMemorySequentialFile : leveldb::SequentialFile {

    virtual void ~InMemorySequentialFile();
    virtual void ~InMemorySequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);
}
