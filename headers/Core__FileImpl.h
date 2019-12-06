#pragma once

class Core::FileImpl {

public:
    virtual ~FileImpl();

    void getNumFiles(void);
    void FileImpl(Core::FileSystemImpl *, Core::FileOpenMode);
    void setLoggingEnabled(bool);
    void getLoggingEnabled(void)const;
    void getTransaction(void);
    void getBlockSize(void)const;
    bool isOpen(void);
    void getOpenMode(void)const;
    void close(void);
    void read(void *, unsigned long, unsigned long *);
    void _readOperation(Core::Result &&, unsigned long);
    void readExactly(void *, unsigned long);
    void skip(unsigned long);
    void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
    void getPosition(unsigned long *);
    void setPosition(unsigned long);
    void write(void const*, unsigned long);
    void _writeOperation(Core::Result &&, unsigned long);
    void flush(void);
    void getSize(unsigned long *);
    void getRemainingSize(unsigned long *);
    void notifyChangeInFileSize(long, long);
};
