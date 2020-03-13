#pragma once

#include <vector>


namespace Core {

    namespace ZipUtils {

        class ZipFileRestrictions {

        public:
            ZipFileRestrictions(); // _ZN4Core8ZipUtils19ZipFileRestrictionsC2Ev
            ~ZipFileRestrictions(); // _ZN4Core8ZipUtils19ZipFileRestrictionsD2Ev
            void allowFile(Core::Path const&)const; // _ZNK4Core8ZipUtils19ZipFileRestrictions9allowFileERKNS_4PathE
            void addForbiddenExtensions(std::vector<std::string> const&); // _ZN4Core8ZipUtils19ZipFileRestrictions22addForbiddenExtensionsERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS8_EE
            void addRestrictedExtensions(std::vector<std::string> const&); // _ZN4Core8ZipUtils19ZipFileRestrictions23addRestrictedExtensionsERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS8_EE
            void addForbiddenFilenames(std::vector<std::string> const&); // _ZN4Core8ZipUtils19ZipFileRestrictions21addForbiddenFilenamesERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS8_EE
        };
    }
}
