#pragma once



class InMemorySequentialFile : leveldb::SequentialFile {

public:
    InMemorySequentialFile::~InMemorySequentialFile()
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);

    InMemorySequentialFile(std::shared_ptr<InMemoryFile>);
};
