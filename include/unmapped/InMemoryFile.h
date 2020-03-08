#pragma once

#include "../core/Path"


class InMemoryFile {

public:

    InMemoryFile(Core::Path const&);
    void rename(Core::Path const&);
    void open(InMemoryAccessMode);
    void close(InMemoryAccessMode);
    void append(leveldb::Slice const&);
    void read(unsigned long, unsigned long, leveldb::Slice *, char *, unsigned long &)const;
    void flushToDisk(leveldb::Env *);
    void markForDelete();
    bool isSafeToDelete()const;
    bool isOpenForWrite()const;
    bool isMarkedForDelete()const;
    bool isMarkedDirty()const;
};
