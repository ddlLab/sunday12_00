#include "inventory.h"
#include "elix.h"
#include "weapon.h"
#include "armor.h"
#include "scroll.h"
#include "fabric_scroll.h"
#include "fabric_weapon.h"
#include "fabric_elik.h"
#include <iostream>
#include <fstream>

using std::cout;


int main()
{
 /*   eFabricScroll scrollFabric;
    for(int i=0;i<100;++i)
    {
        eScroll* scroll = scrollFabric.Make();
        cout<<i<<"\t"<<scroll->Dump()<<endl;
        delete scroll;
    }
*/
     eFabricWeapon weaponFabric;
    for(int i=0;i<100;++i)
    {
        eWeapon* weapon = weaponFabric.Make();
        cout<<i<<"\t"<<weapon->Dump()<<endl;
        delete weapon;
    }
    eFabricElik elikFabric;
    for(int i=0;i<100;++i)
    {
        eElik* elik = elikFabric.Make();
        cout<<i<<"\t"<<elik->Dump()<<endl;
        delete elik;
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

