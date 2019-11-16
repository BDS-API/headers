#pragma once

class IFileWriteAccess {

    virtual void ~IFileWriteAccess();
    virtual void ~IFileWriteAccess();
    virtual void fwrite(void const*, unsigned long, unsigned long, void *);
}
