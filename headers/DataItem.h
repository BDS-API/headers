#pragma once

class DataItem {

public:
    virtual ~DataItem();
    virtual bool isDataEqual(DataItem const&)const;

    void DataItem(DataItemType, unsigned short);
    void getType(void)const;
    void setDirty(bool);
    void getId(void)const;
    bool isDirty(void)const;
};
