#pragma once



using namespace Core::ZipUtils;

class ZipProgressList {

public:

    ZipProgressList(void);
    void getCount();
    void _getSum(std::function<unsigned int ()(std::shared_ptr<Core::ZipUtils::ZipProgress>)>);
    void getSkipped();
    void getTotal();
    void getProgress();
    void clear();
    void createProgress();
};
