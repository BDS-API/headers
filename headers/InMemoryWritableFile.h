#pragma once

class InMemoryWritableFile : leveldb::WritableFile {

    virtual ~InMemoryWritableFile();
    virtual ~InMemoryWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);
}
