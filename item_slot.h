#pragma once

#include <sstream>
#include <string>

using std::stringstream;
using std::string;
using std::endl;


enum class eSlotTypes
{
  INVALID = -1,
  WEAPON,
  ARMOR,
  ELIK,
  SCROLL,
};

class eItemSlot
{
public:
    eItemSlot()                             = default;
    eItemSlot(const eItemSlot&)             = default;
    eItemSlot(eItemSlot&&)                  = default;

    eItemSlot(eSlotTypes);
    virtual ~eItemSlot()                    = default;

    eItemSlot& operator=(const eItemSlot&)  = default;
    eItemSlot& operator=(eItemSlot&&)       = default;

    void             Upgrade();
    virtual bool     IsBroken()     const;
    virtual string   Dump()         const;
    virtual int      Repair();

protected:
    int                 maxDurability   = 0;
    int                 durability      = 0;
    int                 cost            = 0;
    const eSlotTypes    type            = eSlotTypes::INVALID;
    int                 durabilityType  = 0;
    virtual void     Upgrade_();
    virtual bool     CanUpgrade()   const;
  /*
  Types of durability:
  1-can't rapair
  2-can rapair
  */
};
