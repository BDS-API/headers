#pragma once

#include <string>
#include <vector>
#include <functional>


namespace Core {

    namespace ZipUtils {

        void getTranslatedZipResult(int);
        void zip(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::ZipSettings const&);
        void zip(std::vector<Core::PathBuffer<std::string>> const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, std::function<std::string (Core::Path)>, Core::ZipUtils::ZipSettings const&);
        void _zipEncodedPathToUTF8(Core::Path const&);
        void getTranslatedUnzipResult(int);
        void exists(Core::Path const&, Core::Path const&);
        void getFilenames(Core::Path const&, std::vector<Core::PathBuffer<std::string>> &, Core::ZipUtils::UnzipSettings const&);
//      void unzipToFlatFile(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, Core::FileBufferingMode, Core::ZipUtils::UnzipSettings const&); //TODO: incomplete function definition
        std::string readAssetFileZipped(Core::Path const&, Core::Path const&);
        void unzipInTransaction(Core::Path const&, Core::Path const&, Core::ZipUtils::ZipProgress &, bool, Core::ZipUtils::UnzipSettings const&);
    };
}
