#pragma once

#include <string>
#include <functional>
#include <vector>


namespace Core {

    namespace ZipUtils {

        void getTranslatedZipResult(int); // _ZN4Core8ZipUtils22getTranslatedZipResultEi
        void getTranslatedUnzipResult(int); // _ZN4Core8ZipUtils24getTranslatedUnzipResultEi
        void zip(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::ZipSettings const&); // _ZN4Core8ZipUtils3zipERKNS_4PathES3_RNS0_11ZipProgressEbRKNS0_11ZipSettingsE
        void zip(std::vector<Core::PathBuffer<std::string>> const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, std::function<std::string (Core::Path)>, Core::ZipUtils::ZipSettings const&); // _ZN4Core8ZipUtils3zipERKSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaIS9_EERKNS_4PathERNS0_11ZipProgressEbSt8functionIFS8_SE_EERKNS0_11ZipSettingsE
        void unzipInTransaction(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::UnzipSettings const&); // _ZN4Core8ZipUtils18unzipInTransactionERKNS_4PathES3_RNS0_11ZipProgressEbRKNS0_13UnzipSettingsE
//      void unzipToFlatFile(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, Core::FileBufferingMode, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition // _ZN4Core8ZipUtils15unzipToFlatFileERKNS_4PathES3_RNS0_11ZipProgressENS_17FileBufferingModeERKNS0_13UnzipSettingsE
        void _zipEncodedPathToUTF8(Core::Path const&); // _ZN4Core8ZipUtils21_zipEncodedPathToUTF8ERKNS_4PathE
        void getFilenames(Core::Path const&, std::vector<Core::PathBuffer<std::string>> &, Core::ZipUtils::UnzipSettings const&); // _ZN4Core8ZipUtils12getFilenamesERKNS_4PathERSt6vectorINS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaISC_EERKNS0_13UnzipSettingsE
        void exists(Core::Path const&, Core::Path const&); // _ZN4Core8ZipUtils6existsERKNS_4PathES3_
        std::string readAssetFileZipped(Core::Path const&, Core::Path const&); // _ZN4Core8ZipUtils19readAssetFileZippedB5cxx11ERKNS_4PathES3_
    };
}
