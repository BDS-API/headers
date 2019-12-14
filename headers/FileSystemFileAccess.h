#pragma once

class FileSystemFileAccess : IFileAccess {

public:
    virtual ~FileSystemFileAccess();
    virtual void fopen(Core::Path const&, std::string const&);
    virtual void fclose(void *);
    virtual void fseek(void *, long, int);
    virtual void ftell(void *);
    virtual void getReadInterface(void)const;
    virtual void getWriteInterface(void);
    virtual void unload(void);

    void FileSystemFileAccess(FileSystemMode);
};
