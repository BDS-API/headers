#pragma once

class IFileReadAccess {

    virtual ~IFileReadAccess();
    virtual ~IFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
