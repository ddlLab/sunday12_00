#include "inventory.h"
#include "elix.h"
#include "weapon.h"
#include "armor.h"
#include "scroll.h"
#include <iostream>
#include <fstream>

using std::cout;


int main()
{
    eInventory invenory;
    invenory.Add(new eKnife());
    invenory.Add(new eSword());
    invenory.Add(new eAx());
    invenory.Add(new eArmor());
    invenory.Add(new eElik());
    invenory.Add(new eFireScroll());
    invenory.Add(new eFrostScroll());
    std::ofstream log("log3.txt");
    log<<invenory.Dump();
    log<<"****************************"<<endl;
    eItemSlot* item = invenory.Get(2);
    if(item)
    {
        invenory.Drop(item);
        log<<item->Dump();
        log<<"item drop - OK"<<endl;
        delete item;
        log<<invenory.Dump();
    }
    log<<"****************************"<<endl;
    item = invenory.Get(1);
    if(item)
    {
        invenory.Delete(item);
        if(item)
        {
            log<<item->Dump();  //if I call this I have access violation
        }
        log<<"item deleted - OK"<<endl;
        log<<invenory.Dump();
    }
    log<<"****************************"<<endl;
    item = invenory.Get(7);
    if(!item)
    {
        log<<"Empty item"<<endl;
    }
    invenory.Clear();
    log<<invenory.Dump();
    log.close();

    return 0;
}

