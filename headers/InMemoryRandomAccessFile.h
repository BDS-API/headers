#pragma once

class InMemoryRandomAccessFile : leveldb::RandomAccessFile {

    virtual ~InMemoryRandomAccessFile();
    virtual ~InMemoryRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;
}
