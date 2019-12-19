#pragma once

using namespace Core::ZipUtils;

class ZipProgressList {

public:

    ZipProgressList(void);
    void getCount(void);
    void _getSum(std::function<unsigned int ()(std::shared_ptr<Core::ZipUtils::ZipProgress>)>);
    void getSkipped(void);
    void getTotal(void);
    void getProgress(void);
    void clear(void);
    void createProgress(void);
};
