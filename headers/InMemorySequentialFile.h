#pragma once

class InMemorySequentialFile : leveldb::SequentialFile {

    virtual ~InMemorySequentialFile();
    virtual ~InMemorySequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);
}
