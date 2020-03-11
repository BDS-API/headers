#pragma once

#include <memory>
#include "./Path.h"
#include <vector>
#include <string>


namespace Core::ZipUtils {

class ZipFileRestrictions {

public:

    ZipFileRestrictions();
    ~ZipFileRestrictions();
    void allowFile(Core::Path const&)const;
    void addForbiddenExtensions(std::vector<std::string, std::allocator<std::string>> const&);
    void addRestrictedExtensions(std::vector<std::string, std::allocator<std::string>> const&);
    void addForbiddenFilenames(std::vector<std::string, std::allocator<std::string>> const&);
};

}