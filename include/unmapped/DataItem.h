#pragma once



class DataItem {

public:
    virtual DataItem::~DataItem();
    virtual bool isDataEqual(DataItem const&)const;

    DataItem(DataItemType, unsigned short);
    void getType(void)const;
    void setDirty(bool);
    void getId(void)const;
    bool isDirty(void)const;
};
