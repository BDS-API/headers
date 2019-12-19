#pragma once

using namespace Core;

class FlatFile : Core::FileImpl {

public:
    virtual void Core::FlatFile::~FlatFile();
    virtual void _getPath[abi:cxx11](void)const;
    virtual void _getBlockSize(void)const;
    virtual void _isOpen(void);
    virtual void _close(void);
    virtual void _read(void *, unsigned long, unsigned long *);
    virtual void _readExactly(void *, unsigned long);
    virtual void _skip(unsigned long);
    virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
    virtual void _getPosition(unsigned long *);
    virtual void _setPosition(unsigned long);
    virtual void _write(void const*, unsigned long);
    virtual void _flush(void);
    virtual void _getSize(unsigned long *);
    virtual void _getRemainingSize(unsigned long *);

    FlatFile(Core::FileSystemImpl *, Core::FileOpenMode, std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>>, Core::Path const&, unsigned long, unsigned long);
};
