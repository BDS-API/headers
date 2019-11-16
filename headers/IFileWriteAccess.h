#pragma once

class IFileWriteAccess {

    virtual ~IFileWriteAccess();
    virtual ~IFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
