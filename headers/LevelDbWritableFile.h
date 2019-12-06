#pragma once

class LevelDbWritableFile : leveldb::WritableFile {

public:
    virtual ~LevelDbWritableFile();
    virtual void Append(leveldb::Slice const&);
    virtual void Close(void);
    virtual void Flush(void);
    virtual void Sync(void);

    void LevelDbWritableFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Core::File &&);
    void SyncDirIfManifest(void);
};
