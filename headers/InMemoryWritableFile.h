#pragma once

class InMemoryWritableFile : leveldb::WritableFile {

public:
    virtual ~InMemoryWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);

    void InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
