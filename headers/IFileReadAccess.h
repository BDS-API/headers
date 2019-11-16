#pragma once

class IFileReadAccess {

    virtual void ~IFileReadAccess();
    virtual void ~IFileReadAccess();
    virtual void fread(void *, unsigned long, unsigned long, void *)const;
}
