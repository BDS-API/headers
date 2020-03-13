#pragma once

#include <functional>


namespace Core {

    namespace ZipUtils {

        class ZipProgressList {

        public:
            ZipProgressList(); // _ZN4Core8ZipUtils15ZipProgressListC2Ev
            ~ZipProgressList(); // _ZN4Core8ZipUtils15ZipProgressListD2Ev
            void getCount(); // _ZN4Core8ZipUtils15ZipProgressList8getCountEv
            void _getSum(std::function<unsigned int (std::shared_ptr<Core::ZipUtils::ZipProgress>)>); // _ZN4Core8ZipUtils15ZipProgressList7_getSumESt8functionIFjSt10shared_ptrINS0_11ZipProgressEEEE
            void getSkipped(); // _ZN4Core8ZipUtils15ZipProgressList10getSkippedEv
            void getTotal(); // _ZN4Core8ZipUtils15ZipProgressList8getTotalEv
            void getProgress(); // _ZN4Core8ZipUtils15ZipProgressList11getProgressEv
            void clear(); // _ZN4Core8ZipUtils15ZipProgressList5clearEv
            void createProgress(); // _ZN4Core8ZipUtils15ZipProgressList14createProgressEv
        };
    }
}
