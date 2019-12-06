#pragma once

class InMemoryRandomAccessFile : leveldb::RandomAccessFile {

public:
    virtual ~InMemoryRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;

    void InMemoryRandomAccessFile(std::shared_ptr<InMemoryFile>);
};
