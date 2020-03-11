#pragma once

#include "../bedrock/file/access/IFileAccess.h"


class ZlibFileAccessWrapper {

public:

    ZlibFileAccessWrapper(IFileAccess *);
    void getZipFunctions()const;
    ~ZlibFileAccessWrapper();
};
