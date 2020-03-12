#pragma once

#include "../bedrock/file/access/IFileAccess.h"


class ZlibFileAccessWrapper {

public:
    void getZipFunctions()const;
    ~ZlibFileAccessWrapper();
    ZlibFileAccessWrapper(IFileAccess *);
};
