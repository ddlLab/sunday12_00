#include "inventory.h"
#include <iostream>
#include <fstream>

using std::cout;


int main()
{
    eInventory invenory;
    invenory.Add(new eWeapon());
    invenory.Add(new eWeapon());
    invenory.Add(new eWeapon());
    invenory.Add(new eArmor());
    invenory.Add(new eElik());
    invenory.Add(new eScroll());
    invenory.Add(new eScroll());
    std::ofstream log("log2.txt");
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

