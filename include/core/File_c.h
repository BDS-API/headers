#pragma once

using namespace Core;

class File_c : Core::FileImpl {

public:
    virtual void Core::File_c::~File_c();
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

    File_c(_IO_FILE *, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode);
    void _open(std::unique_ptr<Core::File_c, std::default_delete<Core::File_c>> &, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode);
};
