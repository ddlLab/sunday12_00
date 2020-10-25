#include "inventory.h"

//**********************************
void eInventory::Clear()
{
    for(eItemSlot* item : *this)
    {
        delete item;
    }
    clear();
}
//----------------------------------
void eInventory::Add(eItemSlot* _item)
{
    emplace_back(_item);
}
//----------------------------------
bool eInventory::Delete(eItemSlot*& _item)
{
    for(size_t i =0; i < size(); ++i)
    {
        if(at(i) == _item)
        {
            delete _item;
            _item = nullptr;
            erase(begin()+i);
            break;
        }
    }
    return _item == nullptr;
}
//----------------------------------
void  eInventory::Drop(eItemSlot* _item)
{
    for(size_t i =0; i < size(); ++i)
    {
        if(at(i) == _item)
        {
            erase(begin()+i);
            break;
        }
    }
}
//----------------------------------eItemSlot*  eInventory::Get(size_t _id)
{
    return _id < size() ? at(_id) : nullptr;
}
//----------------------------------
string eInventory::Dump() const
{
    stringstream ss;
    ss<<"["<<endl;
    for(const eItemSlot* item : *this)
    {
        ss<<"("<<item->Dump()<<")"<<endl;
    }
    ss<<"]"<<endl;
    return ss.str();
}
//----------------------------------
