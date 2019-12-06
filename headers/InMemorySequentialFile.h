#pragma once

class InMemorySequentialFile : leveldb::SequentialFile {

public:
    virtual ~InMemorySequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);

    void InMemorySequentialFile(std::shared_ptr<InMemoryFile>);
};
