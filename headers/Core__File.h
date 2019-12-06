#pragma once

class Core::File {

public:

    void File(void);
    void write(void const*, unsigned long);
    bool isOpen(void)const;
    void File(Core::File&&);
    void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
    void read(void *, unsigned long, unsigned long *);
    void skip(unsigned long);
    void flush(void);
    void getSize(unsigned long *);
    void readExactly(void *, unsigned long);
    void getRemainingSize(unsigned long *);
    void getPosition(unsigned long *);
    void setPosition(unsigned long);
    void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode);
    void setLoggingEnabled(bool);
    void close(void);
    bool isNearTransactionLimit(unsigned long)const;
    void cleanPath(Core::Path);
    void cleanPathSeparators(Core::Path);
    void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
    void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, unsigned char const*);
    void getBlockSize(void)const;
    void File(std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &&, std::unique_ptr&&<Core::FileSystemImpl, std::default_delete<std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>> &&>>);
};
