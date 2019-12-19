#pragma once

class InMemoryWritableFile : leveldb::WritableFile {

public:
    virtual InMemoryWritableFile::~InMemoryWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);

    InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
