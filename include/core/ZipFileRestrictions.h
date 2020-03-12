#pragma once

#include <vector>
#include <string>
#include "Path.h"


namespace Core {

    namespace ZipUtils {

        class ZipFileRestrictions {

        public:
            void addForbiddenFilenames(std::vector<std::string> const&);
            void addForbiddenExtensions(std::vector<std::string> const&);
            void addRestrictedExtensions(std::vector<std::string> const&);
            ~ZipFileRestrictions();
            ZipFileRestrictions();
            void allowFile(Core::Path const&)const;
        };
    }
}
