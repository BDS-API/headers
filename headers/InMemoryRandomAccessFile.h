#pragma once

class InMemoryRandomAccessFile : leveldb::RandomAccessFile {

    virtual void ~InMemoryRandomAccessFile();
    virtual void ~InMemoryRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;
}
