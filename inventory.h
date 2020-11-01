#pragma once

#include "item_slot.h"
#include <vector>

using std::vector;

class eInventory : protected vector<eItemSlot*>
{
public:
    eInventory()                                = default;
    eInventory(const eInventory&)               = delete;
    eInventory(eInventory&&)                    = delete;
    virtual ~eInventory()                       { Clear(); };

    eInventory& operator=(const eInventory&)    = delete;
    eInventory& operator=(eInventory&&)         = delete;

    void        Clear();
    void        Add(eItemSlot*);
    bool        Delete(eItemSlot*&);
    void        Drop(eItemSlot*);
    eItemSlot*  Get(size_t _id);

    string      Dump()  const;
};
