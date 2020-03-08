#pragma once



class InMemoryWritableFile : leveldb::WritableFile {

public:
    virtual InMemoryWritableFile::~InMemoryWritableFile()
    virtual void Append(leveldb::Slice const&);
    virtual void Close();
    virtual void Flush();
    virtual void Sync();

    InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
};
