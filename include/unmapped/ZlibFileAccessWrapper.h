#pragma once



class ZlibFileAccessWrapper {

public:
    ~ZlibFileAccessWrapper();
    ZlibFileAccessWrapper(IFileAccess *);
    void getZipFunctions()const;
};
