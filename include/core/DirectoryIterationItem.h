#pragma once

#include "./Path.h"
#include "./PathPart.h"
#include <string>


namespace Core {

class DirectoryIterationItem {

public:

//  DirectoryIterationItem(Core::DirectoryIterationFlags); //TODO: incomplete function definition
    void getFileSize()const;
    void setFileSize(unsigned long);
    void getFileSizeAllocationOnDisk()const;
    void setFileSizeAllocationOnDisk(unsigned long);
    std::string getFullPathName()const;
    void setName(Core::PathPart const&);
    void getName()const;
    void setFullPathName(Core::Path);
    void getType()const;
//  void setType(Core::FileType); //TODO: incomplete function definition
    bool isDirectory()const;
    bool isFile()const;
    void getCreateTime()const;
    void setCreateTime(long);
    void getModifyTime()const;
    void setModifyTime(long);
    ~DirectoryIterationItem();
};

}