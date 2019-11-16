#pragma once

class FileSystemFileAccess : IFileAccess {

    virtual void FileSystemFileAccess::~FileSystemFileAccess();
    virtual void FileSystemFileAccess::~FileSystemFileAccess();
    virtual void fopen(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void fclose(void *);
    virtual void fseek(void *, long, int);
    virtual void ftell(void *);
    virtual void getReadInterface(void)const;
    virtual void getWriteInterface(void);
    virtual void unload(void);
}
