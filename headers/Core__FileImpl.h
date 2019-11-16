#pragma once

class Core::FileImpl {

    virtual void Core::FileImpl::~FileImpl();
    virtual void Core::FileImpl::~FileImpl();
    virtual void _ZNK4Core6File_c8_getPathB5cxx11Ev;
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
    virtual void off_91988AE;
    virtual void aNumbytes;
    virtual void unk_91988BB;
    virtual void off_91988AE;
    virtual void aNumbytes;
    virtual void aNumbytes;
    virtual void aPosition;
    virtual void aPbuf;
    virtual void aNumbytes;
    virtual void unk_91988BB;
    virtual void unk_91988FE;
    virtual void aPosition;
    virtual void aPbuf;
    virtual void aNumbytes;
    virtual void aPsize;
    virtual void aPsize;
}
