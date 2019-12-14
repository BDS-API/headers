#pragma once

class Core::ZipUtils::ZipFileRestrictions {

public:

    void ZipFileRestrictions(void);
    void allowFile(Core::Path const&)const;
    void addForbiddenExtensions(std::vector<std::string, std::allocator<std::string>> const&);
    void addRestrictedExtensions(std::vector<std::string, std::allocator<std::string>> const&);
    void addForbiddenFilenames(std::vector<std::string, std::allocator<std::string>> const&);
};
