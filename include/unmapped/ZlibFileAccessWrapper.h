#pragma once

#include "../bedrock/file/access/IFileAccess"


class ZlibFileAccessWrapper {

public:

    ZlibFileAccessWrapper(IFileAccess *);
    void getZipFunctions(void)const;
};
