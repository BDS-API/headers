#pragma once



using namespace Core;

class FileImpl {

public:
    virtual Core::FileImpl::~FileImpl()

    void getNumFiles();
    FileImpl(Core::FileSystemImpl *, Core::FileOpenMode);
    void setLoggingEnabled(bool);
    void getLoggingEnabled()const;
    void getTransaction();
    void getBlockSize()const;
    bool isOpen();
    void getOpenMode()const;
    void close();
    void read(void *, unsigned long, unsigned long *);
    void _readOperation(Core::Result &&, unsigned long);
    void readExactly(void *, unsigned long);
    void skip(unsigned long);
    void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
    void getPosition(unsigned long *);
    void setPosition(unsigned long);
    void write(void const*, unsigned long);
    void _writeOperation(Core::Result &&, unsigned long);
    void flush();
    void getSize(unsigned long *);
    void getRemainingSize(unsigned long *);
    void notifyChangeInFileSize(long, long);
};
