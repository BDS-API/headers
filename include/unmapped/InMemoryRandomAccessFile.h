#pragma once



class InMemoryRandomAccessFile : leveldb::RandomAccessFile {

public:
    virtual InMemoryRandomAccessFile::~InMemoryRandomAccessFile()
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;

    InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>);
};
