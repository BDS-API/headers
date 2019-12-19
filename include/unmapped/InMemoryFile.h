#pragma once

class InMemoryFile {

public:

    InMemoryFile(Core::Path const&);
    void rename(Core::Path const&);
    void open(InMemoryAccessMode);
    void close(InMemoryAccessMode);
    void append(leveldb::Slice const&);
    void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const;
    void flushToDisk(leveldb::Env *);
    void markForDelete(void);
    bool isSafeToDelete(void)const;
    bool isOpenForWrite(void)const;
    bool isMarkedForDelete(void)const;
    bool isMarkedDirty(void)const;
};
