#pragma once

#include <vector>


namespace Core {

    namespace ZipUtils {

        class ZipFileRestrictions {

        public:
            void allowFile(Core::Path const&)const;
            void addRestrictedExtensions(std::vector<std::string> const&);
            void addForbiddenExtensions(std::vector<std::string> const&);
            void addForbiddenFilenames(std::vector<std::string> const&);
            ZipFileRestrictions();
            ~ZipFileRestrictions();
        };
    }
}
