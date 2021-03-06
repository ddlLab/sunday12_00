#include "inventory.h"
#include "fabric_fabric.h"
#include <iostream>
#include <fstream>

using std::cout;


int main()
{

    eFabricFabric Fabric;
    for(int i=0;i<100;++i)
    {
        eItemSlot* item = Fabric.Make();
        cout<<i<<"\t"<<item->Dump()<<endl;
        delete item;
    }

/*
    eInventory invenory;
    invenory.Add(new eKnife());
    invenory.Add(new eSword());
    invenory.Add(new eAx());
    invenory.Add(new eHevyArmor());
    invenory.Add(new eMediumArmor());
    invenory.Add(new eLightArmor());
    invenory.Add(new eMagicArmor());
    invenory.Add(new eExpElik());
    invenory.Add(new eManaElik());
    invenory.Add(new eHealElik());
    invenory.Add(new eFireScroll());
    invenory.Add(new eFrostScroll());
    invenory.Add(new eElictricityScroll());
    invenory.Add(new ePoisonScroll());
    invenory.Add(new eDarkScroll());
    invenory.Add(new eHealScroll());
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
*/
    return 0;
}

